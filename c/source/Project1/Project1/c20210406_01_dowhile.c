#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	////do ~while
	//int a = -1;
	//do {
	//	printf("%d\n", a);
	//} while (a>0); //일단 do 안의 것을 최소 한 번은 실행 후 while


	//사용자에게 값을 입력받아서 y이면 뮤직플레이 출력
	//char answer;
	//do {
	//	printf("뮤직~~~플레이\n");
	//	printf("계속 할까요? (y)를 누르면 플레이합니다.");
	//	scanf("%c", &answer);
	//	getchar(); //엔터값 처리
	//} while (answer == 'y');


	// 어떤 정수를 계속 입력받아서 합계를 더하고, 0을 입력할 경우 종료하는 프로그램 작성
	int a, sum = 0; //입력을 받을 변수 a, 누적할 변수 sum

	do {
		printf("정수는?");
		scanf("%d", &a);
		sum += a;

	} while (a!=0); //a가 0과 같지 않을 동안 반복하라
	printf("합계는 %d\n", sum);

	return 0;
}