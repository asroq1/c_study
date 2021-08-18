// #include <stdio.h>

// int printHello(){
//     printf("Hello \n");
//     return 0;
// }
// int main(){ 
//     printf("call func");
//     printHello();
//     return 0;
// }

// #include <stdio.h>

// int returnThousand(){
  
//     return 1000;
// }
// int main(){ 
//     int number = returnThousand();
//     printf("number = %d" , number);
    
//     return 0;
// }

// return함수의 return값인 1000을 number에 할당했다.
// 함수는 사용되고 나서 리턴값을 반환한다.

// #include <stdio.h>
// int slave(int master_money) {
//   master_money += 10000;
//   return master_money;
// }
// int main() {
//   int my_money = 100000;
//   printf("2021.08.16 재산 : $%d \n", slave(my_money));
//   printf("my_money : %d", my_money);

//   return 0;
// }

//결과
// 2021.08.16 재산 : $110000
// my_money : 100000 

// slave함수의 파라미터에 현재 돈인 my_money를 할당하기에
// slave함수가 실행되고 master_money가 반환된다.

// 그러나 money를 보면 10000이 나온다. 그 이유는 slave함수를 이용해도
// main의 지역번수인 my_money의 값에는 영향을 주지 않기 때문이다. 
// 이것을 해결하려면 포인트를 활용하면 된다.

#include <stdio.h>

// int main(){
   
//     int changeValue(int *value){

//         printf("value의 값: %p \n", value);
//         printf("value의 값 : %d \n", *value);

//         *value = 3;
//         printf("함수 종료\n");
//     return 0;
//     }
//    int i = 0;
//    printf("i의 주소 : %p \n" , &i);
//    printf("호출 이전 i값 : %d \n" , i);
//    changeValue(&i);
//    printf("호출 이후 i값 : %d \n" , i);

//    return 0;
// }

// 출력
// i의 주소 : 000000000061FE14 
// 호출 이전 i값 : 0
// value의 값: 000000000061FE14
// value의 값 : 0
// 함수 종료
// 호출 이후 i값 : 3


// int main(){
//     int a = 10;
//     int b = 20;

//     printf("befor a = %d, b = %d \n" , a , b);
//     swap(&a, &b);
//     printf("after a = %d , b = %d \n", a , b);
//     return 0;
// }

// int swap(int *number ,int *number2){ 
//     int temp;
//     temp = 0;
//      temp = *number;
//      *number = *number2;
//      *number2 = temp;
//     return 0;
// }
//  swap을 호출할 때 a, b변수의 주소값을 보내준다.
// swap의 두 개의 파라미터는 포인터 값을 받는다.
// 그렇기에 포인터를 통해 main의 지역변수를 접근할 수 있는 것이다.

// int addNumber(int *parr){
//     int i;
//     for(i = 0; i < 3; i++){
//         parr[i]++;
//     }

//     return 0;
// }
// int main(){
//     int arr[3];
//     int i;

//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     addNumber(arr);

//     printf("배열의 각 원소 : %d, %d ,%d ", arr[0],arr[1],arr[2]);
    
//      return 0;
// }

// addNumber()을 호출할 때 arr을 그냥 넣어도 되는 이유는 배열은 주소의 시작값을 가지고 있기 때문이다.
// 이후 


// int maxNumber(int *parr){
//     int i;
//     int max = parr[0];

//     for (int i = 0; i < 10; i++)
//     {
//         if(parr[i] > max){
//             max = parr[i];
//         }
//     }
//     return max;
// }
// int main(){
//     int arr[10];
//     int i;

//     for (int i = 0; i < 10; i++)
//     {
//        scanf("%d", &arr[i]);
//     }

//     printf("배열 중 가장 큰 수 : %d \n", maxNumber(arr));
    
// }

//제일 큰 수를 max라는 변수에 담고 리턴한다.
// 배열의 첫 번째 값을 max라고 저장한 뒤 반복문에서 max보다 더 큰 값이 있다면,
// 해당 값을 max로 바꿔준다.

int pswap(int **ppa, int **ppb){
    int *temp = *ppa;

    printf("ppa가 가리키는 변수 주소값 : %p \n", ppa);
    printf("ppb가 가리키는 변수 주소값 : %p \n", ppb);

    *ppa = *ppb;
    *ppb = temp;
    return 0;
}

int main(){
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;
    
    pswap(&pa, &pb);

    return 0;
}