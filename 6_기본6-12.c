#include <stdio.h>

int main()
{
	int i, dan;

	printf_s(" ¸î ´Ü ? ");
	scanf_s("%d", &dan);

	for (i = 1; i <= 9; i++) {
		printf(" %d X %d = %d \n", dan, i, dan * i);
	}


}