#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void) {
    char *ptr_ary[] = {"sogang", "jeju", "hanyang", "catholic", "security"};

    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    return 0;
}

void print_str(char **pps, int cnt)
{
    int i;
    for (i = 0; i < cnt; i++){
        printf("%s \n", pps[i]);
    }

}// * 하나를 받으려면, ** 두개를 쓰고
// 그냥 단순히 *를 안썼으면, *하나로 받을 수 있는데, *하나로 받을때 던지는 값은 &로 던져야 한다.  끝

