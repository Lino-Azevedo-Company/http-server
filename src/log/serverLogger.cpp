#include <iostream>
#include <map>
#include <chrono>
#include <iomanip>

#include "serverLogger.hpp"

namespace logger {

    
    void ServerLogger::debug(std::string message) {
        this->log(LoggerType::DEBUG, message);
    }
    void ServerLogger::error(std::string message) {
        this->log(LoggerType::ERROR, message);
    }
    

    std::ostream& operator<<(std::ostream& out, const LoggerType type) {
        std::map<LoggerType, std::string> values;
        if (values.size() == 0) {
#define INSERT_ELEMENT(p) values[p] = #p
        INSERT_ELEMENT(LoggerType::DEBUG);
        INSERT_ELEMENT(LoggerType::ERROR);
#undef INSER_ELEMENT
        }

        return out << values[type];
    }

    void ServerLogger::log(LoggerType type, std::string message) {
        auto time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        auto gmtTime = std::gmtime(&time);
        auto timestamp = std::put_time(gmtTime, "%a %b %e %H:%M:%S %Y");

        std::cout << timestamp << " " << origin << " :: " << type << " :: " << message << std::endl; 
    }
}
