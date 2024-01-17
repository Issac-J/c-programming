#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {

	int server_socket, client_socket;
	
	struct sockaddr_in server_addr client_addr;

	// 소켓 생성
	server_socket = socket(PF_INET, SOCK_STREAM, 0);

	return 0;
}
