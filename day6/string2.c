#include <stdio.h>
#include <string.h>

int main3() {
	// ����209p

	// #1
	// �� ���� ���ڿ��� �Է¹޾� ������ ���� ������ �˷��ִ� ���α׷� scanf("%[^\n]s", str)
	/*
	������ �޽�
	������ �޽�
	==> �����ϴ�

	������ �޽�
	ȣ����
	==> ���� �ʽ��ϴ�
	*/
	char str1[50] = { 0, };
	char str2[50] = { 0, };
	scanf("%[^\n]s", str1);
	rewind(stdin);			// ���� ����
	scanf("%[^\n]s", str2);
	if (strcmp(str1, str2) == 0) {
		printf("�����ϴ�.");
	}
	else {
		printf("���� �ʽ��ϴ�.");
	}

	// #2
	// �� �Է¹��� ���ڿ� �� ���̰� �� ���ڿ����� ����ϰ� ���ּ���
	/*
	������ �޽�
	ȣ����
	==> ������ �޽� ȣ����
	*/
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 > len2) {
		printf("%s %s", str1, str2);
	}
	else {
		printf("%s %s", str2, str1);
	}

	return 0;
}