#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	//반복문 : while
	//while (1) {
	//	printf("c!!!");
	//}

	//break를 이용해 반복문 탈출하기
	//int cnt = 0;
	//while (1) { // 1:true, 0:false . 1을 쓰면 참이기 때문에 계속 반복
	//	printf("%d c!!!\n", cnt+1);
	//	cnt++; //cnt += 1;  //cnt = cnt + 1;
	//	if (cnt > 9) break;

	//}

	//1~10까지의 합
	//int i = 0 , sum = 0;
	//while (i<10) {
	//	//printf("%d\n",++i); //++를 앞에 붙여야 증가한 후 출력
	//	//i++;
	//	sum += ++i; //i=i+1; sum = sum + i;

	//}
	//printf("합계:%d\n", sum);


	//합이 2000을 넘는 정수와 그 합을 구하라.
	//int i = 0, sum = 0;
	//while (sum<2000) { //sum이 2000보다 작을때까지만 반복
	//	i++; // i를 1씩 더함
	//	sum += i; //sum = sum + i;
	//}
	//printf("i:%d sum:%d\n", i, sum); //2000을 넘게 되면 false가 되고 빠져나옴


	실습) 1~20까지의 수 중 3의 배수만 출력하는 프로그램
	1번 방법
	int a = 0;
	while (a<20) { 
		a++; //1씩 증가
		if (a % 3 == 0) { //a를 3으로 나눈 나머지가 0이라면
			printf("%d ",a);
		}
	}

	//2번 방법
	//int a = 3;
	//while (a < 20) {
	//	printf("%d ", a);
	//	a += 3; //a에 3을 더해서 a에 넣어라

	//}


	//3번 방법 break를 사용해서 해결
	//int a = 0;
	//while (1) {
	//	a+=3; //a를 3씩 증가
	//	if (a > 20) break; // a가 20보다 큰지 출력 하기 전에 검토하면 21이 출력되지 않게 할 수 있음
	//	printf("%d ", a);
	//}

	//coutinue : 계속하라 (break : 반복문을 빠져나가라)
	//int a = 0;
	//while (a<10) {
	//	a++;
	//	if (a % 2 != 0) continue;  //a를 2로 나눈 나머지가 0과 같지 않다면(= 나머지가 1과 같다면) 계속 출력해라
	//		printf("%d ", a);
	//}




}