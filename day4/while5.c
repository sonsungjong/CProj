#include <stdio.h>

int main7() {
	// while������ 1~10������ �� ���ϱ�
	int sum = 0;
	int num = 1;

	while (num <= 10) {
		sum += num;
		num++;
	}
	printf("1~10������ ��: %d", sum);

	return 0;
}