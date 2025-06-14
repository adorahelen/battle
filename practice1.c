#include <stdio.h>
int main (void) 
{
   int a;
   int *pa;

   pa = &a;
   *pa = 10; 
   // 변수 a 선언, 포인터 pa 선언
   // 선언한 해당 포인터에 선언된 변수 a의 주소값을 넣는다.
   // 선언된 포인터에 해당 변수가 링크되어, 포인터를 통해 변수 a를 다루는 것이 가능하다. 

   printf("pointer a value %d \n", *pa);
   printf("is it same to before %d\n", a);


   return 0;
}