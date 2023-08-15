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

	// Winsock �ʱ�ȭ
	nRet = WSAStartup(MAKEWORD(2, 2), &wsadata);

	// ��ȯ �� �˻�
	if (nRet != 0) {
		switch (nRet) {
		case WSASYSNOTREADY:
			printf("��Ʈ��ũ ������ �غ� ����\n");
			break;

		case WSAVERNOTSUPPORTED:
			printf("�䱸�� ���� ������ ����Ʈ �ȵ�\n");
				break;

		case WSAEINPROGRESS:
			printf("���ŷ ������ ������\n");
				break;

		case WSAEPROCLIM:
			printf("�ִ� ���� ���μ��� ó���� �ʰ�\n");
				break;

		case WSAEFAULT:
			printf("�ι�° �μ��� �����Ͱ� ��ȿ\n");
				break;
		}
	}

	// ����
	
	// ��� ���� ����
	SOCKET sock = SetTCPServer(PORT_NUM, BACKLOG_SIZE);

	// Accept Loop
	AcceptLoop(sock);

	// ���� ����
	closesocket(sock);

	// Winsock ����
	WSACleanup();
}
SOCKET SetTCPServer(short pnum, int blog) {

	// Socket ����
	SOCKET sock;
	sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	// Server �ּ�
	SOCKADDR_IN serverAddr = { 0 };
	serverAddr.sin_family = AF_INET;	// � ������ IP �ּҸ� ������� ���Ѵ�. : IPv4 �� ���
	serverAddr.sin_addr = GetDefaultMyIp();
	serverAddr.sin_port = htons(pnum);

	// ��Ʈ��ũ �������̽��� ���� ���� : Bind
	int result = 0;
	result = bind(sock, (SOCKADDR*)&serverAddr, sizeof(serverAddr));

	// ���� ������ ���(result ���� -1 �� ��) : -1 �� 0xFFFFFFFF (SOCKET_ERROR)
	if (result == -1) return -1;

	// ���� �Ͱ��� ���, ��α� ť ũ�⸦ �����Ѵ�.
	result = listen(sock, blog);

	// Listen ������ ���
	if (result == -1) return -1;

	return 0;
}

void AcceptLoop(SOCKET sock) {
	
	// Ŭ���̾�Ʈ�� �ۼ����� �ϱ� ���� �� �ٸ� �ϳ��� ���� ����
	// ������ Client ������ �����ϱ� ���� ���� ����
	SOCKET dosock;
	SOCKADDR_IN client_addr = { 0 };

	int len = sizeof(client_addr);

	while (1) {
		// ���� ����
		dosock = accept(sock, (SOCKADDR*)&client_addr, &len);
		printf("%d", dosock);

		// Error ó��
		if (dosock == -1) {
			perror("Accept ����");
			break;
		}

		printf("%s:%d�� ���� ��û ����\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

		// Ŭ���̾�Ʈ�� �ۼ����ϴ� �Լ�(DoIt)
		DoIt(dosock);
	}

}

void DoIt(SOCKET sock_client) {
	char msg[MAX_MSG_LEN] = "";

	// �޼����� �޴´�.
	// recv ��ȯ���� 0�̸� ������ ������ ���̴�. 
	while (recv(sock_client, msg, sizeof(msg), 0) > 0) {
		printf("recv: %s\n", msg);
		send(sock_client, msg, sizeof(msg), 0);
	}

	// ���� ���� (���� �ݱ�)
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
