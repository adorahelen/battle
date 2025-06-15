#include <stdio.h>

int main(void)
{
    int a=10;
    double b =3.5;
    
    void *vp;

    vp = &a; // vp는 10이겠지?

    // printf(vp);
    printf(" a : %d \n", *(int *)vp);  // int로 형변환

    vp = &b;
    printf(" b : %.1lf \n", *(double *)vp);  //  형변환



}