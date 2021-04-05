#include <stdio.h>

int main()
{
	float a;
	int b = 5, c = 3;

		a = b + c;
		printf(" %d + &d = %d \n", b , c , a);

		a = b - c;
		printf(" %d - &d = %d \n", b , c , a);

		a = b * c;
		printf(" %d * &d = %d \n", b , c , a);

		a = (float)b / c;
		printf(" %d / &d = %.1f \n", b , c , a);

		a = b % c;
		printf(" %d %% &d = %d \n", b , c , a);

}