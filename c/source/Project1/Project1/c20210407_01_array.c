#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#define LEN 5  // 5 ��� LEN �̶�� ���� ����� ��

int main() {
	// �迭 : array
	//int arr[3]; //4����Ʈ ���� 3�� ����� ����. int:��, arr:�ּ�
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;  //�ʱ�ȭ. arr[0]�� �������̶�� ���� �ȴ�.

	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr)); //�ּ� ��������, arr�� ������ ����(byte)

	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d", arr[i]);
	//}

	//�ǽ�)
	//double arr[3] = {1.1, 2.2, 3.1}; //����� ���ÿ� �ʱ�ȭ
	//double arr[5];

	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);  // 24/8 = 3
	//printf("������:%d\n", size);


	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}

	//for (int i = 0; i < size; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//������ �迭
	//char arr[] = {'p', 'y', 't', 'h', 'o', 'n'};

	//int size = sizeof(arr)/ sizeof(char);  // char���̱� ������ char�� ����

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]); 
	//}


	// �迭���� ��
	// c�� �����迭
	//int arr[] = { 4,5,9,12,34 };
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);  // 20/4 =5byte

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i]; //sum = sum + arr[i];
	//}
	//printf("�հ�:%d\n", sum);


	// �Է¹޾� �� ���ϱ�
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ� �̹Ƿ� ������ ������ �Ҵ� ����. ��������� �ؾ�
	//int a = 5;
	//const int a = 5; // ��� : ������ �Ұ����� ��
	// #LEN�� define�� ���ǵ� ��ũ�λ�� : �����ϵǱ� ���� ��ü
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int); 

	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������?", i+1);
	//	scanf("%d", &arr[i]);
	//}

	//// ����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p", arr[i], &arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i]; //sum = sum + arr[i];
	//}
	//printf("�հ�:%d\n", sum);


	// �� �л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ�, ��ȣ ������� ����ϴ� ���α׷� + �����հ�� ��� ���, ���ϴ� �л���ȣ �Է� �� �ش� �л� ���� ���
	//int score[3];
	//int sum = 0;
	//int size = sizeof(score) / sizeof(int); //����� ���ؼ� �� �����ŭ �ݺ����� ������.

	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ������?", i+1);
	//	scanf("%d", &score[i]);
	//}
	//printf("--------------\n");

	//for (int i = 0; i < size; i++) {
	//	printf("%d���� %d��\n", i+1, score[i]);
	//	sum += score[i]; //sum�� score[i]�� �հ� ����
	//}
	//printf("--------------\n");
	//printf("�հ�:%d��\n", sum);
	//printf("���:%.2f��\n", (double)sum/size); //�Ҽ��� ��������(double)
	//

	//// �л���ȣ�� �˻��ؼ� �ش� �л� ���� ���
	//
	////int score[3] = {20,50,30};
	//int no; //�˻��� ��ȣ�� �����ϱ� ���� ����
	//char quit; //���ắ��

	//while (1) {
	//	printf("���ϴ� �л��� ���?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no > 3) {
	//		printf("�߸��� ��ȣ�Դϴ�.\n");
	//		continue; //��� ����. �ٽ� �Է��� �� �ְ� ���� �ǵ��ư�
	//	}
	//	printf("�ش� �л��� ������:%d\n", score[no - 1]);
	//	printf("--------------\n");
	//	printf("�����Ͻðڽ��ϱ�?(q)");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;

	//}

	// do while������
	//do {
	//	printf("���ϴ� �л��� ���?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no > 3) {
	//		printf("�߸��� ��ȣ�Դϴ�.\n");
	//		continue; //��� ����. �ٽ� �Է��� �� �ְ� ���� �ǵ��ư�
	//	}
	//	printf("�ش� �л��� ������:%d\n", score[no - 1]);
	//	printf("--------------\n");
	//	printf("�����Ͻðڽ��ϱ�?(q)");
	//	scanf("%c", &quit);

	//} while (quit != 'q');


	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 1 2 3 4 8 13 .....
	int fibo[20];
	fibo[0] = 0, fibo[1] = 1;


	for (int i = 2; i < 20; i++) { //������ 2���ε�������, 20���� ����������
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}
	
	//���
	for (int i = 0; i < 20; i++) {
		printf("%d",fibo[i]);
	}
	return 0;
}