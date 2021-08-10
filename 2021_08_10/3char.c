#include <stdio.h>
// @1
// int main(){
//     char a;
//     a = 'A';
//     printf("a의 값과 들어 잇는 문자는 ? 값 : %d, 문자는 : %c \n", a ,a);
//     return 0;
// };
// @1
//A와 a의 값은 서로 다르게 나온다. 이유는 아스키 코드값이 나오기 때문에 서로 대문자와
// 소문자의 값은 다르다.


// @2

// int main(){
//     double cel;
//     printf("섭씨 온도를 화씨로 바꾸는 프로그램입니다. \n");
//     printf("섭씨 온도를 입력하세요. \n");
//     scanf("%lf", &cel);
//     printf("섭씨 %f도는 화씨 %f 도 입니다. \n", cel, 9 * cel /5 + 32 );
//     return 0; 
// };

// @2
// scanf는 입력받는 함수이다.
// %lf는 double을 입력받는 양식이다.
// 이후 다음 printf문에서 첫 번째 %f는 cel의 값이 들어가고,
// 두 번째 %f는 계산된 값을 넣어준다.

//@3
int main(){
    char ch; //문자
    
    short sh; //정수 
    int i;
    long lo;

    float fl; //실수
    double du;

    printf("char 변수 입력 :");
    scanf("%c", &ch);
    
    printf("short 변수 입력 :");
    scanf("%hd", &sh);
    printf("int 변수 입력 :");
    scanf("%d", &i);
    printf("long 변수 입력 :");
    scanf("%ld", &lo);
    
    printf("float 변수 입력 :");
    scanf("%f", &fl);
    printf("double 변수 입력 :");
    scanf("%lf", &du);
    
    printf("char : %c, short : %d, int : %d \n", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
  
    
    return 0;
};

// @3
// char은 1바이트 짜리를 최대로 지원하는데 한글은 2바이트라서 한글을 입력한다면 오류가 난다.
// 허용된 메모리 이상에 데이터를 집어넣어 발생하는 오류를 버퍼 오버플로우라고 정의한다.
// 보안에 매우 취약하다.

