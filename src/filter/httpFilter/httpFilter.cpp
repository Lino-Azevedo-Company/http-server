#include "httpFilter.hpp"

void http::HttpFilter::setNextFilter(std::shared_ptr<http::HttpFilter> filter) {
    this->nextFilter = move(filter);
}

std::shared_ptr<http::HttpFilter> http::HttpFilter::getNextFilter() {
    return this->nextFilter;
}
