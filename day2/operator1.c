#include <stdio.h>

int main2() {
	int num1, num2;

	// num1�� �Է¹���
	printf("num1�� ���� �Է��ϼ���>>");
	scanf("%d", &num1);			// ���ڴ� &��ȣ�� �����ְ�, ���ڿ��� &��ȣ���� �׳� ���´�

	// num2�� �Է¹���
	// ToDo : �����е��� num2�� �Է¹޾��ּ���
	printf("num2�� ���� �Է��ϼ���>>");
	scanf("%d", &num2);			// ���ڴ� &��ȣ�� �����ְ�, ���ڿ��� &��ȣ���� �׳� ���´�

	// ��� ������ (���� ����� ���ִ� ��ȣ)
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %lf \n", num1, num2, num1 / (double)num2);
	printf("%d�� %d�� ���� �������� = %d \n", num1, num2, num1 % num2);

	return 0;
}