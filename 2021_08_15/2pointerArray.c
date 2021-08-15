#include <stdio.h>

int main(){
    int num = 10, num2 = 20, num3 = 30;
    int *parr[3];

    parr[0] = &num;
    parr[1] = &num2;
    parr[2] = &num3;

    for(int i = 0; i < 3; i++){
        printf("parr[%d] : %d \n", i , *parr[i]);
    }
    return 0;
}

//포인터 배열 
//일반 배얼과 같이 포인터를 담을 수 있는 배열이 있다.
// 일반 배열과 선언하는 것이 똑같고 대입할 땐 변수의 주소값을 넣는다.
