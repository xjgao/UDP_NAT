#include "udp.h"
#include <iostream>

/**
 * @brief            create_udp_socket implementation
 * 
 * @param family 
 * @param type 
 * @param protocol 
 * @return int 
 */
int UDP::create_udp_socket(int family, int type, int protocol){
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0){
        return -1;
    }else{
        return sockfd;
    }
}

/**
 * @brief            create_udp_sendto implementation
 * 
 * @param sockfd 
 * @param buff 
 * @param nbytes 
 * @param to 
 * @param addrlen 
 * @return int 
 */
ssize_t UDP::create_udp_sendto(int sockfd, const char* buff, size_t nbytes, int flags,
                          const struct sockaddr *to, socklen_t addrlen){

    ssize_t send_value = sendto(sockfd, buff, nbytes, flags);
    if(send_value < 0){
        return -1;
    }else{
        return send_value;
    }
}