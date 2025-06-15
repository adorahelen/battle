#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi;
    int i, sum = 0;

    pi = (int *)malloc(5 *sizeof(int));
    // 여기서 **(int *)**는 형변환(type cast) 맞습니다.
    // => 즉, malloc()이 반환하는 void * 타입의 포인터를 int * 타입으로 강제 형변환한 거예요.
    if (pi == NULL)
    {
        printf("메모리가 부족한 상황임 ");
        exit(1);
    }
    printf("다섯명의 나이를 입력해라 ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf(" 다섯명의 나이 평균은 %lf\n", (sum /5.0));
    free(pi);
    return 0;
}

