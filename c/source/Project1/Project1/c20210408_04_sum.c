#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

// ��������
//int sum;

// �Ű������� ������ �Է¹޾� �����ϴ� �Լ�
int userSum(int a) {
	static int sum = 0; //���������� �������� �̸��� ��ġ�� ���������� �켱
	//static�̶�� ������ 
	//�Լ��� ���ʷ� ������� �� �����ǰ�, ���α׷� ���� �� �Ҹ�
	//����� �Լ� �ȿ����� ���� ����(���������� Ư¡)
	sum = sum + a;
	return sum;
}


int main() {
	//��������, �������� ��뿹
	printf("����:%d\n", userSum(10));
	userSum(20);

}