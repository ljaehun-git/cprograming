#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    char name[] = "임재훈";
    int studentNumber = 2026940116;
    double grade = 4.13;

    printf("서울시립대학교\n");
    printf("전자전기컴퓨터공학부\n");
    printf("이름 : %s\n", name);
    printf("학번 : %d\n", studentNumber);
    printf("학점 : %.2f\n", grade);

    return 0;
}