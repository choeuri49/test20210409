#define _CRT_SECURE_NO_WARNINGS // scanf함수를 사용하기 위해 
#include <stdio.h>

int main() {
	//입력함수
	//정수형 입력받기
	//int a; //입력받아서 저장할 공간을 선언. 공간 a

	//printf("정수는?\n");
	//scanf("%d",&a); //어떤 형을 입력받을 것인지 ()안에 선언 :"%d"  // &a : 변수 a의 주소
	//printf("입력한 값 : %d  주소 : %p\n",a, &a);  // %p:주소를 넣기 위한 포맷 문자열 . 주소는 출력해보면 16진수로 표시됨


	//실수형 입력받기
	//float f; //입력된 f가 저장될 공간
	//double d;
	//printf("float 실수는?");
	//scanf("%f",&f); //반드시 주소 &f 넘겨야
	//printf("double 실수는?");
	//scanf("%lf", &d); //포맷문자 double일 경우 : %lf 형으로 //double형으로 읽어들이겠다는 뜻

	//printf("입력한 값\n %f %p\n %f %p\n", f, &f, d, &d);


	//문자형 (char형) 입력받기
	//char c;

	//printf("문자는?");
	//scanf("%c", &c); //주소 &c
	//printf("입력한 값은 %c,\n", c);


	// 실습) 두 정수를 입력받아서 합계를 출력
	//int a, b;

	//printf("첫번째 수는?");
	//scanf("%d", &a);
	//printf("두번째 수는?");
	//scanf("%d", &b); //&b:두번째 입력한 것은 b에 저장

	//두 수를 한꺼번에 입력받고싶다면
	//printf("두 수는?");
	//scanf("%d %d", &a, &b);

	//printf("합계는: %d\n", a + b);

	//실습) 오늘의 날짜(년,월,일)를 입력받아 출력하기
	//int year, month, day;
	//printf("년, 월, 일은?");
	//scanf("%d%d%d", &year, &month, &day);

	//printf("오늘의 날짜는 %d년 %d월 %d일\n", year, month, day);

	//실습) 두 개의 정수를 입력받아 산술연산 구하기
	//int a, b;
	//printf("두 수는?");
	//scanf("%d %d", &a, &b);
	//
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %f\n", a, b, (double)a / b);


	// 엔터 처리하기 위한 예제
	//int a, b;
	//char sign;
	//printf("계산식은?"); //10+20 같은 값을 입력받았을때 가운데 글자는 어떻게 처리하는가. char 

	//printf("first?");
	//scanf("%d", &a);

	//getchar();//한 문자를 읽어서 반환하는 함수 . 위에서 first 치고 친 엔터값을 처리하기 위한 목적으로 사용

	//printf("sign?");
	//scanf("%c", &sign);  // 엔터도 한 문자이기 때문에 getchar();없이 쓰고 엔터치면 바로 건너뛰게 됨
	//printf("second?");
	//scanf("%d", &b);

	//printf("%d %c %d\n", a, sign, b);


	//실습)물건 구입 후 거스름돈 계산하여 출력하는 프로그램 . 삼항연산자
	//int amount, pay;
	//printf("물건값은?");
	//scanf("%d", &amount);
	//printf("낸 돈은?");
	//scanf("%d", &pay);
	//amount < pay ? 
	//	printf("거스름돈:%d\n", pay - amount):
	//	printf("부족금액:%d\n", amount - pay);


	//int amount, pay;
	//printf("물건값은?");
	//scanf("%d", &amount);
	//printf("낸 돈은?");
	//scanf("%d", &pay);
	//amount < pay ?
	//	printf("거스름돈:%d\n", pay - amount) :
	//	amount > pay ? printf("부족금액:%d\n", amount - pay) : printf("정산완료\n"); //삼항연산자 안에 삼항연산자 쓸 수 있음


	//실습) 국, 영, 수 점수를 입력받아 합계와 평균을 구하는 프로그램을 완성하시오
	//int k, e, m;
	//printf("국영수 점수는?");
	//scanf("%d%d%d", &k, &e, &m);

	//int sum = k + e + m;

	//printf("합계는 %d\n", sum);
	//printf("평균은 %.2f\n", sum / 3.); //sum 앞에 (double)을 붙이거나 3 뒤에 . 붙여서 실수로 표현


	//rgb 값 만들기
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);

	unsigned int rgb = r<<16 | g<<8 | b; //unsigned int :부호없는 int // r<<16 : r을 왼쪽으로 16비트 밀어라
	printf("RGB: %0X\n", rgb); // %0X : 16진수를 표현하는 포맷문자열




	return 0;
}