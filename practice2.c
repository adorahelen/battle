#include <stdio.h>

int main(void)
{
    int a = 10, b =15, total; 
    double avg;

    int *pa, *pb;
    int *pt;
    double *pg;

    pa = &a;
    pb = &b;
    pt = &total;
    pg = &avg;

    *pt = *pa + *pb; // pt = pa + pb  
    printf("%d\n" ,total);
    printf("%d" ,*pt);
    // printf("%d" ,pt);

    // [포인터 선언 이후에 다시 * 붙여서 사용시 역참조라고 부름 ]
    // *pa
    // a의 값 (역참조)
    // 예: 10
    // 포인터가 가리키는 주소에 있는 실제 값

    // [ex]
    //   a         = 10
    //   & a       = 0x1234 (예시 주소)
    //   pa        = &a = 0x1234
    //   *pa       = 10
    





}