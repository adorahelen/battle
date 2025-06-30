#include <stdio.h>

int main() {
    int s, el = 0;

    for (int i = 6; i <= 30; i++) { // 6부터 30까지 반복
        s = 0;
        for (int j = 1; j <= i / 2; j++) { // i의 약수를 찾기 (자기 자신 제외)
            // 이유: 어떤 수 i의 약수 중 자기 자신을 제외한 약수는 i / 2보다 작거나 같기 때문
            if (i % j == 0)
                s = s + j; // 약수면 더하기
        }
        if (s == i) // 약수의 합이 자기 자신과 같다면 완전수
            el++;   // 완전수 개수 증가
    }

    printf("%d", el); // 완전수의 개수 출력
    return 0;
}