#include <stdio.h>
int main(){
    int a;
    a = 10;
    printf("a의 값은 : %d \n ", a);
    return 0;
};

#include <stdio.h>

int main(){
    int a;
    a = 127;

    printf("a의 값은 %d 진수로 %o 입니다. \n", a);
    //a의 값은 8진수로 177입니다.
    // %o는 8진수로 출력하라는 의미이다.
    printf("a의 값은 %d 진수로 %d 입니다. \n", a);
    //a의 값은 10진수로 127입니다.
    printf("a의 값은 %d 진수로 %x 입니다. \n", a);
    //a의 값은 16진수로 7f입니다.
    // %x는 16진수로 출력하라는 의미이다.

    return 0;
    };



#include <stdio.h>

int main(){
    float a = 3.141552f;
    // float에서 f를 붙인 이유는 double로 인식할 수 있기에 붙여준 것이다.
    double b = 3.21313;
    printf("a : %f \n", a);
    printf("b : %f \n", b);
    // 이렇게 %f를 붙인다면 실수가 나온다.
    // f가 아닌 %d를 붙인다면 당연히 정수가 나올 것이다.
    printf("b : %.2f \n", b);
    //이렇게 한다면 소수점 2번째 자리 이하까지만 출력하라는 의미이다. 즉 3.21까지만 나온다.
    
    return 0;
};