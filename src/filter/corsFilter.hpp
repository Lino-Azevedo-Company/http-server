#ifndef CORS_FILTER_HPP
#define CORS_FILTER_HPP

#include "httpFilter/httpFilter.hpp"

namespace http::filter {
    class CorsFilter : public HttpFilter {
        public:
            using HttpFilter::HttpFilter;

            void doFilter() override;
    };
}

#endif /* CORS_FILTER_HPP */
