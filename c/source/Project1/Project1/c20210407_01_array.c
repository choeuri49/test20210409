#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#define LEN 5  // 5 대신 LEN 이라는 값을 쓰기로 함

int main() {
	// 배열 : array
	//int arr[3]; //4바이트 공간 3개 만들라 선언. int:형, arr:주소
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;  //초기화. arr[0]은 변수명이라고 보면 된다.

	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr)); //주소 가져오기, arr의 사이즈 보기(byte)

	//반복문을 이용해서 초기화
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////반복문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d", arr[i]);
	//}

	//실습)
	//double arr[3] = {1.1, 2.2, 3.1}; //선언과 동시에 초기화
	//double arr[5];

	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);  // 24/8 = 3
	//printf("사이즈:%d\n", size);


	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}

	//for (int i = 0; i < size; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//문자형 배열
	//char arr[] = {'p', 'y', 't', 'h', 'o', 'n'};

	//int size = sizeof(arr)/ sizeof(char);  // char형이기 때문에 char로 나눔

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]); 
	//}


	// 배열값의 합
	// c는 정적배열
	//int arr[] = { 4,5,9,12,34 };
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);  // 20/4 =5byte

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i]; //sum = sum + arr[i];
	//}
	//printf("합계:%d\n", sum);


	// 입력받아 합 구하기
	//a에 값이 할당되는 시점은 런타임시 이므로 변수를 가지고 할당 못함. 상수식으로 해야
	//int a = 5;
	//const int a = 5; // 상수 : 변경이 불가능한 값
	// #LEN은 define에 정의된 매크로상수 : 컴파일되기 전에 대체
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int); 

	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수는?", i+1);
	//	scanf("%d", &arr[i]);
	//}

	//// 출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p", arr[i], &arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i]; //sum = sum + arr[i];
	//}
	//printf("합계:%d\n", sum);


	// 반 학생의 점수를 입력받아 번호대로 배열에 저장하고, 번호 순서대로 출력하는 프로그램 + 점수합계와 평균 출력, 원하는 학생번호 입력 시 해당 학생 점수 출력
	//int score[3];
	//int sum = 0;
	//int size = sizeof(score) / sizeof(int); //사이즈를 구해서 이 사이즈만큼 반복문을 돌린다.

	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수는?", i+1);
	//	scanf("%d", &score[i]);
	//}
	//printf("--------------\n");

	//for (int i = 0; i < size; i++) {
	//	printf("%d번은 %d점\n", i+1, score[i]);
	//	sum += score[i]; //sum에 score[i]의 합계 누적
	//}
	//printf("--------------\n");
	//printf("합계:%d점\n", sum);
	//printf("평균:%.2f점\n", (double)sum/size); //소수점 나오도록(double)
	//

	//// 학생번호를 검색해서 해당 학생 점수 출력
	//
	////int score[3] = {20,50,30};
	//int no; //검색할 번호를 저장하기 위한 변수
	//char quit; //종료변수

	//while (1) {
	//	printf("원하는 학생은 몇번?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no > 3) {
	//		printf("잘못된 번호입니다.\n");
	//		continue; //계속 진행. 다시 입력할 수 있게 위로 되돌아감
	//	}
	//	printf("해당 학생의 점수는:%d\n", score[no - 1]);
	//	printf("--------------\n");
	//	printf("종료하시겠습니까?(q)");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;

	//}

	// do while문으로
	//do {
	//	printf("원하는 학생은 몇번?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no > 3) {
	//		printf("잘못된 번호입니다.\n");
	//		continue; //계속 진행. 다시 입력할 수 있게 위로 되돌아감
	//	}
	//	printf("해당 학생의 점수는:%d\n", score[no - 1]);
	//	printf("--------------\n");
	//	printf("종료하시겠습니까?(q)");
	//	scanf("%c", &quit);

	//} while (quit != 'q');


	//피보나치의 수열 구하기
	//0 1 1 2 3 4 8 13 .....
	int fibo[20];
	fibo[0] = 0, fibo[1] = 1;


	for (int i = 2; i < 20; i++) { //시작을 2번인덱스부터, 20보다 작을때까지
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}
	
	//출력
	for (int i = 0; i < 20; i++) {
		printf("%d",fibo[i]);
	}
	return 0;
}