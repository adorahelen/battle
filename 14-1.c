#include<stdio.h>

int main(void){
    int score[3][4]; // 3행 4열 
    // - - - -
    // - - - -
    // - - - -

    int total;
    double average;
    int i , j;

    for (i = 0 ; i < 3; i++) // like first hang size, loof
    {
        printf(" input the 4subject score : ");
        for (j=0; j<4; j++){
            scanf("%d", &score[i][j]);

        }
    }

    for (i = 0; i < 3; i++){
        total = 0;
        for (j = 0; j <4; j++)
        {
            total += score[i][j];

        }
        average = total / 4.0;
        printf("총점 : %d, 평균 : %.2lf\n", total, average);
    }
    return 0;

    

}

//  // 총점과 평균 계산 후 저장
//  for (i = 0; i < 3; i++) {
//     total[i] = 0;
//     for (j = 0; j < 4; j++) {
//         total[i] += score[i][j];
//     }
//     average[i] = total[i] / 4.0;
// }

// // 출력
// for (i = 0; i < 3; i++) {
//     printf("%d번째 학생 - 총점: %d, 평균: %.2lf\n", i + 1, total[i], average[i]);
// }

// return 0;
// }