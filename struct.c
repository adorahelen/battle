
#include <stdio.h>

struct jsu 
{
    char nae [12];
    int os, db, hab, hhabl
    /* data */
};

int main() {
    struct jsu lalala [3] =
    {
        {"데이터1", 95, 88},
        {"데이터2", 84, 91},// 여기 OS
        {"데이터3", 86, 75} // 여기 DB 
    };

    struct jsu * p;
    p = &lalala[0];

    // 데이터2 의  
    (p+1)->hab = (p+1) -> os + (p+2) ->db; // 159 
    (p+1)->hhabl = (p+1)-> hab + p -> os + p-> db; // 159 + 95 + 88 = 342
    printf("%d", (p+1)->hab + (p+1) -> hhabl);
    // 159 + 342 = 501 


}
