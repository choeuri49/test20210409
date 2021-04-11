#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

// 전역변수
//int sum;

// 매개변수로 정수를 입력받아 누적하는 함수
int userSum(int a) {
	static int sum = 0; //전역변수와 지역변수 이름이 겹치면 지역변수가 우선
	//static이라는 변수는 
	//함수가 최초로 실행됐을 때 생성되고, 프로그램 종료 시 소멸
	//선언된 함수 안에서만 접근 가능(지역변수의 특징)
	sum = sum + a;
	return sum;
}


int main() {
	//전역변수, 지역변수 사용예
	printf("누적:%d\n", userSum(10));
	userSum(20);

}