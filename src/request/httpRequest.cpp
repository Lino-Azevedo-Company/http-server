#include "HttpRequest.hpp"

namespace http {
    std::string HttpRequest::getOrigin() {
        return origin;
    }
    HttpMethod HttpRequest::getMethod() {
        return method;
    }
    std::string HttpRequest::getRequestedurl() {
        return requestedUrl;
    }
    std::map<std::string, std::string> HttpRequest::getHeaders() {
        return headers;
    }
    std::string HttpRequest::getBody() {
        return body;
    }

    void HttpRequest::setOrigin(std::string origin) {
        this->origin = origin;
    }
    void HttpRequest::setMethod(HttpMethod method) {
        this->method = method;
    }
    void HttpRequest::setRequestedurl(std::string requestedUrl) {
        this->requestedUrl = requestedUrl;
    }
    void HttpRequest::setHeaders(std::map<std::string, std::string> headers) {
        this->headers = headers;
    }
    void HttpRequest::setBody(std::string body) {
        this->body = body;
    }
}
