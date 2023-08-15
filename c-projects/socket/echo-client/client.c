// Echo Client
#include <WinSock2.h>
#pragma comment(lib, "ws2_32")

#include <stdio.h>

#define PORT_NUM 10200
#define BACKLOG_SIZE 5
#define MAX_MSG_LEN 256

int main() {
	int nRet;

	WSADATA wsadata;

	// Winsock 초기화
	nRet = WSAStartup(MAKEWORD(2, 2), &wsadata);

	// 반환 값 검사
	if (nRet != 0) {
		switch (nRet) {
		case WSASYSNOTREADY:
			printf("네트워크 접속을 준비 못함\n");
			break;

		case WSAVERNOTSUPPORTED:
			printf("요구한 윈속 버전이 서포트 안됨\n");
			break;

		case WSAEINPROGRESS:
			printf("블로킹 조작이 실행중\n");
			break;

		case WSAEPROCLIM:
			printf("최대 윈속 프로세스 처리수 초과\n");
			break;

		case WSAEFAULT:
			printf("두번째 인수의 포인터가 무효\n");
			break;
		}
	}

	// 서버 정보을 받기 위해
	char server_ip[40] = "";
	printf("서버 IP : ");
	fgets(server_ip, sizeof(server_ip), stdin);

	// ----------구현---------------
	// 소켓 생성
	SOCKET sock;
	sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN servaddr = { 0 }; 
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = inet_addr(server_ip);
	servaddr.sin_port = htons(PORT_NUM);

	// 연결 시도
	int result = 0;
	result = connect(sock, (SOCKADDR*)&server_ip, sizeof(servaddr));

	// 연결 시도 Error 처리
	if (result == -1) return -1;

	// DoIt
	char msg[MAX_MSG_LEN] = "";

	while(1) {
//		gets_s(msg, MAX_MSG_LEN);
		fgets(msg, MAX_MSG_LEN, stdin);
		send(sock, msg, sizeof(msg), 0);

		// 입력메세지가 exit 이면 종료한다.
		if (strcmp(msg, "exit") == 0) break;

		recv(sock, msg, sizeof(msg), 0);
		printf("수신 : %s\n", msg);
	}
	
	closesocket(sock);

	// Winsock 해제
	WSACleanup();
	

	return 0;
}
