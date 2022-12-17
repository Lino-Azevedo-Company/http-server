#ifndef HTTP_METHOD_HPP
#define HTTP_METHOD_HPP

namespace http {
    enum class HttpMethod {
        GET,
        POST,
        PUT,
        HEAD,
        DELETE,
        CONNECT,
        OPTIONS,
        TRACE,
        PATCH
    };
}

#endif /* HTTP_METHOD_HPP */
