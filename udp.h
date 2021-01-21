#ifndef UDP_H
#define UDP_H

#include <sys/types.h>
#include <sys/socket.h>

class UDP{
    public:
       /**
        * @brief Create a udp socket function
        * 
        * @param family        Protocol family (AF_INET)
        * @param type          TCP:SOCK_STREAM;UDP:SOCK_DGRAM
        * @param protocol      0
        * @return int          return sockfd
        */
       int create_udp_socket(int family, int type, int protocol);
       
       /**
        * @brief Create a udp sendto function
        * 
        * @param sockfd        This sockfd is returned by create_udp_socket function
        * @param buff          This buff is pointer of buffer
        * @param nbytes        This is the number of data bytes to be sent
        * @param flags 
        * @param to 
        * @param addrlen       
        * @return ssize_t      error: return -1
        */
       ssize_t create_udp_sendto(int sockfd, const void *buff, size_t nbytes, int flags, 
                                const struct sockaddr *to, socklen_t addrlen);


};

#endif