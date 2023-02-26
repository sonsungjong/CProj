#include <stdio.h>

int main12() {
	// 교재 143p #1 #2

	// #1
	// 사용자가 1 이상의 정수 n을 입력하면 1부터 n까지의 합을 구하는 프로그램을 만드세요
	/*
		<실행 예>
		정수를 입력하세요: 5
		1부터 5까지의 합은 15입니다.
	*/
	int n, i = 1, sum = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	// #2
	// 1부터 100까지의 정수 중 6의 배수만 출력하면 프로그램 만들기
	/*
		<실행 예>
		6 12 18	24 30 36 42 48 54 60 66 72 78 84 90 96
	*/
	for (int j = 1; j <= 100; j++) {
		if (j % 6 == 0) {
			printf("%d ", j);
		}
	}
	printf("\n");

	// #3
	// 아스키코드(교재 345~346) : 각 문자에 할당된 정수값
	// 알파벳을 입력받아 출력하는 프로그램 (단, 대문자면 프로그램 종료)
	// 65~90 : 대문자, 97~122 : 소문자
	char word = '\0';

	while (1) {
		printf("알파벳을 입력하세요:");
		rewind(stdin);		// 버퍼문자 제거
		scanf("%c", &word);

		if (word >= 65 && word <= 90) {
			printf("종료합니다.");		// 65 == 'A', 90 == 'Z'
			break;
		}
		else if (word >= 97 && word <= 122) {
			printf("%c 입력했습니다.\n", word);		// 97 == 'a', 122 == 'z'
		}
	}

	return 0;
}