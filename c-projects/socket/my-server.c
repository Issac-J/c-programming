#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {

	int server_socket;
	
	struct sockaddr_in server_addr;

	// 소켓 생성
	server_socket = socket(PF_INET, SOCK_STREAM, 0);

	// 소켓 설정: 전송 방식, 주소, 포트
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serer_addr.sin_port = htons(7989);	

	return 0;
}
