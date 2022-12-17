#ifndef CONNECTION_H
#define CONNECTION_H
#include <memory>
#include "socket.h"
#define DEF_PKG_SIZE 4096
class Connection{
  private:
    std::shared_ptr<Socket> server;
    int con;
    char req[DEF_PKG_SIZE] = "";
    char res[DEF_PKG_SIZE] = "";
  public:
    Connection(std::shared_ptr<Socket> server) :server(move(server)){
      
    }

    int getConnection() {
      return con;
    }
    int makeConnection() {
      con = accept(server->getSocket(), NULL, NULL);
      return getConnection();
    }

    char* readRequest() {
      read(con, req, DEF_PKG_SIZE);
      return req;
    }

    void writeResponse() {};

    void closeCon() {
      close(con);
    }
};
#endif