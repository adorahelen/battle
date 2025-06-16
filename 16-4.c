#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char temp[80];
    char *str[3];
    int i;

    for (i=0; i< 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        gets(temp); // 문자열을 입력받음, scanf 와는 차원이 다른 효율성
        str[i] = (char *)malloc(strlen(temp) + 1);// temp=입력받은 문자열의 크기보다 1 크게 할당
        strcpy(str[i], temp); // 동적할당 영역에 (위에서 메모리만 잡음) 문자열 복사
            // 반복
    }

    for( i =0; i < 3; i++)
    {
        printf("%s\n", str[i]); // 입력된 문자열 차례식 전부 출력
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]); // 동적 할당 영역 반환
    }
    return 0;
}