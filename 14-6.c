// pointer array 

#include <stdio.h>
int main(void){
    char *pary[5];
    int i;

    pary[0] = "dog";
    pary[1] = "dog";
    pary[2] = "dog";
    pary[3] = "dog";
    pary[4] = "dog";

    for (i=0; i<5; i++){
        printf("%s[%d]\n", pary[i], i);
    }

    return 0;


}
