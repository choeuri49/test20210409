#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <Windows.h> //Sleep()�� ���� ����

// �Լ� �����
// �Ű����� : ī��Ʈ�ٿ� �� t
// ��ȯ�� : ����
// �Լ��� ��� : ī��Ʈ�ٿ� ���
void countdown(int t) {
	for (int i = t; i > -1; i--) {
		Sleep(1000); 
		printf("%d��\n", i);
	}
}


int main() {
	//ī��Ʈ �ٿ�

	printf("ī��Ʈ �ٿ� ����\n");
	countdown(5); // ���� ���� �Լ� ȣ��
	printf("�߻�");


	return 0;

}