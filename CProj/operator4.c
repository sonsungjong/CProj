#include <stdio.h>

int main()
{
	int kor = 50, eng = 40, math = 60;
	int sum = 0;
	double avg = 0.0;

	sum = kor + eng + math;
	avg = (double)sum / 3;

	// ÇÕ°è: OOO
	// Æò±Õ: OO
	printf("ÇÕ°è: %d \n", sum);
	printf("Æò±Õ: %lf", avg);

	return 0;
}