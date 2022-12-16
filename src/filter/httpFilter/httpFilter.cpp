#include "httpFilter.hpp"

namespace http::filter {
    void HttpFilter::setNextFilter(std::shared_ptr<HttpFilter> filter) {
        this->nextFilter = move(filter);
    }

    std::shared_ptr<HttpFilter> HttpFilter::getNextFilter() {
        return this->nextFilter;
    }
}
