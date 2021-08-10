#include <stdio.h>

// int main(){
//     int a = 5;
//     int* pa;

//     pa = &a;


//     printf("주소값을 확인하려면 그냥 변수값을 쓰자. %x \n", pa);
//     printf("주소의 값을 접근하려면 이렇게 사용하자. %d \n", *pa);
//     return 0; 
// };

// 1. *의 용도
// - 포인터를 선언할 때
// - 해당 주소의 값에 접근할 때 사용

//  1-1 &의 용도
// - 원하는 변수의 주소를 나타낼 때

// 즉 pa는 주소값
// *pa는 주소값의 값

// int add( int num1,int num2){
//     return num2- num1;
// }

//  int swap(int* num1, int* num2){

//     int temp;
//     temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;

//     return 0;
// };
// int main(){
//     int a = 5;
//     int  b = 10;
//     int* pa;
//     int* pa2;

//     pa = &a;
//     pa2 = &b;
    
//     printf("포인터 끼리의 연산 b-a = %d \n", *pa2 - *pa);
//     printf("add함수 사용 : %d \n", add(*pa , *pa2));
//     swap(&a, &b);
//     printf("swap함수 사용 후  a=%d , b = %d \n", a , b);

//     return 0; 
// };

//이렇게 포인터를 활용해서 값이 아닌 주소값을 전달하여 스와핑을 한다.

int main(){
    char arr[6] = {"hello"};

    char* ptr;
    ptr = &arr[0];

    //연산자 우선순위 때문에 ()괄호를 이용해야 예상하던 값이 나온다.
    printf("%c", *(ptr+4));
    return 0;
};

//포인터의 장점 : 메모리 수준까지 접근이 가능해 자유롭게 값을 변경할 수 있다.
//포인터의 단점 : 포인터를 활용하면 주소를 활용해 데이터를 바꾸는 것이기 때문에 디버깅이 상당히 어려워진다.
// 연산을 잘못할 시 다른 값을 변경해 중요한 데이터를 수정할 수도 있다.

