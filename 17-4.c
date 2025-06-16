#include <stdio.h>

struct student {
    int id;
    char name[20];
    double grade;
};

int main(void) {
    struct student s1 = {315, "ghdrlfehd", 2.5},
                   s2 = {322, "dasdasdsa", 2.8},
                   s4 = {104, "ㅇㄴㅁㅁㅇㅁ", 3.4};

    struct student max;

    max = (s1.grade > s2.grade) ? s1 : s2;
    max = (max.grade > s4.grade) ? max : s4;

    printf("가장 높은 학점을 받은 학생은:\n");
    printf("학번: %d\n이름: %s\n학점: %.1f\n", max.id, max.name, max.grade);

    return 0;
}