#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {
	// if ~ else if ~ else
	// switch ~ case ~ break
	// switch�� : ���� ���� ã�� �� ����ϴ� ���ǹ�

	// if�� : ���� ����, ��ġ/����ġ ���� (>, ==)
	// switch�� : ��ġ���� (==)
	char word = 'a';

	//if (word == 'a') {

	//}
	//else if(word == 'b') {

	//}
	
	// �񱳴���� �Ǵ� ������ ()�� ���´�
	switch (word) {
	case 'a':				// word == 'a'
		printf("�ܾ�� a�Դϴ�.");		
		break;	// case�� ������ break;
	case 'b':				// word == 'b'
		printf("�ܾ�� b�Դϴ�.");		
		break;
	case 'c':				// word == 'c'
		printf("�ܾ�� c�Դϴ�.");
		break;
	default:				// ��ġ�ϴ� case�� ����
		printf("�ش��ϴ� �ܾ �����ϴ�.");		// else
	}
	
	// switch : ()�� ��ġ�ϴ� �ָ� ã��

	int num = 0;
	printf("��ȣ�� �����ϼ���>>");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("1�� �����߽��ϴ�.");
		printf("\n");
		break;
	case 2:
		printf("2�� �����߽��ϴ�.");
		printf("\n");
		break;
	case 3:
		printf("3�� �����߽��ϴ�.");
		printf("\n");
		break;
	case 4:
		printf("4�� �����߽��ϴ�.");
		printf("\n");
		break;
	default:
		printf("���� ���Դϴ�.");
		printf("\n");
	}

	return 0;
}