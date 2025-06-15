#include <stdio.h>

void print_ary(int (*)[4]); // 그냥 뒤에는 고정하고 앞에는 비워서 던지거나, 이런식으로
//void print_ary(int [][4]);
//void print_ary(int [][4][6]);
//void print_ary(int (*)[4][2]);
//void print_ary(int (*)[4][2][3][4]);


// void print_ary(int (*pa)[4]) : 열이 4개인 2차원 배열을 받겠다 (o)
// void print_ary(int pa[][4])  : 동일하게 작동하지만 표현이 다를 뿐 (o)
// void print_ary(int *pa)      : 1차원 배열처럼 동작함 → 행, 열 정보 손실 (x)

int main(void){

    int arry[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    print_ary(arry);

    return 0;

}
void print_ary(int (*p2)[4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j=0; j<4; j++) {
        printf("%5d", p2[i][j]); }
        printf("\n");
    }
}
