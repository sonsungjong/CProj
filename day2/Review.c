#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// ��� printf
	printf("hello world \n");
	printf("�ּ��� // \n");

	// // ���� �ּ� (�� ���� �ڵ尡 �ƴ϶� �޸�� ���, ctrl+shift+/)
	// /**/ ������ �ּ�
	/*
		�ȳ��ϼ���
		�ݰ����ϴ�
		������ �ּ� �Դϴ�

		Ctrl + Z : �ڷΰ���
		Ctrl + Y : �ڷΰ��� ���
	*/
	
	// ����(variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;				// ������ ���� ���� (1byte == 8bit)
	int number;				// ������ ����		(4byte)
	double dNumber;			// �Ǽ��� ����		(8byte)
	char str[256];			// ���ڿ��� ����	(256 byte)

	// ������ ���� ���� (���Կ�����)
	// ������ = �����Ͱ�;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str, "hi world");
	
	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;		// number�� ����ִ� ���� ��� (�ڷ������� �����ֱ�)
	printf("������: %c \n", word);
	printf("������: %d \n", number);
	printf("�Ǽ���: %lf \n", dNumber);
	printf("���ڿ���: %s \n", str);

	// + : ���ϱ�
	// - : ����
	// * : ���ϱ�
	// / : ������
	// % : ���������ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� �����
	// +, -, *, /, % ����ϰ� printf�� ����ϱ�
	int num1 = 2, num2 = 3;

	printf("���ϱ� %d\n", num1 + num2);
	printf("���� %d\n", num1 - num2);
	printf("���ϱ� %d\n", num1 * num2);
	printf("������ %lf\n", num1 / (double)num2);
	printf("���������ϱ� %d\n", num1 % num2);

	return 0;
}