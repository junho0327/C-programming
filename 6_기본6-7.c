#include <stdio.h>

int main()
{
	int hap=0, i;

	for (i = 1; i <= 10; i++) {
		hap += i;
	}

	printf_s("1에서 10까지의 합 %d\n", hap);
}