#include <stdio.h>

void print_arry(int * pa);

int main (void)

{
    int arry[5] = {10, 20, 30, 40, 50};

    print_arry(arry);

    return 0;
}

void print_arry(int *pa) // 매개변수로 포인터 선언 == 배열을 통으로 넘겨 받겠다.
{
    int i; 
    for (i = 0; i < 5; i++)
    {
        printf("%d  " ,pa[i]);
    }
}