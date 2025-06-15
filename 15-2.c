#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("문자열을 담은 포인터 pa 에 성공, pb 에 실패를 담아 놓았다.");
    printf("\n%s, %s", pa,pb);

    printf("\n더블 포인터를 이용한 swap 함수 호출");
    swap_ptr(&pa, &pb);// pa, pb 하면 call by value 라서 안바뀌니까 &를 통해 주소를 넘겨야 바뀜 
    // call by reference 

    printf("\n%s, %s", pa,pb);

    return 0;
}

// 포인터로 주소를 받으니 *pa의 &주소는 **ppa로 받아야함 
void swap_ptr(char **pa, char **pb)
{
    
    char *temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}