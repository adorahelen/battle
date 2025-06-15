#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *pi;
    int size = 5;
    int count = 0;

    int num;
    int i;

    pi = (int *)calloc(size, sizeof(int));// size=5;, int 5개 저장공간 할당

    while(1){
        printf(" 양수만 입력해라 => ");
        scanf("%d", &num);
        if (num <= 0) break;
        if (count == size){
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int));
        } 
        pi[count++] = num; // count 는 동적할당 메모리에 index 로 
        // num 으로 들어오는 input 들을 하나씩 넣어 나간다. 
    }
    for (i = 0; i < count; i++){
        printf("%5d", pi[i]);
    }
    free(pi);
    return 0;
}