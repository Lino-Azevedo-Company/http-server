#ifndef HTTP_FILTER_HANDLER_HPP
#define HTTP_FILTER_HANDLER_HPP

#include <memory>

#include "httpFilter/httpFilter.hpp"

namespace http::filter {

    class HttpFilterHandler {
        public:
            HttpFilterHandler(std::shared_ptr<HttpFilter> filter);

            void handleRequest();
        
        private:
            std::shared_ptr<HttpFilter> initialFilter;
    };

}

#endif /* HTTP_FILTER_HANDLER_HPP */
