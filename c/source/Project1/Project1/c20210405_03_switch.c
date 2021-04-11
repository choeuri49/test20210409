#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	//선택조건문 : switch ~ case
	//int a = 1;
	//switch (a) {
	//case 0: //a가 0이라면
	//	printf("zero\n"); break; // switch문에서는 break를 쓸 수 있다.
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("잘못된 숫자입니다\n");

	//}


	//월의 마지막 날 출력
	/*int mon = 3;
	switch (mon) {*/
	//case 1:
	//	printf("31일\n"); break;
	//case 2:
	//	printf("28일\n"); break;
	//case 3:
	//	printf("31일\n"); break;
	//case 4:
	//	printf("30일\n"); break;
	//case 5:
	//	printf("31일\n"); break;
	//case 6:
	//	printf("30일\n"); break;
	//case 7:
	//	printf("31일\n"); break;
	//case 8:
	//	printf("31일\n"); break;
	//case 9:
	//	printf("30일\n"); break;
	//case 10:
	//	printf("31일\n"); break;
	//case 11:
	//	printf("30일\n"); break;
	//case 12:
	//	printf("31일\n"); break;
	//default:
	//	printf("잘못된 월입니다.\n");


	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31일\n"); break;
	//case 2:
	//	printf("28일\n"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30일\n"); break;
	//default:
	//	printf("잘못된 월입니다.\n");
	//}


	//음식메뉴 switch문으로
	printf("--------------------\n");
	printf("1.자장 2.짬뽕 3.설렁탕 4.비빔밥 5.피자 6.스파게티\n");
	printf("메뉴는?\n");

	int no;
	printf("음식번호입력\n");
	scanf("%d", &no);

	switch (no) {
	case 1:
	case 2:
		printf("중식"); break;
	case 3:
	case 4:
		printf("한식"); break;
	case 5:
	case 6:
		printf("양식"); break;
	default:
		printf("잘못된 메뉴 번호 입력입니다.");
	}

	return 0;
}