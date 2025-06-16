#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps); // 동적 할당 영역의 문자열 출력할 함수 (배열을 받을꺼라 **로)

int main(void)
{
    char temp[80];
    char *str[21] = {0};
    int i;

    // for (i=0; i< 3; i++)
    // {
    //     printf("문자열을 입력하세요 : ");
    //     gets(temp); // 문자열을 입력받음, scanf 와는 차원이 다른 효율성
    //     str[i] = (char *)malloc(strlen(temp) + 1);// temp=입력받은 문자열의 크기보다 1 크게 할당
    //     strcpy(str[i], temp); // 동적할당 영역에 (위에서 메모리만 잡음) 문자열 복사
    //         // 반복
    // }

    while (i < 20)
    {
        printf(" 문자열을 입력하세요 : ");
        gets(temp);
        if (strcmp(temp, "end") == 0) break; // 완전히 같을때만 0을 반환해서 0
        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);

        i++;
    } 

    print_str(str);

    
    // for( i =0; i < 3; i++)
    // {
    //     printf("%s\n", str[i]); // 입력된 문자열 차례식 전부 출력
    // }

    for (i = 0; i < str[i] != NULL; i++)
    {
        free(str[i]); // 동적 할당 영역 반환
    }
    return 0;
}

void print_str(char **ps){
    while (*ps != NULL){
        printf("%s\n", *ps);
        ps++;
    }
}