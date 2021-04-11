#include <stdio.h>

int main() {
	//정수형 변수명을 선언
	//int a; //int : 정수형이다 / 변수 a. 선언하여 4byte 공간 마련
	//a = 10; //a에 10이라는 숫자를 넣음. 초기화 : 맨 처음으로 숫자를 넣는 것.
	//printf("%d\n",a);

	//실수형 변수명 선언
	//float f; // 4byte
	//double d; // double은 8byte 차지
	//f = 3.145468135468435435; // 초기화. 
	//d = 3.145468135468435435; // 초기화. float는 빌드해보면 소수점 6자리부터 오류 발생. 소수점 6자리 이상 정확도를 나타내려면 double
	//printf("%.15f\n",f);
	//printf("%.15f\n",d);

	//문자형
	//char c; //선언. char
	//c = ''; //할당. 문자 하나짜리를 저장할 것이므로 작은따옴표
	//char c = 'A'; //위의 2줄을 1줄로 하는 방법. 선언과 동시에 초기화
	//printf("문자는 %c %d\n",c, c); //%d를 찍으면 아스키 코드 나옴

	//기본 데이터형의 바이트수
	//int a = 100;
	//printf("정수형: %d\n", sizeof(a)); //sizeof(a) : a가 몇 바이트를 차지하고 있는지 사이즈 확인용 연산자.

	//float f = 3.14;
	//double d = 3.14;
	//printf("float형: %d\n", sizeof(f));
	//printf("double형: %d\n", sizeof(d));

	//char c = 'a';
	//printf("char형: %d\n", sizeof(c));

	//문자열
	//배열의 이름은 주소를 가지고 있다 : 상수(변할 수 없는 수. 변수(변할 수 있는 수)와 다름)
	//배열의 크기는 문자열의 크기+1을 해줘야 함
	//선언과 동시에 초기화 시에는 배열의 크기 생략 가능 / c[] <- 이렇게
	char c[] = "hello"; //선언과 초기화. char: 1바이트 할당하겠다. [6] : 5글자 넣을 것 선언(맨 마지막 칸에는 \0. nul문자. 문자열의 끝이 추가됨.), = "hello"; 글자 넣음(초기화)
	//char c[6];
	// c = "hello"; //상수이기 때문에 불가

	
	printf("문자열%s   크기%d\n",c, sizeof(c));
	printf("5번%c\n",c[5]);


	return 0;

}