#define _CRT_SECURE_NO_WARNINGS // scanf함수를 사용하기 위해 
#include <stdio.h>

int main() {
	// 조건식이 참일 때 수행할 문장과 거짓일 때 수행할 문장을 구별
	//int a=-10;

	//if (a > 0) {
	//	printf("양수\n");
	//}
	//else {
	//	// 파이썬과 달리 elif 없음 -> 아닐때 else 안에 if문을 넣음. 중첩if문
	//	if (a < 0) {
	//		printf("음수\n");
	//	}
	//	else {
	//		printf("양수도 음수도 아닙니다.\n");
	//	}
	//	
	//}


	// 표현을 간단하게
	//int a = 10;
	//if (a > 0) 
	//	printf("양수\n");
	//
	//else if (a < 0) 
	//		printf("음수\n");
	//	
	//	else 
	//		printf("양수도 음수도 아닙니다.\n");
		

	//실습) 두 정수를 입력받아 큰 수를 출력(두 수는 같을 수도 있다)
	//int a, b;
	//printf("두 정수는?");
	//scanf("%d %d", &a, &b);

	//if (a > b)
	//	printf("큰 수는 %d\n", a);
	//else if (b > a)
	//		printf("큰 수는 %d\n", b);
	//else
	//	printf("두 수는 같다");


	// 실습) 학생의 점수를 입력받아 학점을 출력하는 프로그램
	//int score;
	//printf("점수입력");
	//scanf("%d", &score);

	//if (score > 100 || score < 0) 
	//	printf("잘못된 점수입니다.\n");
	//else if (score >= 90)
	//	printf("A");
	//else if (score >= 80)
	//	printf("B");
	//else if (score >= 70)
	//	printf("C");
	//else if (score >= 60)
	//	printf("D");
	//else
	//	printf("F");


	//실습) 국영수 점수 입력받아 총점, 평균 출력. 단, 60점 미만이 한과목이라도 있으면 과락
	//int k, e, m;
	//printf("국,영,수 점수 입력");
	//scanf("%d,%d,%d", &k, &e, &m);

	//if (k < 60 || e < 60 || m < 60) { // or : ||
	//	printf("과락입니다.");
	//}
	//else {
	//	int sum = k + e + m;
	//	double avg = sum / 3.;
	//	printf("총점:%d\n", sum);
	//	printf("평균:%.2f\n", avg);
	//}


	// 윤년인지 구하기

	//int y;
	//printf("연도 입력");
	//scanf("%d", &y);

	////4로 나누어 떨어져야 한다. 그리고 100으로 나누어 떨어지면 안된다. 또는 400년으로 나누어 떨어지면 윤년이다.
	//if (y%4==0 && y%100!=0 || y%400==0)
	//	printf("%d년은 윤년입니다.\n",y);
	//else
	//	printf("%d년은 윤년이 아닙니다.\n",y);


	//실습)메뉴 보고 음식 선택하면 가야 할 코너를 알려주는 프로그램
	printf("--------------------\n");
	printf("1.자장 2.짬뽕 3.설렁탕 4.비빔밥 5.피자 6.스파게티\n");
	printf("메뉴는?\n");

	int no;
	printf("음식번호입력\n");
	scanf("%d", &no);

	if (no == 1 || no == 2)
		printf("중식");
	else if (no == 3 || no == 4)
		printf("한식");
	else if (no == 5 || no == 6)
		printf("양식");
	else
		printf("잘못된 번호입니다. 다시 입력하세요.");


	return 0;
}