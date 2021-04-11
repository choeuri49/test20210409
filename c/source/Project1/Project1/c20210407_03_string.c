#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h>  //문자열 관련 함수를 포함하고 있는 헤더 파일

int main() {
	// 문자
	//char c = 'a'; //문자형 선언
	//scanf("%c", &c); //읽어들이기
	//printf("문자:%c\n", c); //출력

	//에코기능이 있다. 내가 키보드에 입력한 것을 다시 콘솔창에 뿌려주는 기능
	//char c = getchar(); //문자 입력 전용함수. getchar()를 c에 저장
	//printf("입력문자:");
	//putchar(c); //문자 출력 전용함수

	//int c = getchar(); //문자전용. 숫자 못읽음
	//printf("입력문자: %c 아스키:%d\n", c, c);
	//putchar(c);

	//getch()함수. 에코기능 없고 버퍼에 쌓지도 않음. 이 기능을 이용해서 비밀번호 별표로 찍히게
	//char c = getch();
	//printf("입력문자:");
	//putchar(c);

	//비밀번호를 입력하면 *가 출력
	//char pw[5];
	//printf("비밀번호 입력해주세요");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*'); //*표 출력
	//}
	//pw[4] = '\0'; //문자열의 끝
	//printf("\n비밀번호:%s\n", pw);
	

	//문자열
	//char s[6] = "hello"; // [6] : hello를 넣으려면 6byte 필요  h,e,l,l,o,\0
	//char s[6]; //배열의 이름은 주소다. 그래서 scanf에서 주소 넘겨주지 않아도 됨.
	//scanf("%s", s);
	//printf("%s\n", s);

	//문자열 전용함수 : 공백처리 가능 / scanf는 공백처리 안됨. 공백 있는 문자 다룰 때 문자열 전용함수 사용
	//char name[20];
	//printf("이름은?");
	//gets(name); //입력
	//printf("당신의 이름은 "); 
	//puts(name); //출력


	//문자열 전용함수
	char name[10] = "hong";
	strcpy(name, "kim"); //뒤에 있는 것을 앞으로 카피. name이라는 곳에 kim이라는 글자를 카피
	puts(name);



	return 0;

}