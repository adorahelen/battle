// // // // #include <stdio.h>
// // // // int factorial(int n);

// // // // int main(){
// // // //     int (*pf) (int);
// // // //     pf = factorial;
// // // //     printf("%d", pf(8));
// // // // }

// // // // int factorial(int n) {
// // // //     if (n <= 1)
// // // //         return 1;
// // // //     else 
// // // //         return n * factorial(n-1);

// // // // }

// // // #include <stdio.h>
// // // void align(int a[]) { // 버블정렬
// // //     int temp;
// // //     for (int i = 0; i < 4; i++) // 1번 2번 3번 
// // //         for (int j = 0; j < 4 - i; j++) // 3번 2번 1번 
// // //             if (a[j] > a[j+1]) {
// // //                 temp = a[j];
// // //                 a[j] = a[j+1];
// // //                 a[j+1] = temp;
// // //             }


            
// // // }
// // // int main()
// // // {
// // //     int a [ ]= {85, 75, 50, 100, 95};
// // //     align(a);
// // //     for (int i = 0; i < 5; i++)
// // //         printf("%d ", a[i]);

// // // }

// // #include <stdio.h>
// // #include <string.h>

// // void inverse(char *str, int len) {
// //     for(int i = 0, j = len - 1; i < j; i++, j--) {
// //         char ch = str[i];
// //         str[i] = str[j];
// //         str[j] = ch;


// //     }
// // }
// // int main(){
// //     char str[100] = "ABCDEFGH";
// //     int len = strlen(str);
// //     inverse(str, len);
// //     for (int i = 1; i < len; i +=2) {
// //         printf("%c", str[i]);
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// char n [30];
// char * getname() 
// {
//     printf("이름 입력 : ");
//     gets(n);
//     return n;

// }

// int main()
// {
//     char * n1 = getname();
//     char * n2 = getname();
//     char * n3 = getname();

//     printf("%s\n", n1);
//     printf("%s\n", n2);
//     printf("%s\n", n3);


//     return 0;
// }

// #include<stdio.h>
// int func() {
//     static int x = 0;
//     x += 2;
//     return x;
// }
// int main() {
//     int x = 0;
    
// }

#include <stdio.h>
void func (int **arr, int size) {
    for (int i = 0; i < size; i++) {
        * (arr + i) = ( * (*arr + i) + i) % size;
    }
}

int main () {
    int arr[] = {3, 1, 4, 1, 5};
    int *p = arr;
    int ** pp = &p;
    int num = 6;
    func(pp, 5);

    num = arr[2];
    printf("%d", num);
    return 0;



}