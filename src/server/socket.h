#ifndef SOCKET_H
#define SOCKET_H
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>

class Socket{
  private:
    int socketIns;
    struct sockaddr_in sockAddress;
  public:
    Socket(int host=AF_INET, int type=SOCK_STREAM, int protocol=0, int port=3000) {
      socketIns = socket(host, type, protocol);
      sockAddress.sin_family = host;
      sockAddress.sin_addr.s_addr = INADDR_ANY;
      sockAddress.sin_port = htons(port);
      
      setOptions();
    };

    void setOptions() {
      int reusePort = 1;
      setsockopt(socketIns,SOL_SOCKET, SO_REUSEADDR, &reusePort, sizeof(int));
    }

    int getSocket() {
      return socketIns;
    }

    void start() {
      if(bind(socketIns, (struct sockaddr *) &sockAddress, sizeof(sockAddress)) == -1){
        std::cout << "deu merda no bind" << std::endl;
        exit(EXIT_FAILURE);
      }
      if(listen(socketIns, 4) == -1){
        std::cout << "deu merda no listen" << std::endl;
        exit(EXIT_FAILURE);
      }
    }
    
    void closeCon() {
      close(socketIns);
    }

};
#endif
