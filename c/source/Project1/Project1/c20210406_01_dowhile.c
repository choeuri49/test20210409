#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	////do ~while
	//int a = -1;
	//do {
	//	printf("%d\n", a);
	//} while (a>0); //�ϴ� do ���� ���� �ּ� �� ���� ���� �� while


	//����ڿ��� ���� �Է¹޾Ƽ� y�̸� �����÷��� ���
	//char answer;
	//do {
	//	printf("����~~~�÷���\n");
	//	printf("��� �ұ��? (y)�� ������ �÷����մϴ�.");
	//	scanf("%c", &answer);
	//	getchar(); //���Ͱ� ó��
	//} while (answer == 'y');


	// � ������ ��� �Է¹޾Ƽ� �հ踦 ���ϰ�, 0�� �Է��� ��� �����ϴ� ���α׷� �ۼ�
	int a, sum = 0; //�Է��� ���� ���� a, ������ ���� sum

	do {
		printf("������?");
		scanf("%d", &a);
		sum += a;

	} while (a!=0); //a�� 0�� ���� ���� ���� �ݺ��϶�
	printf("�հ�� %d\n", sum);

	return 0;
}