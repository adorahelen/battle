#include <stdio.h>
 
void func(int** arr, int size){
  for(int i = 0; i < size; i++){
     *(*arr + i) = (*(*arr + i) + i) % size;
  }
}
 
int main(){
  int arr[] = {3, 1, 4, 1, 5};
  int* p = arr;      // 배열 시작 주소
  int** pp = &p;     // 이중 포인터 (포인터를 가리킴)
  int num = 6;

  func(pp, 5);       // arr 값을 가공
  num = arr[2];      // arr의 2번째 인덱스 값
  printf("%d", num); // 출력

  return 0;
}
// #하단의 동일한 코드를 일부러 어렵게 꼬았음
// void func(int* arr, int size){
//   for(int i=0; i<size; i++){
//     arr[i] = (arr[i] + i) % size;
//   }
// }

// int main(){
//   int arr[] = {3, 1, 4, 1, 5};
//   func(arr, 5);
//   printf("%d", arr[2]);  // → 1
// }