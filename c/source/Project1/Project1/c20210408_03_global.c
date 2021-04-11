#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

//전역변수 : 프로그램이 시작할 때 생성되고, 프로그램 종료시 소멸
//전역변수는 자동으로 초기화됨.
//어디서든 사용가능
//전역변수의 무분별한 선언은 신중해야 함. 프로그램의 복잡도 증가, 메모리사용 증가
int g;

void test() {
	printf("a: %d\n", a);
	printf("g: %d\n", g);
}


int main() {
	// 전역변수와 지역변수
	// 지역변수 int a
	// 지역변수 : 함수가 시작될 때 생성되고, 함수가 종료되면 소멸
	// 지역변수는 반드시 초기화 후 사용해야 함.
	// 선언된 {}안에서만 사용가능
	int a=10; 
	printf("a: %d\n", a);

	printf("g: %d\n", g);

	return 0;
}