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

	// ���� ������ �ޱ� ����
	char server_ip[40] = "";
	printf("���� IP : ");
	fgets(server_ip, sizeof(server_ip), stdin);

	// ----------����---------------
	// ���� ����
	SOCKET sock;
	sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN servaddr = { 0 }; 
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = inet_addr(server_ip);
	servaddr.sin_port = htons(PORT_NUM);

	// ���� �õ�
	int result = 0;
	result = connect(sock, (SOCKADDR*)&server_ip, sizeof(servaddr));

	// ���� �õ� Error ó��
	if (result == -1) return -1;

	// DoIt
	char msg[MAX_MSG_LEN] = "";

	while(1) {
//		gets_s(msg, MAX_MSG_LEN);
		fgets(msg, MAX_MSG_LEN, stdin);
		send(sock, msg, sizeof(msg), 0);

		// �Է¸޼����� exit �̸� �����Ѵ�.
		if (strcmp(msg, "exit") == 0) break;

		recv(sock, msg, sizeof(msg), 0);
		printf("���� : %s\n", msg);
	}
	
	closesocket(sock);

	// Winsock ����
	WSACleanup();
	

	return 0;
}
