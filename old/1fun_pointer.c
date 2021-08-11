#include <stdio.h>



//     // 예제1

// int changeVal(int i){
//     i = 3;
//     return 0;
// }
// int main(){
//     int i = 0;

//     printf("before call i : %d \n", i);
//     changeVal(i);
//     printf("after call i : %d \n", i);
// }

// 예제2
    // int changeVal(int *pi){
    //     printf("--------on ChangeVal --------\n");
    //     printf("the value of pi : %p \n", pi);
    //     printf("the pointer of pi : %d \n", *pi);

    //     *pi = 12;

    //     printf("--------done--------\n");
    // }

    // int main(){ 
    //     int i = 0;

    //     printf("before i address : %p \n ",  &i);
    //     printf("befor call i value : %d \n", i);
    //     changeVal(&i);
    //     printf("after call i value : %d \n", i);

    // }

    // // 예제3

    // int swap(int *a , int *b){
    //     int temp = *a;
    //     *a = *b;
    //     *b = temp;

    //     return 0;
    // }
    // int main(){
    //     int i , j;

    //     i  = 3; 
    //     j = 5;

    //     printf("SWAP 이전 : i : %d m j  : %d \n", i , j);

    //     swap( &i , &j);

    //     printf("SWAP 이후 : i : %d  j : %d \n", i , j);

    //     return 0;
    // }

    // 예제4
    // int addNumber(int *par);
    // int main(){
    //     int arr[3];
    //     int i;

    //     for(i = 0; i < 3; i++){
    //         scanf("입력하세요 : %d", &arr[i]);
    //     }

    //     addNumber(arr);
    //     printf("각 원소는 : %d , %d , %d" , arr[0] , arr[1], arr[2]);
    //     return  0;
    // }

    // int addNumber(int *par){
    //     int i;
    //     for(i = 0; i < 3; i++){
    //         par[i]++;
    //     }
    //     return 0;
    // }

    // 예제5

    // int maxNumber(int *par){
    //     int i;
    //     int max = par[0];

    //     for(i < 1; i < 10; i++){
    //         if(par[i] > max){
    //             max = par[i];
    //         }
    //     }
    //     return max;
    // }

    // int main(){
    //     int arr[10];
    //     int i;
    //     for( i = 0; i < 10; i++){
    //         scanf("%d", &arr[i]);
    //     }
    //     printf("입력한 배열 중 가장 큰 수 : %d \n" , maxNumber(arr));
    //     return 0;
    // }
    
    // 예제6

    // without fun ver
    // int main(){
    //     char input;

    //     scanf("%c", &input);

    //     if(48 <= input && input <= 57){
    //         printf("%c는 숫자입니다 \n" , input);
    //     }else{
    //         printf("%c는 숫자가 아닙니다. \n" , input);
    //     }
    //     return 0;
    // }

    // with fun ver
    int isDigit(char c);

    int main(){
        char input;

        scanf("%c", &input);

        if(isDigit(input)){
            printf("%c 는 숫자입니다. \n", input);
        }else{
            printf("%c는 숫자가 아닙니다. \n", input);
        }

        return 0;
    }

    int isDigit(char c){
        if( 48 <= c && c <= 57){
            return 1;
        }else{
            return 0;
        }
    }

    
