#include <stdio.h>
#include <windows.h>

int main(void)
{
    int i, j, k;


    SetConsoleOutputCP(CP_UTF8);




    for (k = 3; k <= 5; k++)
    {
        printf("%d층 피라미드\n", k);

        for (i = 1; i <= k; i++)
        {
            for (j = 1; j <= 2 * k - 1; j++)
            {
                if (j >= k - i + 1 && j <= k + i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}