#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{

    printf("시작");

    double arry[5]; // double 8 Byte
    double max;
    int size = sizeof(arry) / sizeof(arry[0]);
        // == 전체 바이트 크기 / 각 요소의 바이트 크기  
        // == 40 / 8  
        // == 5

    input_ary(arry, size);
    max = find_max(arry, size);
    printf("배열의 최대값은 : %lf\n", max);

    return 0;
}

void input_ary(double *pa, int size) {
    int i;
    printf("%d 개 만큼의 실수 값을 입력하세요: \n", size);  // 줄바꿈 추가
    for (i = 0; i < size; i++) {
        printf("%d번째 값: ", i + 1);
        scanf("%lf", pa + i);
    }
}

double find_max(double *pa, int size){
    double max;
    int i;
    max = pa[0];
    for (i = 1; i < size; i++)
    {
        if (pa[i] > max) max = pa[i];
    }
    return max;
}