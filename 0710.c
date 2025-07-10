// #include<stdio.h>
// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     int *parr[2] = {arr[1], arr[2]};
//     printf("%d", parr[1][1] + *(parr[1]+2) + **parr);

// }

// #include <stdio.h>
// struct Node 
// {
//     int value;
//     struct Node *next;
// };

// void func(struct Node *node) {
//     while(node != NULL && node -> next != NULL) {
//         int t = node -> value;
//         node -> value = node -> next -> value;
//         node -> next -> value = t;
//         node = node -> next -> next;
//     }


// }
// int main
// (){
//     struct Node n1 = {1, NULL};
//     struct Node n2 = {2, NULL}
    
// }

#include <stdio.h>

int isPerfectNum (int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) // 받은 인자를 대상으로, i 를 증가하며 나누었을때 딱 떨어지면 
                sum += i; // 그런 경우에는 더해라 
    }
    if (num == sum) return 1; // 이게 의미하는건 끝났을 때
    else return 0;

}
int main () {
    int r = 0;
    for (int i = 1; i <= 100; i++){
        if (isPerfectNum(i))
            r += i;
    }
        printf("%d", r);

}