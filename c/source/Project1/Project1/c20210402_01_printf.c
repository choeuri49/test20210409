#include <stdio.h> //stdio: standard input, output의 약자 h: 헤더파일. 함수의 원형이 모여있는 곳

int main() {
	//printf함수:콘솔화면에 출력하는 함수
	//printf("Hello C!!!!\n");
	//printf("헬로우 C\n");
	//printf("10+20=%d\n",10+20);
	//printf("%d + %d = %d\n", 20,10,20+10);
	printf("원주율은 %10.2f\n", 3.14); // %f: 뒤에 대응되는 숫자가 실수 라는 뜻 / .2:뒤 2자리까지 표시한다. / 10:10자리 띄움
	printf("%c1000\n",'$'); // %c: 뒤의 문자를 넣을 것(여기서는 '$') / 문자 하나는 ''작은따옴표 써서 1바이트임을 나타냄. 큰따옴표는 여러개의 문자열을 쌀 때
	printf("나의 이름은 %s\n", "홍길동"); // %s : 문자열을 치환

	return 0;
}