#include <stdio.h>

int main()
{
	int a, b;

	while (1) {
		printf("더할 두 수 입력 (멈추려명 Ctrl+C) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d\n", a, b, a + b);
	}
}