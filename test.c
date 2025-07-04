#include <stdio.h>
#include <ctype.h>  // 문자 타입 판단 함수들이 들어있음

int main(){
    char* p = "It is 8";      // 원본 문자열
    char result[100];         // 변환 결과를 저장할 배열
    int i;

    for(i=0; p[i] != '\0'; i++){   // 문자열 끝까지 한 글자씩 반복
        if(isupper(p[i]))           // 대문자(A-Z)인지 검사
            result[i] = (p[i] - 'A' + 5) % 25 + 'A';  // 대문자는 5칸 밀기 (알파벳 25개 기준) *26이 되어야 맞음 오타겠지?
        else if(islower(p[i]))     // 소문자(a-z)인지 검사
            result[i] = (p[i] - 'a' + 10) % 26 + 'a'; // 소문자는 10칸 밀기 (알파벳 26개 기준)
        else if(isdigit(p[i]))     // 숫자인지 검사
            result[i] = (p[i] - '0' + 3) % 10 + '0';  // 숫자는 3 더하기 (0~9 기준)
        else if(!(isupper(p[i]) || islower(p[i]) || isdigit(p[i]))) // 공백이나 특수문자 등은 그대로
            result[i] = p[i];
    }

    result[i] = '\0';  // 문자열 끝 표시 (널 문자 삽입)
    printf("%s\n", result);  // 결과 출력

    return 0;
}

// 당신이 질문한 “밀기 공식”, 즉 이 부분:

// (p[i] - 'A' + 5) % 25 + 'A'

// 이게 왜 그런 형태인지 헷갈릴 수 있어요.
// 한 단계씩 아주 천천히 설명해드릴게요!

// ⸻

// 🔑 기본 개념: 문자도 숫자처럼 연산된다!

// C언어에서 문자(char)는 사실 **숫자(아스키 코드)**로 되어 있어요.

// 예를 들어:

// 문자	아스키 코드
// ‘A’	65
// ‘B’	66
// ‘Z’	90


// ⸻

// ✅ 목적: p[i]라는 문자를 → “몇 칸 뒤”로 바꾸기

// 예: 'A'를 5칸 뒤로 → 'F'로 바꾸고 싶다면:

// 'A' → 'F'  
// 'A'의 아스키: 65  
// 'F'의 아스키: 70

// 즉: 65 + 5 = 70 → 'F'

// ⸻

// 🎯 그런데 왜 (p[i] - 'A' + 5) % 25 + 'A'처럼 쓰는 걸까?

// 이 공식을 분해해서 설명할게요.

// 📌 p[i] - 'A'
// 	•	대문자 ‘A’부터 시작해서 0부터 세기
// 	•	'C' - 'A' = 2, 'D' - 'A' = 3
// 	•	즉, 'A'를 0으로 보고 시작하는 순서번호로 바꾸는 거예요

// 📌 + 5
// 	•	밀고 싶은 칸 수만큼 더함
// 	•	예: ‘C’는 2 → 2 + 5 = 7

// 📌 % 25 또는 % 26
// 	•	밀었을 때 Z를 넘지 않게 하기 위해 나머지 연산을 사용해요
// 	•	예: 'Z' - 'A' = 25, 그래서 % 26이 자연스러움
// 	•	이 코드에서는 % 25인데 이건 Z를 포함하지 않게 하려는 실수일 가능성도 있어요 → % 26이 일반적이에요

// 📌 + 'A'
// 	•	아까 0~25 숫자로 바꾼 걸 다시 문자로 바꿔주는 과정
// 	•	0 + 'A' = 65 → 'A'
// 	•	7 + 'A' = 72 → 'H'

// ⸻

// 🔁 전체 흐름 예시: 'C' 밀기

// p[i] = 'C' → 아스키 67
// (p[i] - 'A') = 67 - 65 = 2
// 2 + 5 = 7
// 7 % 25 = 7
// 7 + 'A' = 72 → 'H'

// 즉, 'C' → 'H'

// ⸻

// 🔴 그런데 왜 % 25? ❌
// 	•	알파벳은 26글자예요 (A~Z)
// 	•	% 25를 쓰면 'Z'(25) + 1 → 26 % 25 = 1 → ‘B’처럼 되며 한 글자가 빠져요
// 	•	그러니까 정확히 쓰려면 → **% 26** 이 맞습니다 ✅

// ⸻

// 🎯 정리 요약

// 공식:

// (p[i] - 기준문자 + 밀기칸수) % 알파벳개수 + 기준문자

// 	•	대문자: 'A', 알파벳개수 = 26
// 	•	소문자: 'a', 알파벳개수 = 26
// 	•	숫자: '0', 숫자개수 = 10

// ⸻

// ✅ 예시 총정리

// 원래 문자	대문자 공식을 적용	결과 문자
// ‘A’	(‘A’-‘A’+5)%26+‘A’ → 5+‘A’ = ‘F’	‘F’
// ‘Z’	(25+5)%26 = 4 + ‘A’ = ‘E’	‘E’
// ‘t’	(‘t’-‘a’+10)%26+‘a’ → 19+10 = 29%26 = 3 + ‘a’ = ‘d’	‘d’
// ‘8’	(‘8’-‘0’+3)%10+‘0’ → 8+3=11%10=1+‘0’ = ‘1’	‘1’


// ⸻

// 혹시 이걸 그림으로 설명해볼까요?
// 또는 이걸 직접 손으로 계산하는 연습문제 만들어드릴 수도 있어요! 😊