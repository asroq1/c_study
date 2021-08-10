#include <stdio.h>

//1
//포인터 선언 방법
// int* p;

//2
// 변수 a의 주소값을 알아내고 싶다면 
// &a

//3
// 주소 알아내기
// int main(){
//   int a;
//   a= 2;

//   printf("%p \n", &a);

  
//     return 0;
// };
// 아래와 같은 16진수의 값이 출력된다.
//결과 000000000061FE1C

//4

// int main(){
//     int *p;
//     int a;

//     p = &a;

//     printf("포인터 p에 들어있는 값: %p \n", p);
//     printf("int변수 a가 저장된 주소 : %p \n", &a);
//       return 0;
// };

// 포인터 p에다가 a의 주소를 대입했기 때문에 이렇게 동일한 값이 나온다.
//출력
// 포인터 p에 들어있는 값: 000000000061FE14 
// int변수 a가 저장된 주소 : 000000000061FE14

//5
// int main(){
//     int *p;
//     int a;

//     p = &a;
//     a = 2;
//     printf("a 값: %d \n", a);
//     printf("*p의 값 : %d \n", *p);
//       return 0;
// };

// *p를 통해 p에 저장된 주소에 해당하는 데이터가 그 값이 된다.
//결과
// a 값: 2 
// *p의 값 : 2

//6
int main() {
 int a, b;
 int *c;

 c = &a;
 *c = 3;

 c = &b;

 *c = 4;

  printf("영희는 %d \n", *c);
  printf("철수는 %d \n" , a);
  printf("수철이는 %d \n", b);

  return 0;
}

 //중요

//  *의 역할은 포인터라는 변수를 선언하는 역할,
//  int *p와 *p는 다르다.
// int *p는 p를 주소값을 대입할 수 있는 변수로 만드는 것이고,
// *p는 그냥 주소값에 있는 변수를 가르킨다.
//  &의 역할은 어떤 변수의 주소값을 나타내는 연산자이다.