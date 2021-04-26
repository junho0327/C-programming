#include <stdio.h>

int main()
{
	int hap = 0, i, num;

	printf(" 값 입력: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		hap += i;
	}
	printf(" 1에서 %d 까지의 합 : %d \n", num, hap);
}