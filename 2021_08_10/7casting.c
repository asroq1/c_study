#include <stdio.h>


//1
int main(){
    int a;
    double b;

    b = 2.4;
    a = (int)b;

    printf("%d", a);
    return 0;
};

//1 만약 위와 같이 강제로 형변환을 하지 않는다면 컴파일러의 경고가 출력된다.
// 사용방법은 (바꾸려는 형) 변수 이름 *ex (double)test