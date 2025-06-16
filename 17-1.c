#include<stdio.h>

struct student
{
    int num;
    double grade;
};

int main(void)
{
    struct student s1;

    s1.num = 660150;
    s1.grade = 24.1209;

    printf("사번 : %d \n", s1.num);
    printf("입사일 : %.1lf \n", s1.grade);

    return 0;
    
}
