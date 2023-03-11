#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수를 만드는 법 (함수 정의) : 소괄호, 중괄호
void MyFunction1() {
	printf("Hello");
	printf(", world!");
}

// 함수를 사용할 때 정해야하는 값이 있다 : ()를 이용
void MyFunction2(int number) {
	printf("Hello %d", number);
}

// 반환값이 있는 함수 : return, 자료형
int MyFunction3() {
	return 333;
}

// 매개변수와 return값이 있는 함수
double MyFunction4(int n1, int n2) {
	double result = (double)n1 / n2;

	return result;
}

int main() {
	// 함수를 사용하는 법 : 소괄호까지만
	MyFunction1();
	MyFunction1();    // 코드를 저장해놓고 

	MyFunction2(33);
	printf("\n");    // 반복문이 아닌 함수를 사용하는 이유 : 중간에 코드 삽입
	MyFunction2(44);

	int num1 = MyFunction3();
	num1 = MyFunction3();
	printf("%d \n", MyFunction3());
	printf("%d \n", num1);

	double num2 = MyFunction4(3, 4);
	printf("결과는 %lf \n", num2);

	num2 = MyFunction4(9, 3);
	printf("결과는 %lf \n", num2);

	return 0;
}