#ifndef SERVER_LOGGED_HPP
#define SERVER_LOGGED_HPP

#include <string>
#include <iostream>

namespace logger {
    enum class LoggerType {
        DEBUG,
        ERROR
    };

    class ServerLogger {
     public:
        ServerLogger(std::string origin) : origin(origin) {}

        void debug(std::string message);
        void error(std::string message);
    
     private:
        std::string origin;

        void log(LoggerType type, std::string message);
    };
}

#endif /* SERVER_LOGGED_HPP */
