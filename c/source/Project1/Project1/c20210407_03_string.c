#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h>  //���ڿ� ���� �Լ��� �����ϰ� �ִ� ��� ����

int main() {
	// ����
	//char c = 'a'; //������ ����
	//scanf("%c", &c); //�о���̱�
	//printf("����:%c\n", c); //���

	//���ڱ���� �ִ�. ���� Ű���忡 �Է��� ���� �ٽ� �ܼ�â�� �ѷ��ִ� ���
	//char c = getchar(); //���� �Է� �����Լ�. getchar()�� c�� ����
	//printf("�Է¹���:");
	//putchar(c); //���� ��� �����Լ�

	//int c = getchar(); //��������. ���� ������
	//printf("�Է¹���: %c �ƽ�Ű:%d\n", c, c);
	//putchar(c);

	//getch()�Լ�. ���ڱ�� ���� ���ۿ� ������ ����. �� ����� �̿��ؼ� ��й�ȣ ��ǥ�� ������
	//char c = getch();
	//printf("�Է¹���:");
	//putchar(c);

	//��й�ȣ�� �Է��ϸ� *�� ���
	//char pw[5];
	//printf("��й�ȣ �Է����ּ���");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*'); //*ǥ ���
	//}
	//pw[4] = '\0'; //���ڿ��� ��
	//printf("\n��й�ȣ:%s\n", pw);
	

	//���ڿ�
	//char s[6] = "hello"; // [6] : hello�� �������� 6byte �ʿ�  h,e,l,l,o,\0
	//char s[6]; //�迭�� �̸��� �ּҴ�. �׷��� scanf���� �ּ� �Ѱ����� �ʾƵ� ��.
	//scanf("%s", s);
	//printf("%s\n", s);

	//���ڿ� �����Լ� : ����ó�� ���� / scanf�� ����ó�� �ȵ�. ���� �ִ� ���� �ٷ� �� ���ڿ� �����Լ� ���
	//char name[20];
	//printf("�̸���?");
	//gets(name); //�Է�
	//printf("����� �̸��� "); 
	//puts(name); //���


	//���ڿ� �����Լ�
	char name[10] = "hong";
	strcpy(name, "kim"); //�ڿ� �ִ� ���� ������ ī��. name�̶�� ���� kim�̶�� ���ڸ� ī��
	puts(name);



	return 0;

}