#include <stdio.h>

int main(){
     
    // 배열을 활용한 포인터 예제
    // int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int* par;
    // int i;
    // par = &arr[0];

    // for (i = 0; i < 10; i++){
    //     printf("arr의 [%d]의 주소값 : %p \n", i , &arr[i]);
    //     printf("(par + %d)의 값 : %p \n",i , (par + i));

    //     if(&arr[i] == (par+ i)){
    //         printf(" ---> 일치 \n");

    //     }else{
    //         printf(" ---X 불일치 \n");
    //     }
    // }

    int arr[6] = { 1 , 2, 3 ,4 ,5 ,6};
    int* param = arr;

    printf("Sizeof(arr) : %d \n",  sizeof(arr));
    printf("Sizeof(param) : %d \n",  sizeof(param));
    
    return 0;
}