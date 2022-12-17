#ifndef HTTP_REQUEST_HPP
#define HTTP_REQUEST_HPP

#include <string>
#include <map>

#include "httpMethod.hpp"

namespace http {
    class HttpRequest {
     public:
        HttpRequest() {}

        std::string getOrigin();
        HttpMethod getMethod();
        std::string getRequestedurl();
        std::map<std::string, std::string> getHeaders();
        std::string getBody();

        void setOrigin(std::string origin);
        void setMethod(HttpMethod method);
        void setRequestedurl(std::string requestedUrl);
        void setHeaders(std::map<std::string, std::string> headers);
        void setBody(std::string body);

     private:
            std::string origin;
            HttpMethod method;
            std::string requestedUrl;
            std::map<std::string, std::string> headers;
            std::string body;
    };
}

#endif /* HTTP_REQUEST_HPP */
