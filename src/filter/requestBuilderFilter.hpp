#ifndef REQUEST_BUILDER_FILTER_HPP
#define REQUEST_BUILDER_FILTER_HPP

#include "httpFilter/httpFilter.hpp"

namespace http::filter {
    class RequestBuilderFilter : public HttpFilter {
     public:
        using HttpFilter::HttpFilter;

        void doFilter() override;
    };
}

#endif /* REQUEST_BUILDER_FILTER_HPP */
