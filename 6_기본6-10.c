#include <stdio.h>

int main()
{
	int hap = 0, i, num;

	printf(" �� �Է�: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		hap += i;
	}
	printf(" 1���� %d ������ �� : %d \n", num, hap);
}