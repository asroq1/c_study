#include <stdio.h>

    // 예제1
// int main(){
//     int a, b;
//     int *pa, *pb;

//     pa = &a;
//     pb = &b;

//     printf("pa가 가르키는 변수의 주소값 : %p \n", pa);
//     printf("pa의 주소값 : %p \n", &pa);
//     printf("pb가 가르키는 변수의 주소값 : %p \n", pb);
//     printf("pb의 주소값 : %p \n", &pb);

//     printf(" --------호출 ------------\n");
//     pswap(&pa , &pb);
//     printf(" --------호출 끝------------\n");

//     printf("pa가 가르키는 변수의 주소값 : %p \n", pa);
//     printf("pa의 주소값 : %p \n", &pa);
//     printf("pb가 가르키는 변수의 주소값 : %p \n", pb);
//     printf("pb의 주소값 : %p \n", &pb);

// }

// int pswap(int  **ppa, int **ppb){
//     int *temp = *ppa;

//     printf("ppa가 가리키는 변수의 주소값 : %p \n", ppa);
//     printf("ppb가 가리키는 변수의 주소값 : %p \n", ppb);
    
//     *ppa = *ppb;
//     *ppb = temp;
    
//     return 0;
// }

// 예제2

// int addElement( int (*arr)[2] , int row){
//     int i , j;  
//     for(i = 0; i < row; i++){
//         for( j = 0; j < 2; j++){
//             arr[i][j]++;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[3][2];
//     int i, j;

//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 2; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     addElement(arr , 3);

//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 2; j++){
//             printf("arr[%d][%d] : %d \n", i , j ,arr[i][j]);
//         }
//     }
//     return 0;

//     }

    // 예제3

    // int max(int a, int b);
    // int main(){
    //     int a, b;

    //     //요것이 함수의 포인터이당.
    //     int (*pmax)(int ,int);
    //     pmax = max;

    //     scanf("%d %d", &a,  &b);
    //     printf("max(a , b) : %d \n", max(a, b));
    //     printf("pmax(a, b : %d \n" , pmax(a , b ));

    //     return 0;
    // }
    // int max(int a, int b){
    //     if( a > b){
    //         return a;
    //     }else{
    //         return b;
    //     }

    //     return 0;
    // }

    // 에제4
    int max( int a, int b);
    int doNothing(int c, int k);

    int main(){
        int a, b;
        int (*pfun)(int , int);
        pfun =  max;

        scanf("%d %d", &a, &b);
        printf("max( a, b ) : %d \n ", max( a, b));
        printf("pfunc( a, b ) : %d \n ", pfun( a, b));

        pfun = doNothing;

        printf("doNithing( 1, 1 ) : %d \n ", max( 1, 1));
        printf("pfunc( 1, 1 ) : %d \n ", max( 1, 1));


    }

    int max(int a, int b){
        if ( a  > b){
            return a;
        }else{
            return b;
        }

        return 0;
    }
    int doNothing(int c, int k){
        return 1;
    }
    