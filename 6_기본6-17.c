#include <stdio.h>
int main() {
    int i, j;

    for (; ; ) {

        printf("출력할 단을 입력 : ");
        scanf_s("%d", &i);

        for (j = 1; j < 10; j++) {

            printf("%d X %d = %d\n", i, j, (i * j));
        }
    }
}