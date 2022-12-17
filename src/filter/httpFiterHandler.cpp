#include "httpFilterHandler.hpp"

namespace http::filter {
    HttpFilterHandler::HttpFilterHandler(std::shared_ptr<HttpFilter> filter) {
        this->initialFilter = filter;
    }
    void HttpFilterHandler::handleRequest() {
        this->initialFilter->doFilter();
    }
}