#include <stdio.h>

int main0() {
	// 프로젝트 day6 우클릭 -> 속성 -> C/C++ -> SDL검사 : No
	int array[5] = {0,};		// 배열
	int arr1[3] = { 1,2,3 };		// ~2

	int num = 10;
	int* pnum = &num;		// 변수의 주소를 저장하는 공간 : 포인터 변수
	*pnum = 30;			// 역참조
	printf("%d \n", num);			// 30

	// 배열요소 전부 출력
	for (int i = 0; i < sizeof(arr1)/sizeof(int); i++) {
		printf("%d ", arr1[i]);
	}

	array[1] = 4;
	array[2] = 4;
	array[3] = 4;
	array[4] = 4;		// 5개 만들었으면 4번까지 있다
	array[0] = 4;
	printf("\n %d \n", array[3]);

	// 0.0 ~ 9.0까지 보관하고 있는 배열 만들기(1.0씩 증가)
	double arr2[10] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	// 전부출력
	for (int i = 0; i < 10; i++) {
		printf("%lf ", arr2[i]);
	}

	return 0;
}