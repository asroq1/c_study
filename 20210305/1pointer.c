#include <stdio.h>

int main(){
    // ex 1
    // int a;
    // a = 2;

    // printf("%p \n", &a);
    // return 0;

    // ex2
    // int *p;
    // int a;

    // p = &a;

    // printf("포인터 p에 들어있는 값. : %p \n", p);
    // printf("변수 a에 들어있는 값. : %p \n", &a);

    int a;
    int b; 
    int *p;

    p= &a;
    *p = 2;
    p = &b;
    *p = 4;

    printf("a : %d \n" , a);
    printf("b : %d \n" , b);


}