// 1.include라는 명령어를 통해 stdioo.h를 항상 불러온다.
//  StanDard Input Output의 약자로 표준 입출력이란 뜻이다.
//  이것이 없다면 우리가 원하는 출력을 할 수 없다.

//2. 뒤에 .h는 헤더파일이라고 정의한다.

// 3. \n을 하는 이유는 개행을 하기 위해서 사용한다.

// 4. main함수는 프로그램이 시작되는 함수이다.
//return은 항상 0으로 세팅하는 것이 좋다. 1을 사용해도 상관없지만 0이 아니라면,
// 제대로 종료되지 않았음을 뜻한다.

#include <stdio.h>
int main (){
    printf("Hello world \n");
    printf("Hello world \n");
    printf("This is my first step. \n");
    return 0;
};