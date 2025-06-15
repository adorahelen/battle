// int add(int a, int b) {
//     return a + b;
// }

// int (*fp)(int, int);  // 함수 포인터 선언

#include <stdio.h>

int add(int a, int b) 
{ return a + b; }
int sub(int a, int b) 
{ return a - b; }

void calc(int x, int y, int (*op)(int, int)) {
    printf("Result: %d\n", op(x, y));
}

int main(void) {
    calc(10, 5, add); // 함수 자체의 이름은 함수 주소
    calc(10, 5, sub);
    return 0;
}