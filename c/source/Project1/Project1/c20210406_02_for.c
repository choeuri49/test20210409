#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> //ǥ��������Լ�

int main() {
	// �ݺ��� : for
	//int i; //�ݺ��� ����
	//for (i=0; i<10; i++) { //�ʱ�ȭ, i�� 10���� ���� ���� ������ �����Ѵ�, ������
	//	printf("%d", i); //������� : �ʱ�ȭ, ���ǹ�, {}��, ������, ���ǹ�, ������, ���ǹ�, ������, ���ǹ�... ������ ������ �ɶ����� �ݺ�
	//}


	// ������ ���
	//for (int i=1; i<10; i++) {
	//	printf("2 * %d = %d\n", i, 2*i);
	//}


	// �� �Է��ؼ� ������ ���
	//int dan;

	//while (1) {
	//	printf("�ܼ� �Է�");
	//	scanf("%d", &dan);
	//	if (dan == 0) break; //���� 0�� �ԷµǸ� ����������
	//	for (int i = 1, a = 0; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}

	//do {
	//	printf("�ܼ� �Է�");
	//	scanf("%d", &dan);
	//	if (dan != 0) //dan�� 0�� ���� ������ �����ض�
	//		for (int i = 1, a = 0; i < 10; i++) {
	//			printf("%d * %d = %d\n", dan, i, dan * i);
	//		}
	//} while (dan != 0);


	//���� for��
	//for (int i = 2; i < 10; i++) {
	//	printf("[%d]��\n", i);
	//	
	//	for (int j = 1; j < 10; j++) {
	//		
	//		printf("%d * %d = %d\n", i, j, i*j);

	//	}
	//}


	////3�� for
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);


	// �ǽ�) 1���� 100������ ��
	
	//int sum = 0;

	//for (int i = 1; i < 101; i++) {
	//	
	//	sum += i; //sum�� i�� ���ϰ� �ٽ� sum�� �ִ´�
	//
	//}
	//printf("1���� 100������ ���� %d", sum); //�ݺ����� ������ ���


	// 1���� �Է¹��� �������� ��
	//int n, sum = 0;
	//printf("n����?");
	//scanf("%d", &n);

	//for (int i = 1; i < n+1; i++) { //i�� for�� ��������
	//	int a = 10;
	//	sum += i; //sum�� i�� ���ϰ� �ٽ� sum�� �ִ´�

	//}
	//printf("1���� %d������ ���� %d\n", n, sum);
	////printf("i�� ���簪 : %d\n", i); //i���� ��� �Ұ�


	// �ǽ� ) �� ������ �Է¹޾Ƽ� ū ������ ���� ���� �� ���� ���ϴ� ���α׷�. ��� �Է��ϴ� 0�� �Է��ϸ� ���α׷� ����. �ִ�ݺ�Ƚ�� 10��

	//int a, b;

	//for (int i = 0; i<10; i++) {
	//	
	//	// �� ���� �Է¹ޱ�
	//	printf("�� ������?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (b == 0) break;

	//	// ū ������ ���� �� ���� ����ϱ�
	//	if (a > b) printf("���밪: %d\n", a - b);
	//	
	//	else printf("���밪: %d\n", b - a);
	//		
	//}


	// �ǽ�) �����1

	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// �����2
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//�����3
	//for (int i = 1; i < 7; i++) {

	//	//�������
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//�����4
	//for (int i = 0; i < 6; i++) {

	//	//�������
	//	for (int j = 0; j < 6 - i; j++) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int j = 0; j < i*2+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// ��������) �� ���� ���ڸ� �Է¹޾Ƽ� �� �� ������ ������ ���� ����ϴ� ���α׷�
	//int a, b;
	//int n = 1, sum = 0;
	//printf("ù��° ����?");
	//scanf("%d", &a);
	//printf("�ι�° ����?");
	//scanf("%d", &b);

	//for (int i = 1; i < n + 1; i++) {
	//	printf("�� ���� ���� %d", a+b);
	//}


	//���丮�� ���ϱ�
	//int fac = 7;
	//int mul = 1; //���Ѱ� ��������
	//for (int i = 1; i < fac + 1; i++) {
	//	mul *= i;
	//}
	//printf("%d\n", mul);



	//�� ������ �Է¹޾� ū ������ ���� �� ����
	//int a, b;

	//for (int i = 0; i<10; i++) {
	//	
	//	printf("�� ������?");
	//	scanf("%d", &a);
	//	scanf("%d", &b);

	//	if (a > b) printf("%d\n", a - b);
	//	
	//	else printf("%d\n", b - a);
	//		
	//}


	//1���� 1�� �����ϴ� ���� ���ؼ� ���� 1000 �̻��� �Ǵ� ������ �� ���� ���ϴ� ���α׷�
	//int i = 1, sum = 0;
	//while (sum<1000) {
	//	i++; 
	//	sum += i; //sum = sum + i;
	//}
	//printf("i:%d sum:%d\n", i, sum);


	// 1���� 10������ �������� �� ���� ��� �μ��� ���� 10�� �Ǵ� �μ��� ���ϴ� ���α׷�
	//for (int i = 1; i < 10; i++) {
	//	for (int j = i; j < 10; j++) {
	//		if (i+j==10)
	//		printf("%d,%d\n", i, j);
	//	}
	//}


	// ���ɸ޴� ����. �޴��� ���� ���ݰ� �ش� �ڳʸ� ����ϴ� ���α׷��� �ۼ�
	//char no;
	// 
	//printf("�޴��� ������");
	//printf("1.���� 2.«�� 3.������ 4.����� 5.���� 6.���İ�Ƽ\n");
	//printf("�޴���?\n");

	//int no;
	//printf("���Ĺ�ȣ�Է�\n");
	//scanf("%d", &no);

	//switch (no) {
	//case '1':
	//case '2':
	//	printf("�߽�"); break;
	//case '3':
	//case '4':
	//	printf("�ѽ�"); break;
	//case '5':
	//case '6':
	//	printf("���"); break;
	//case 'q':
	//	printf("���α׷��� ����"); break;
	//default:
	//	printf("�߸��� �޴� ��ȣ �Է��Դϴ�.");

	

	return 0;
}