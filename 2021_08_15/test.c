#include <stdio.h>

int main(){
    int arr[5] = { 1, 3, 5 ,7 ,9};
    double arr2[5] = {1.1 , 3.2 , 5.3 , 7.4, 9.5};
    int *arrPtr = arr;
    double *arrPtr2 = arr2;

    (*arrPtr)++;
    *arrPtr2++;

    printf("%d %lf %d %d \n", *arrPtr, *arrPtr2, arrPtr, arrPtr2);
  
    return 0;
}

//결과 
// 2 3.2 1000 2008

// 첫 번째 결과가 생각과 다르게 2인 이유는 연산자 때문이다. ()로 감싸주지 않는다면 3이 나온다.
//  값 1이 ++로 더해진 것이다.
//  추가설명 : (*arrPtr) ++; 는 arrPtr[0]++를 의미한다.

// 두 번째 3.2인 이유는 다음 인덱스로 넘어갔기 때문이다.
//  0번 인덱스의 1.1이 아니라 1번 인덱스로 넘어갔기 때문
//  추가설명 :*arrPtr2 ++; 는 arrPtr2[0++]를 의미한다.

// 세 번째 값이 2008인 이유는 인덱스가 다음 번으로 넘어갔고,
// 더블 자료형 크기는 8byte기 때문에 8이 증가한다.
