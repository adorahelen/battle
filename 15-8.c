#include <stdio.h>

void func(int (*fp)(int, int)); // 함수 포인터의 정확한 선언 (매개변수와 반환형 명시)
int sum(int a, int b);
int mul(int a, int b);
int max(int a ,int b);

int main(void)
{
    int sel; // 선택된 메뉴 번호를 저장할 변수 

    printf("1 은 더하기, 2는 곱셈, 3은 가장 큰 값 : 원하는 연산을 선택하시오. ");
    scanf("%d", &sel); // 메뉴 번호를 입력 

    switch (sel)
    {
    case 1: func(sum); break;
    case 2: func(mul); break;
    case 3: func(max); break;
    //     /* code */
    //     break;
    
    // default:
    //     break;
    }
    return 0;
}

void func(int (*fp)(int, int)) // 함수 포인터의 정확한 선언 (매개변수와 반환형 명시)
{
    int a, b; // 두 정수를 저장할 변수
    int res; // 함수의 반환값을 저장할 변수

    printf(" 두 정수의 값을 입력하세요. : ");
    scanf("%d%d", &a, &b);
    res = fp(a,b);
    printf(" result is %d \n", res);
}

int sum(int a, int b) {return a+b;}
int mul(int a, int b) {return a*b;}
int max(int a, int b) {return a>b ? a : b;}



