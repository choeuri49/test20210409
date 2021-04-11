#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> //표준입출력함수

int main() {
	// 반복문 : for
	//int i; //반복할 변수
	//for (i=0; i<10; i++) { //초기화, i가 10보다 작을 동안 문장을 수행한다, 증감값
	//	printf("%d", i); //실행순서 : 초기화, 조건문, {}안, 증감값, 조건문, 증감값, 조건문, 증감값, 조건문... 조건이 거짓이 될때까지 반복
	//}


	// 구구단 출력
	//for (int i=1; i<10; i++) {
	//	printf("2 * %d = %d\n", i, 2*i);
	//}


	// 단 입력해서 구구단 출력
	//int dan;

	//while (1) {
	//	printf("단수 입력");
	//	scanf("%d", &dan);
	//	if (dan == 0) break; //만약 0이 입력되면 빠져나가라
	//	for (int i = 1, a = 0; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}

	//do {
	//	printf("단수 입력");
	//	scanf("%d", &dan);
	//	if (dan != 0) //dan이 0과 같지 않으면 실행해라
	//		for (int i = 1, a = 0; i < 10; i++) {
	//			printf("%d * %d = %d\n", dan, i, dan * i);
	//		}
	//} while (dan != 0);


	//이중 for문
	//for (int i = 2; i < 10; i++) {
	//	printf("[%d]단\n", i);
	//	
	//	for (int j = 1; j < 10; j++) {
	//		
	//		printf("%d * %d = %d\n", i, j, i*j);

	//	}
	//}


	////3중 for
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);


	// 실습) 1부터 100까지의 합
	
	//int sum = 0;

	//for (int i = 1; i < 101; i++) {
	//	
	//	sum += i; //sum에 i를 더하고 다시 sum에 넣는다
	//
	//}
	//printf("1부터 100까지의 합은 %d", sum); //반복문이 끝나면 출력


	// 1부터 입력받은 수까지의 합
	//int n, sum = 0;
	//printf("n값은?");
	//scanf("%d", &n);

	//for (int i = 1; i < n+1; i++) { //i는 for의 지역변수
	//	int a = 10;
	//	sum += i; //sum에 i를 더하고 다시 sum에 넣는다

	//}
	//printf("1부터 %d까지의 합은 %d\n", n, sum);
	////printf("i의 현재값 : %d\n", i); //i변수 사용 불가


	// 실습 ) 두 정수를 입력받아서 큰 수에서 작은 수를 뺀 값을 구하는 프로그램. 계속 입력하다 0을 입력하면 프로그램 종료. 최대반복횟수 10번

	//int a, b;

	//for (int i = 0; i<10; i++) {
	//	
	//	// 두 수를 입력받기
	//	printf("두 정수는?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (b == 0) break;

	//	// 큰 수에서 작은 수 빼고 출력하기
	//	if (a > b) printf("절대값: %d\n", a - b);
	//	
	//	else printf("절대값: %d\n", b - a);
	//		
	//}


	// 실습) 별찍기1

	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// 별찍기2
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//별찍기3
	//for (int i = 1; i < 7; i++) {

	//	//공백출력
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//별찍기4
	//for (int i = 0; i < 6; i++) {

	//	//공백출력
	//	for (int j = 0; j < 6 - i; j++) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int j = 0; j < i*2+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// 연습문제) 두 개의 숫자를 입력받아서 두 수 사이의 정수의 합을 계산하는 프로그램
	//int a, b;
	//int n = 1, sum = 0;
	//printf("첫번째 숫자?");
	//scanf("%d", &a);
	//printf("두번째 숫자?");
	//scanf("%d", &b);

	//for (int i = 1; i < n + 1; i++) {
	//	printf("두 수의 합은 %d", a+b);
	//}


	//팩토리얼 구하기
	//int fac = 7;
	//int mul = 1; //곱한값 누적변수
	//for (int i = 1; i < fac + 1; i++) {
	//	mul *= i;
	//}
	//printf("%d\n", mul);



	//두 정수를 입력받아 큰 수에서 작은 수 빼기
	//int a, b;

	//for (int i = 0; i<10; i++) {
	//	
	//	printf("두 정수는?");
	//	scanf("%d", &a);
	//	scanf("%d", &b);

	//	if (a > b) printf("%d\n", a - b);
	//	
	//	else printf("%d\n", b - a);
	//		
	//}


	//1부터 1씩 증가하는 수를 더해서 합이 1000 이상이 되는 정수와 그 합을 구하는 프로그램
	//int i = 1, sum = 0;
	//while (sum<1000) {
	//	i++; 
	//	sum += i; //sum = sum + i;
	//}
	//printf("i:%d sum:%d\n", i, sum);


	// 1부터 10까지의 정수에서 두 수를 골라 두수의 합이 10이 되는 두수를 구하는 프로그램
	//for (int i = 1; i < 10; i++) {
	//	for (int j = i; j < 10; j++) {
	//		if (i+j==10)
	//		printf("%d,%d\n", i, j);
	//	}
	//}


	// 점심메뉴 고르기. 메뉴를 고르면 가격과 해당 코너를 출력하는 프로그램을 작성
	//char no;
	// 
	//printf("메뉴를 고르세요");
	//printf("1.자장 2.짬뽕 3.설렁탕 4.비빔밥 5.피자 6.스파게티\n");
	//printf("메뉴는?\n");

	//int no;
	//printf("음식번호입력\n");
	//scanf("%d", &no);

	//switch (no) {
	//case '1':
	//case '2':
	//	printf("중식"); break;
	//case '3':
	//case '4':
	//	printf("한식"); break;
	//case '5':
	//case '6':
	//	printf("양식"); break;
	//case 'q':
	//	printf("프로그램을 종료"); break;
	//default:
	//	printf("잘못된 메뉴 번호 입력입니다.");

	

	return 0;
}