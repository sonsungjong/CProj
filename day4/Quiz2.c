#include <stdio.h>

// ���� 144p
int main() {
	// #1
	// 100 ~ 200 ���� �� 3�� 7�� ������� ����ϴ� ���α׷�
	
	for (int i = 100; i < 201; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	// #2
	// 2~9 ���� �� �ΰ��� �Է¹޾� �������� ����ϴ� ���α׷�
	// ���� 4�� 8�� �Է��ϸ� 4��~8���� ���
	// ��, 8�� 4�� �Է��ص� 4��~8���� ���
	int n1, n2;
	int start, end;
	printf("ù��° ����>>");
	scanf("%d", &start);
	printf("�ι�° ����>>");
	scanf("%d", &end);

	// start�� end���� �� ũ�� ���� �ٲ������(swap)
	int temp;
	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	for (n1 = 1; n1 < 10; n1++) {
		for (n2 = start; n2 <= end; n2++) {
			printf("%d x %d = %d\t", n2, n1, n1 * n2);
		}
		printf("\n");
	}

	return 0;
}