#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi; // 동적 할당 영역을 연결할 포인터 선언
    double *pd;

    pi = (int *)malloc(sizeof(int)); // 1. 메모리 동작 할당 후 2. 포인터 연결 
    // if (pi == NULL){
    //     printf(" 메모리가 부족하다 ");
    //     exit(1);
    // }

    pd = (double *) malloc(sizeof(double));

    *pi = 11;
    *pd = 3.4;

    // printf(pi);
    // printf(pd);

    printf("%d\n", *pi);    // 정수 값 출력
    printf("%f\n", *pd);    // 실수 값 출력

    free(pi);
    free(pd);

    return 0;
}