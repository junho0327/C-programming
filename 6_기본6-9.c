#include <stdio.h>

int main()
{
	int hap = 0, i;

	for (i = 501; i <= 1000; i += 2) {
		hap += i;
	}
	printf(" 500에서 1000까지 홀수의 합: %d\n", hap);
}	