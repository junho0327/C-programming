#include <stdio.h>

int main()
{
	int a, b;

	while (1) {
		printf("���� �� �� �Է� (���߷��� Ctrl+C) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d\n", a, b, a + b);
	}
}