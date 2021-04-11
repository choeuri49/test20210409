#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

//매개변수 : 없다, 반환값 : 없다
void voidTest() {
	printf("void함수\n");
}

void voidTest2(int a) {
	printf("매개변수:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("두수의 합:%d\n", a+b);
}
// call by value방식
// 
//매개변수:반지름
// 함수의 이름 : area, 매개변수이름 : r(double)형
//원의 넓이를 출력해주는 기능을 가진 함수 만들기
viod area(double r) { //지역변수:함수 실행시 생성, 함수 종료시 소멸
	scanf("%.2f", r*r*3.14);
}

//매개변수 : 반지름(double)형
//반환값 : 넓이(double)
double areaReturn(double r) { //안에 return이 없으면 void
	double area = r * r * 3.14;
	return area; //반환값은 한개
}

//세 정수를 매개변수로 받아서 합을 반환하는 함수
int add(int a, int b, int c) {
	return a + b + c;
}

// 두 개의 정수(int)를 매개변수로 받아서 나눈 실수값(double)을 반환하는 함수
double add(int a, int b) {
	return (double)a / c; //둘 다 정수여서 정수값이 나오므로 하나를 실수로 바꿔준다
}

// 두 수를 매개변수로 받아서 두 수 중 큰 수를 반환하는 함수
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

	return m; //return은 함수의 종료
}

int main() {
	//함수
	//voidTest();

	//voidTest2(10);

	//voidTest3(20, 30);

	//double r; //지역변수
	//printf("반지름은?");
	//scanf("%lf", &r); //출력할 때는 상관없지만 입력할 때는 lf형 써야 함
	//area(r);

	//double r = 3.6;
	//double rValue = areaReturn(r); // 값areaReturn(r);을 rValue에 저장
	//printf("넓이: %.2f", rValue);

	//printf("합계:%d\n", add(20, 30, 50));

	//int a = 10, b = 3;
	//double d = div(a, b);
	//printf("나눈값:%f\n", d);

	//printf("큰수는 %d", max(20, 10));

	int a = 20, b = 20;
	int m = max(a, b);
	if (m != 0)
		printf("큰수는:%d\n", m);
	else
		printf("%d == %d\n", a, b);

	return 0;
}