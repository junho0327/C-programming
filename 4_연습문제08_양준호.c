#include <stdio.h>

int main()
{
	int time, hour, min , sec;

	printf(" ## ����� �ʴ� ? ");
	scanf("%d", &time);

	hour = time / 3600;
	time = time % 3600;

	min = time / 60;
	time = time % 60;

	sec = time % 60;

	printf("\n �ð��� ==> %d �ð� \n", hour);
	printf("\n ���� ==> %d �� \n", min);
	printf("\n �ʴ� ==> %d �� \n", sec);
}