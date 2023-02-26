// git pull (끌어오기) -> 프로젝트 생성/코드 작성
#include <stdio.h>

int main0() {
	// 조건문 if,switch
	// if ~ else if ~ else
	// () : 조건
	// {} : 조건이 맞을때만 실행할 코드
	// 외부 조건에 따라서 프로그램의 동작을 다르게 하기 위해서
	int num = 3;

	if (num == 2) {
		printf("state 1 \n");
	}
	else if (num > 2) {
		if (num < 4) {
			printf("state 2 \n");
		}
	}
	else if (num == 3) {
		printf("state 3 \n");
	}
	else {
		printf("state 4 \n");
	}

	return 0;
}