#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main() {
	//다차원배열
	//int arr[2][3];
	//arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3; 
	//arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;

	
	//for (int i = 0; i < 2; i++) { // i : 행 , int i = 0; : 0번 인덱스부터
	//	for (int j = 0; j < 3; j++) { // j : 열
	//		arr[i][j] = 1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

	//int size = sizeof(arr);
	//int rsize = sizeof(arr) / sizeof(arr[0]);  // 24/12=2
	//int csize = sizeof(arr[0]) / sizeof(int); // 12/4=3
	//printf("사이즈:%d\n", rsize); //행의 개수

	//int a = 0;
	//for (int i = 0; i < 2; i++) { 
	//	for (int j = 0; j < 3; j++) { 
	//		arr[i][j] = (3*i) + j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	// 반 학생의 국영수 점수를 입력받아 번호대로 배열에 저장하고 번호 순서대로 총점과 평균 출력
	int score[2][3];
	
	int size = sizeof(score) / sizeof(int);

	// 입력
	for (int i = 0; i < 2; i++) {
		printf("%d)국, 영, 수 점수 입력",i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}			
	}

	// 합계, 평균 출력
	int sum = 0;
	for (int i = 0; i < 2; i++) { //학생번호
		for (int j = 0; j < 3; j++) { //과목
			sum += score[i][j];
		}
		// 합계, 평균
		printf("합계:%d점, 평균:%.2f점\n", i+1, sum, (double)sum / 3);
		sum = 0;

	}



	return 0;

}