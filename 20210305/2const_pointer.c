#include <stdio.h>

int main(){

    //상수 포인터
    // int a;
    // int b;
    // const int* pa = &a;

    // pa = &b;

    // int a;
    // int b;
    // int* const pa = &a;

    // //o
    // *pa = 3;
    // //x
    // // pa = &b;

    // printf("%d", a);

    //포인터의 덧셈
    // int a;
    // int* pa;
    // pa = &pa;

    // printf("pa의 값 : %p \n", pa);
    // printf("(pa + 1의 값 : %p \n", pa + 1);

    // 포인터의 대입
    // int a;
    // int* pa = &a;
    // int* pb;

    // *pa = 3;
    // pb = pa;

    // printf("pa가 가르키고 있는 것 : %d \n", *pa);
    // printf("pb가 가르키고 있는 것 : %d \n", *pb);

    //배열의 메모리 상태 확인

    int arr[10] = { 1, 2, 3, 4, 5, 6 ,7 ,8 , 9 , 10};
    int i;

    for(i = 0; i < 10; i++){
        printf("arr[%d]의 주소값 : %p \n", i , &arr[i]);
    }
    return 0;
}