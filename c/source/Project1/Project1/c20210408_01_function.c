#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

//�Ű����� : ����, ��ȯ�� : ����
void voidTest() {
	printf("void�Լ�\n");
}

void voidTest2(int a) {
	printf("�Ű�����:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("�μ��� ��:%d\n", a+b);
}
// call by value���
// 
//�Ű�����:������
// �Լ��� �̸� : area, �Ű������̸� : r(double)��
//���� ���̸� ������ִ� ����� ���� �Լ� �����
viod area(double r) { //��������:�Լ� ����� ����, �Լ� ����� �Ҹ�
	scanf("%.2f", r*r*3.14);
}

//�Ű����� : ������(double)��
//��ȯ�� : ����(double)
double areaReturn(double r) { //�ȿ� return�� ������ void
	double area = r * r * 3.14;
	return area; //��ȯ���� �Ѱ�
}

//�� ������ �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int add(int a, int b, int c) {
	return a + b + c;
}

// �� ���� ����(int)�� �Ű������� �޾Ƽ� ���� �Ǽ���(double)�� ��ȯ�ϴ� �Լ�
double add(int a, int b) {
	return (double)a / c; //�� �� �������� �������� �����Ƿ� �ϳ��� �Ǽ��� �ٲ��ش�
}

// �� ���� �Ű������� �޾Ƽ� �� �� �� ū ���� ��ȯ�ϴ� �Լ�
double div(int a, int b) {

}

int max(int a, int b) { 
	int m;
	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else 
		m = 0;

	return m; //return�� �Լ��� ����
}

int main() {
	//�Լ�
	//voidTest();

	//voidTest2(10);

	//voidTest3(20, 30);

	//double r; //��������
	//printf("��������?");
	//scanf("%lf", &r); //����� ���� ��������� �Է��� ���� lf�� ��� ��
	//area(r);

	//double r = 3.6;
	//double rValue = areaReturn(r); // ��areaReturn(r);�� rValue�� ����
	//printf("����: %.2f", rValue);

	//printf("�հ�:%d\n", add(20, 30, 50));

	//int a = 10, b = 3;
	//double d = div(a, b);
	//printf("������:%f\n", d);

	//printf("ū���� %d", max(20, 10));

	int a = 20, b = 20;
	int m = max(a, b);
	if (m != 0)
		printf("ū����:%d\n", m);
	else
		printf("%d == %d\n", a, b);

	return 0;
}