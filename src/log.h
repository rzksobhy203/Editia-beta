#pragma once

#include <memory>

// ignore all warnings raised inside these headers
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#pragma warning(pop)

namespace editia
{
	class Log
    {
    public:
        static void init();

        static std::shared_ptr<spdlog::logger> &getLogger() { return s_Logger; }

    private:
        static std::shared_ptr<spdlog::logger> s_Logger;
    private:
        Log() {}
        ~Log() {}
    };
}

// Log defints
#define LOG_INFO(...) ::editia::Log::getLogger()->info(__VA_ARGS__)
#define LOG_WARN(...) ::editia::Log::getLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...) ::editia::Log::getLogger()->error(__VA_ARGS__)
#define LOG_TRACE(...) ::editia::Log::getLogger()->trace(__VA_ARGS__)
