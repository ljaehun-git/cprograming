#include <stdio.h>
#include <windows.h>

int main(void)
{
    int N, i = 1;

    SetConsoleOutputCP(CP_UTF8);

    printf("출력할 구구단 단수 입력 : ");
    scanf_s("%d", &N);

    while (i <= 10)
    {
        printf("%d X %d = %d\n", N, i, N * i);
        i++;
    }

    return 0;
}