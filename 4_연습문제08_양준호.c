#include <stdio.h>

int main()
{
	int time, hour, min , sec;

	printf(" ## 계산할 초는 ? ");
	scanf("%d", &time);

	hour = time / 3600;
	time = time % 3600;

	min = time / 60;
	time = time % 60;

	sec = time % 60;

	printf("\n 시간은 ==> %d 시간 \n", hour);
	printf("\n 분은 ==> %d 분 \n", min);
	printf("\n 초는 ==> %d 초 \n", sec);
}