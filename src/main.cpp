#include <iostream>
#include <memory>

#include "log/serverLogger.hpp"

int main() {
    std::cout << "Hello world!" << std::endl;
    std::unique_ptr<logger::ServerLogger> logger = std::make_unique<logger::ServerLogger>("Main");
    
    logger->debug("Teste debug");
    logger->error("Teste error");
    return EXIT_SUCCESS;
}
