#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	//�ݺ��� : while
	//while (1) {
	//	printf("c!!!");
	//}

	//break�� �̿��� �ݺ��� Ż���ϱ�
	//int cnt = 0;
	//while (1) { // 1:true, 0:false . 1�� ���� ���̱� ������ ��� �ݺ�
	//	printf("%d c!!!\n", cnt+1);
	//	cnt++; //cnt += 1;  //cnt = cnt + 1;
	//	if (cnt > 9) break;

	//}

	//1~10������ ��
	//int i = 0 , sum = 0;
	//while (i<10) {
	//	//printf("%d\n",++i); //++�� �տ� �ٿ��� ������ �� ���
	//	//i++;
	//	sum += ++i; //i=i+1; sum = sum + i;

	//}
	//printf("�հ�:%d\n", sum);


	//���� 2000�� �Ѵ� ������ �� ���� ���϶�.
	//int i = 0, sum = 0;
	//while (sum<2000) { //sum�� 2000���� ������������ �ݺ�
	//	i++; // i�� 1�� ����
	//	sum += i; //sum = sum + i;
	//}
	//printf("i:%d sum:%d\n", i, sum); //2000�� �Ѱ� �Ǹ� false�� �ǰ� ��������


	�ǽ�) 1~20������ �� �� 3�� ����� ����ϴ� ���α׷�
	1�� ���
	int a = 0;
	while (a<20) { 
		a++; //1�� ����
		if (a % 3 == 0) { //a�� 3���� ���� �������� 0�̶��
			printf("%d ",a);
		}
	}

	//2�� ���
	//int a = 3;
	//while (a < 20) {
	//	printf("%d ", a);
	//	a += 3; //a�� 3�� ���ؼ� a�� �־��

	//}


	//3�� ��� break�� ����ؼ� �ذ�
	//int a = 0;
	//while (1) {
	//	a+=3; //a�� 3�� ����
	//	if (a > 20) break; // a�� 20���� ū�� ��� �ϱ� ���� �����ϸ� 21�� ��µ��� �ʰ� �� �� ����
	//	printf("%d ", a);
	//}

	//coutinue : ����϶� (break : �ݺ����� ����������)
	//int a = 0;
	//while (a<10) {
	//	a++;
	//	if (a % 2 != 0) continue;  //a�� 2�� ���� �������� 0�� ���� �ʴٸ�(= �������� 1�� ���ٸ�) ��� ����ض�
	//		printf("%d ", a);
	//}




}