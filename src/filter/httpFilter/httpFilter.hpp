#ifndef HTTP_FILTER_HPP
#define HTTP_FILTER_HPP

#include <memory>

namespace http::filter {
    class HttpFilter {
        public:
            explicit HttpFilter() {}

            void setNextFilter(std::shared_ptr<HttpFilter> filter);

            std::shared_ptr<HttpFilter> getNextFilter();

            virtual void doFilter() = 0;

        protected:
            std::shared_ptr<HttpFilter> nextFilter;
    };
}

#endif /* HTTP_FILTER_HPP */
