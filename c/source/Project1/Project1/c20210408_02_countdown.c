#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <Windows.h> //Sleep()을 쓰기 위해

// 함수 만들기
// 매개변수 : 카운트다운 초 t
// 반환값 : 없음
// 함수의 기능 : 카운트다운 출력
void countdown(int t) {
	for (int i = t; i > -1; i--) {
		Sleep(1000); 
		printf("%d초\n", i);
	}
}


int main() {
	//카운트 다운

	printf("카운트 다운 시작\n");
	countdown(5); // 위에 만든 함수 호출
	printf("발사");


	return 0;

}