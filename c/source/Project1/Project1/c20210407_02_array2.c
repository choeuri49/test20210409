#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main() {
	//�������迭
	//int arr[2][3];
	//arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3; 
	//arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;

	
	//for (int i = 0; i < 2; i++) { // i : �� , int i = 0; : 0�� �ε�������
	//	for (int j = 0; j < 3; j++) { // j : ��
	//		arr[i][j] = 1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

	//int size = sizeof(arr);
	//int rsize = sizeof(arr) / sizeof(arr[0]);  // 24/12=2
	//int csize = sizeof(arr[0]) / sizeof(int); // 12/4=3
	//printf("������:%d\n", rsize); //���� ����

	//int a = 0;
	//for (int i = 0; i < 2; i++) { 
	//	for (int j = 0; j < 3; j++) { 
	//		arr[i][j] = (3*i) + j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	// �� �л��� ������ ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� ��ȣ ������� ������ ��� ���
	int score[2][3];
	
	int size = sizeof(score) / sizeof(int);

	// �Է�
	for (int i = 0; i < 2; i++) {
		printf("%d)��, ��, �� ���� �Է�",i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}			
	}

	// �հ�, ��� ���
	int sum = 0;
	for (int i = 0; i < 2; i++) { //�л���ȣ
		for (int j = 0; j < 3; j++) { //����
			sum += score[i][j];
		}
		// �հ�, ���
		printf("�հ�:%d��, ���:%.2f��\n", i+1, sum, (double)sum / 3);
		sum = 0;

	}



	return 0;

}