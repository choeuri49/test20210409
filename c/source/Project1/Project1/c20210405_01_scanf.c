#define _CRT_SECURE_NO_WARNINGS // scanf�Լ��� ����ϱ� ���� 
#include <stdio.h>

int main() {
	//�Է��Լ�
	//������ �Է¹ޱ�
	//int a; //�Է¹޾Ƽ� ������ ������ ����. ���� a

	//printf("������?\n");
	//scanf("%d",&a); //� ���� �Է¹��� ������ ()�ȿ� ���� :"%d"  // &a : ���� a�� �ּ�
	//printf("�Է��� �� : %d  �ּ� : %p\n",a, &a);  // %p:�ּҸ� �ֱ� ���� ���� ���ڿ� . �ּҴ� ����غ��� 16������ ǥ�õ�


	//�Ǽ��� �Է¹ޱ�
	//float f; //�Էµ� f�� ����� ����
	//double d;
	//printf("float �Ǽ���?");
	//scanf("%f",&f); //�ݵ�� �ּ� &f �Ѱܾ�
	//printf("double �Ǽ���?");
	//scanf("%lf", &d); //���˹��� double�� ��� : %lf ������ //double������ �о���̰ڴٴ� ��

	//printf("�Է��� ��\n %f %p\n %f %p\n", f, &f, d, &d);


	//������ (char��) �Է¹ޱ�
	//char c;

	//printf("���ڴ�?");
	//scanf("%c", &c); //�ּ� &c
	//printf("�Է��� ���� %c,\n", c);


	// �ǽ�) �� ������ �Է¹޾Ƽ� �հ踦 ���
	//int a, b;

	//printf("ù��° ����?");
	//scanf("%d", &a);
	//printf("�ι�° ����?");
	//scanf("%d", &b); //&b:�ι�° �Է��� ���� b�� ����

	//�� ���� �Ѳ����� �Է¹ް�ʹٸ�
	//printf("�� ����?");
	//scanf("%d %d", &a, &b);

	//printf("�հ��: %d\n", a + b);

	//�ǽ�) ������ ��¥(��,��,��)�� �Է¹޾� ����ϱ�
	//int year, month, day;
	//printf("��, ��, ����?");
	//scanf("%d%d%d", &year, &month, &day);

	//printf("������ ��¥�� %d�� %d�� %d��\n", year, month, day);

	//�ǽ�) �� ���� ������ �Է¹޾� ������� ���ϱ�
	//int a, b;
	//printf("�� ����?");
	//scanf("%d %d", &a, &b);
	//
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %f\n", a, b, (double)a / b);


	// ���� ó���ϱ� ���� ����
	//int a, b;
	//char sign;
	//printf("������?"); //10+20 ���� ���� �Է¹޾����� ��� ���ڴ� ��� ó���ϴ°�. char 

	//printf("first?");
	//scanf("%d", &a);

	//getchar();//�� ���ڸ� �о ��ȯ�ϴ� �Լ� . ������ first ġ�� ģ ���Ͱ��� ó���ϱ� ���� �������� ���

	//printf("sign?");
	//scanf("%c", &sign);  // ���͵� �� �����̱� ������ getchar();���� ���� ����ġ�� �ٷ� �ǳʶٰ� ��
	//printf("second?");
	//scanf("%d", &b);

	//printf("%d %c %d\n", a, sign, b);


	//�ǽ�)���� ���� �� �Ž����� ����Ͽ� ����ϴ� ���α׷� . ���׿�����
	//int amount, pay;
	//printf("���ǰ���?");
	//scanf("%d", &amount);
	//printf("�� ����?");
	//scanf("%d", &pay);
	//amount < pay ? 
	//	printf("�Ž�����:%d\n", pay - amount):
	//	printf("�����ݾ�:%d\n", amount - pay);


	//int amount, pay;
	//printf("���ǰ���?");
	//scanf("%d", &amount);
	//printf("�� ����?");
	//scanf("%d", &pay);
	//amount < pay ?
	//	printf("�Ž�����:%d\n", pay - amount) :
	//	amount > pay ? printf("�����ݾ�:%d\n", amount - pay) : printf("����Ϸ�\n"); //���׿����� �ȿ� ���׿����� �� �� ����


	//�ǽ�) ��, ��, �� ������ �Է¹޾� �հ�� ����� ���ϴ� ���α׷��� �ϼ��Ͻÿ�
	//int k, e, m;
	//printf("������ ������?");
	//scanf("%d%d%d", &k, &e, &m);

	//int sum = k + e + m;

	//printf("�հ�� %d\n", sum);
	//printf("����� %.2f\n", sum / 3.); //sum �տ� (double)�� ���̰ų� 3 �ڿ� . �ٿ��� �Ǽ��� ǥ��


	//rgb �� �����
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);

	unsigned int rgb = r<<16 | g<<8 | b; //unsigned int :��ȣ���� int // r<<16 : r�� �������� 16��Ʈ �о��
	printf("RGB: %0X\n", rgb); // %0X : 16������ ǥ���ϴ� ���˹��ڿ�




	return 0;
}