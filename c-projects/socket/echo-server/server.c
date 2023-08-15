// Echo Server
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <WinSock2.h>
#pragma comment(lib, "ws2_32")

#include <stdio.h>

#define PORT_NUM 10200
#define BACKLOG_SIZE 5
#define MAX_MSG_LEN 256

SOCKET SetTCPServer(short pnum, int blog);
IN_ADDR GetDefaultMyIp();
void AcceptLoop(SOCKET sock);
void DoIt(SOCKET sock_client);


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

	// 구현
	
	// 대기 소켓 가동
	SOCKET sock = SetTCPServer(PORT_NUM, BACKLOG_SIZE);

	// Accept Loop
	AcceptLoop(sock);

	// 소켓 해제
	closesocket(sock);

	// Winsock 해제
	WSACleanup();
}
SOCKET SetTCPServer(short pnum, int blog) {

	// Socket 생성
	SOCKET sock;
	sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	// Server 주소
	SOCKADDR_IN serverAddr = { 0 };
	serverAddr.sin_family = AF_INET;	// 어떤 형태의 IP 주소를 사용할지 정한다. : IPv4 를 사용
	serverAddr.sin_addr = GetDefaultMyIp();
	serverAddr.sin_port = htons(pnum);

	// 네트워크 인터페이스와 소켓 결합 : Bind
	int result = 0;
	result = bind(sock, (SOCKADDR*)&serverAddr, sizeof(serverAddr));

	// 연결 실패한 경우(result 값이 -1 일 때) : -1 은 0xFFFFFFFF (SOCKET_ERROR)
	if (result == -1) return -1;

	// 연걸 셩공한 경우, 백로그 큐 크기를 설정한다.
	result = listen(sock, blog);

	// Listen 실패한 경우
	if (result == -1) return -1;

	return 0;
}

void AcceptLoop(SOCKET sock) {
	
	// 클라이언트와 송수신을 하기 위한 또 다른 하나의 소켓 생성
	// 접속한 Client 정보를 저장하기 위해 변수 선언
	SOCKET dosock;
	SOCKADDR_IN client_addr = { 0 };

	int len = sizeof(client_addr);

	while (1) {
		// 연결 수락
		dosock = accept(sock, (SOCKADDR*)&client_addr, &len);
		printf("%d", dosock);

		// Error 처리
		if (dosock == -1) {
			perror("Accept 실패");
			break;
		}

		printf("%s:%d의 연결 요청 수락\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

		// 클라이언트와 송수신하는 함수(DoIt)
		DoIt(dosock);
	}

}

void DoIt(SOCKET sock_client) {
	char msg[MAX_MSG_LEN] = "";

	// 메세지를 받는다.
	// recv 반환값이 0이면 연결을 종료한 것이다. 
	while (recv(sock_client, msg, sizeof(msg), 0) > 0) {
		printf("recv: %s\n", msg);
		send(sock_client, msg, sizeof(msg), 0);
	}

	// 연결 종료 (소켓 닫기)
	closesocket(sock_client);
}

IN_ADDR GetDefaultMyIp() {

	char localhostname[MAX_PATH];
	IN_ADDR addr = { 0, };
	if (gethostname(localhostname, MAX_PATH) == SOCKET_ERROR) return addr;

	HOSTENT* ptr = gethostbyname(localhostname);

	while (ptr && ptr->h_name) {
		if (ptr->h_addrtype == PF_INET) {
			memcpy(&addr, ptr->h_addr_list[0], ptr->h_length);
			break;
		}
		
		ptr++;
	}

	return addr;
}
