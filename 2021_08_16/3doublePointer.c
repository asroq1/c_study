#include <stdio.h>

int main(){
    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a = 34;  
   
    printf(" a : %d // *pa : %d // **ppa : %d \n", a , *pa, **ppa);
    printf(" a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
    printf(" a : %p // ppa : %p \n", &pa, ppa);
    return 0;
}

// 출력
//  a : 3 // *pa : 3 // **ppa : 3 
//  a : 000000000061FE14 // pa : 000000000061FE14 // *ppa : 000000000061FE14
//  a : 000000000061FE08 // ppa : 000000000061FE08

// ppa = &pa를 가리킨다.
// 그래서 모든 pa의 값이 ppa의 값이 되는 것이고, pa는 a를 가르키니
// a = pa = ppa라고 생각하면 된다.

int main(){
    int arr[2][3] = { {1, 1, 1}, {2, 2, 2}};
    printf("전체 크기 : %d \n", sizeof(arr));
    printf("총 열의 갯수 : %d \n", sizeof( arr[0]) / sizeof(arr[0][0]));
    printf("총 행의 개수 : %d \n" , sizeof(arr) / sizeof(arr[0]));

    return 0;
}

// 출력
// 전체 크기 : 24 
// 총 열의 갯수 : 3
// 총 행의 개수 : 2

//만약 arr[0]이라고 선언하면 컴파일러가 자동으로 arr[0][3]이런 식으로 세팅한다.
