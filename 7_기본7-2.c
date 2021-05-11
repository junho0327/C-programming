#include <stdio.h>

int main()
{
	int hap = 0, i;

	i = 1; 
	while (i <= 10) {
		hap += i;
		i++;
		}
	printf("1에서 10까지의 합 : %d \n", hap);
}