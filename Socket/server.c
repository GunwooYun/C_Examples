#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<pthread.h>

#define CLNT_MAX 10

int clntSocks[CLNT_MAX];

int main(int argc, char** argv)
{
	int servSock;
	int clntSock;
	struct sockaddr_in serv_addr;
	// int socket(int domain, int type, int protocol)
	servSock = socket(PF_IFNET, SOCK_STREAM, 0);

	serv_addr.sin_family = AF_INET;
	// htonl -> host order to network order 32bit
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY); // get pc ip
	// htons -> 16bit
	serv_addr.sin_port = htons(atoi(7889); //set port
	
	if(bind(servSock, &serv_addr, sizeof(serv_addr)) == -1){
		printf("bind error\n");
		}
	
	if(listen(servSock, 5) == -1){
		printf("listen error\n");
	}

	while(1){
		
		
	}



	return 0;
}
