#include <stdio.h>

int main(){

    // //몸풀기
    // int arr[3] = {1, 2 , 3};
    // int *param;

    // param = arr;

    // printf("arr[1] : %d \n", arr[1]);
    // printf("param[1] : %d \n", arr[1]);


    // int arr[10]={ 100, 24 , 97, 95 , 89 ,76 , 52, 42, 100, 200};

    // int *param = arr;
    // int sum = 0;

    // while (param - arr <= 9){
    //     sum += (*param);
    //     param++;
    // }
    // printf( " param = %d 이다 . \n" , param);
    // printf( " arr = %d 이다 . \n" , arr);
    // printf("내 시험 총합은 : %d \n", sum);
    // printf("내 시험 평균은 : %d ", sum/10);

    //포인터의 포인터

    // int a;
    // int *pa;
    // int **ppa;

    // pa = &a;
    // ppa = &pa;
    
    // a = 3;

    // printf(" a : %d // *pa : %d // **ppa : %d \n ", a , *pa , **ppa);
    // printf(" &a : %p // pa : %p // **ppa : %p \n ", &a , pa , *ppa);
    // printf(" &pa : %p // ppa : %p  \n " , &pa , ppa);

    // //예제
    // int arr[3] = { 1, 2 ,3};
    // int (*param)[3] = &arr;

    // printf("arr[ 1 ] : %d \n", arr[1]);
    // printf("param[ 1 ] : %d \n", (*param)[1]);

    // int arr[3] = { 1, 2 ,3 };
    // int(*parr)[3] = &arr;

    // printf("arr : %p \n", arr);
    // printf("parr : %p \n", parr);

    // // 예제2
    // int arr[2][3];

    // printf("arr[0] : %p \n", arr[0]);
    // printf("arr[0][0] : %p \n", arr[0][0]);

    // printf("arr[1] : %p \n", arr[1]);
    // printf("arr[1][0] : %p \n", arr[1][0]);

     // 예제3
    //  int arr[2][3] = {{1, 2 ,3 } , { 4 ,5 ,6 }};

    //  printf("전체 크기 : %d \n ", sizeof(arr));
    //  printf("총 열의 개수 : %d \n",sizeof(arr[0]) / sizeof(arr[0][0]));
    //  printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));

    // 예제 4
    // int arr[2][3] = {{1, 2 ,3} , { 4 ,5 ,6}};

    // printf("arr : %p , arr + 1 : %p \n", arr, arr + 1);

    //배열의 포인터
    int arr[2][3] = { {  1, 2, 3} , { 4, 5 ,6}};
    int (*parr)[3];

    parr = arr;

    printf("parr[1][2] : %d \n  arr[1][2] : %d " , parr[1][2], arr[1][2]);
    return 0;


}