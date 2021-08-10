#include <stdio.h>
// @1
// int main(){
//     int i;
//     printf("입력하고 싶은 숫자를 입력하세요. :");
//     scanf("%d", &i);

//     if(i == 7){
//         printf("당신은 행운의 숫자를 입력하셨네요.");
//     }
//     return 0;
// };

// @2

// int main(){
//     double i, j;
//     printf("나누고 싶은 숫자를 두 개 입력하세요");
//     scanf("%lf %lf", &i , &j);
//     if(j == 0){
//         printf("0으로는 나눌 수 없습니다. \n");
//         return 0;
//     }
//     printf(" %f 를 %f 로 나눈 값은 :  %f \n 입니다.", i , j , i / j);
//     return 0;
// };

// @3

int main() {
  int a = 31, b = 15;
  printf("a & b = %d\n", a & b);
  printf("a && b = %d\n", a && b);
}