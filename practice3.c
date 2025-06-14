#include <stdio.h>

void swap(int *pa, int *pb); // 함수 선언
//int swap2(int pa2, int pb2); // 함수 선언

typedef struct {
    int first;
    int second;
} Pair;

Pair swap3(int a, int b) {
    Pair result = {b, a}; // swap
    return result;
}

int main(void) // 메인 함수
{
    int a=10, b=20;
    int c=10, d=20;


    swap(&a, &b);
    printf("a:%d, b:%d\n", a,b);

    // int c,d = swap2(c, d);

    Pair p = swap3(c, d);
    // printf("%d", p);
    printf("p.first: %d, p.second: %d\n", p.first, p.second);
    c = p.first;
    d = p.second;

    printf("c:%d, d:%d", c,d);


    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

// int swap2(int pa2, int pb2)
// {
//     int temp;

//     temp = pa2;
//     pa2 = pb2;
//     pb2 = temp;

//     return pa2, pb2;
// }

// 목표 : 사용 방법
// 값을 바꾸고 싶다 (swap) : 포인터 (swap(&a, &b))로 주소를 넘긴다
// 값을 바꾸고 리턴하고 싶다 : 구조체나 포인터를 사용해서 반환

// => C는 다중 반환이 불가능함 


