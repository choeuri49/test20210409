#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	//�������ǹ� : switch ~ case
	//int a = 1;
	//switch (a) {
	//case 0: //a�� 0�̶��
	//	printf("zero\n"); break; // switch�������� break�� �� �� �ִ�.
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("�߸��� �����Դϴ�\n");

	//}


	//���� ������ �� ���
	/*int mon = 3;
	switch (mon) {*/
	//case 1:
	//	printf("31��\n"); break;
	//case 2:
	//	printf("28��\n"); break;
	//case 3:
	//	printf("31��\n"); break;
	//case 4:
	//	printf("30��\n"); break;
	//case 5:
	//	printf("31��\n"); break;
	//case 6:
	//	printf("30��\n"); break;
	//case 7:
	//	printf("31��\n"); break;
	//case 8:
	//	printf("31��\n"); break;
	//case 9:
	//	printf("30��\n"); break;
	//case 10:
	//	printf("31��\n"); break;
	//case 11:
	//	printf("30��\n"); break;
	//case 12:
	//	printf("31��\n"); break;
	//default:
	//	printf("�߸��� ���Դϴ�.\n");


	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31��\n"); break;
	//case 2:
	//	printf("28��\n"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30��\n"); break;
	//default:
	//	printf("�߸��� ���Դϴ�.\n");
	//}


	//���ĸ޴� switch������
	printf("--------------------\n");
	printf("1.���� 2.«�� 3.������ 4.����� 5.���� 6.���İ�Ƽ\n");
	printf("�޴���?\n");

	int no;
	printf("���Ĺ�ȣ�Է�\n");
	scanf("%d", &no);

	switch (no) {
	case 1:
	case 2:
		printf("�߽�"); break;
	case 3:
	case 4:
		printf("�ѽ�"); break;
	case 5:
	case 6:
		printf("���"); break;
	default:
		printf("�߸��� �޴� ��ȣ �Է��Դϴ�.");
	}

	return 0;
}