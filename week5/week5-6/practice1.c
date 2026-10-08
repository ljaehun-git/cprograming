#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
    int answer, num, count = 0;

    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));
    answer = rand() % 100 + 1;

    printf("업다운 숫자 맞추기 게임!\n");
    printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

    do
    {
        printf("숫자 입력 : ");
        scanf_s("%d", &num);

        count++;

        if (num > answer)
        {
            printf("DOWN\n");
        }
        else if (num < answer)
        {
            printf("UP\n");
        }
        else
        {
            printf("정답입니다!\n");
            printf("시도 횟수 : %d번\n", count);
        }

    } while (num != answer);

    return 0;
}