#define _CRT_SECURE_NO_WARNINGS // scanf�Լ��� ����ϱ� ���� 
#include <stdio.h>

int main() {
	// ���ǽ��� ���� �� ������ ����� ������ �� ������ ������ ����
	//int a=-10;

	//if (a > 0) {
	//	printf("���\n");
	//}
	//else {
	//	// ���̽�� �޸� elif ���� -> �ƴҶ� else �ȿ� if���� ����. ��øif��
	//	if (a < 0) {
	//		printf("����\n");
	//	}
	//	else {
	//		printf("����� ������ �ƴմϴ�.\n");
	//	}
	//	
	//}


	// ǥ���� �����ϰ�
	//int a = 10;
	//if (a > 0) 
	//	printf("���\n");
	//
	//else if (a < 0) 
	//		printf("����\n");
	//	
	//	else 
	//		printf("����� ������ �ƴմϴ�.\n");
		

	//�ǽ�) �� ������ �Է¹޾� ū ���� ���(�� ���� ���� ���� �ִ�)
	//int a, b;
	//printf("�� ������?");
	//scanf("%d %d", &a, &b);

	//if (a > b)
	//	printf("ū ���� %d\n", a);
	//else if (b > a)
	//		printf("ū ���� %d\n", b);
	//else
	//	printf("�� ���� ����");


	// �ǽ�) �л��� ������ �Է¹޾� ������ ����ϴ� ���α׷�
	//int score;
	//printf("�����Է�");
	//scanf("%d", &score);

	//if (score > 100 || score < 0) 
	//	printf("�߸��� �����Դϴ�.\n");
	//else if (score >= 90)
	//	printf("A");
	//else if (score >= 80)
	//	printf("B");
	//else if (score >= 70)
	//	printf("C");
	//else if (score >= 60)
	//	printf("D");
	//else
	//	printf("F");


	//�ǽ�) ������ ���� �Է¹޾� ����, ��� ���. ��, 60�� �̸��� �Ѱ����̶� ������ ����
	//int k, e, m;
	//printf("��,��,�� ���� �Է�");
	//scanf("%d,%d,%d", &k, &e, &m);

	//if (k < 60 || e < 60 || m < 60) { // or : ||
	//	printf("�����Դϴ�.");
	//}
	//else {
	//	int sum = k + e + m;
	//	double avg = sum / 3.;
	//	printf("����:%d\n", sum);
	//	printf("���:%.2f\n", avg);
	//}


	// �������� ���ϱ�

	//int y;
	//printf("���� �Է�");
	//scanf("%d", &y);

	////4�� ������ �������� �Ѵ�. �׸��� 100���� ������ �������� �ȵȴ�. �Ǵ� 400������ ������ �������� �����̴�.
	//if (y%4==0 && y%100!=0 || y%400==0)
	//	printf("%d���� �����Դϴ�.\n",y);
	//else
	//	printf("%d���� ������ �ƴմϴ�.\n",y);


	//�ǽ�)�޴� ���� ���� �����ϸ� ���� �� �ڳʸ� �˷��ִ� ���α׷�
	printf("--------------------\n");
	printf("1.���� 2.«�� 3.������ 4.����� 5.���� 6.���İ�Ƽ\n");
	printf("�޴���?\n");

	int no;
	printf("���Ĺ�ȣ�Է�\n");
	scanf("%d", &no);

	if (no == 1 || no == 2)
		printf("�߽�");
	else if (no == 3 || no == 4)
		printf("�ѽ�");
	else if (no == 5 || no == 6)
		printf("���");
	else
		printf("�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���.");


	return 0;
}