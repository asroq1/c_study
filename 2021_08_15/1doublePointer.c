#include <stdio.h>

int main(){
    
    int num = 10;
    int* ptr;
    int** pptr;

    ptr = &num;
    pptr = &ptr;

    printf("value = num : %d , *ptr : %d, **ptr : %d \n", num, *ptr, **pptr);
    printf("number adress = num : %d , *ptr : %d, **ptr : %d \n", &num, ptr, *pptr);
    printf("ptr adress = *ptr : %d, **ptr : %d \n", &ptr, pptr);
    return 0;
}

//이중 포인터.

// 이중 포인터는 포인터의 주소값을 담는 변수이다. 
// 포인터의 포인터다.

// 현재 pptr이 이중포인터이다.

// ptr에는 num의 주소를 대입하고, pptr에는 ptr의 주소를 대입했다.
// pptr은 ptr이 가리키는 변수의 값을 사용한다.

// 그래서 첫 번째 결과물 출력의 값이 다 동일하게 나온다.
// 두 번째 출력의 값이 동일한 이유도 위와 같다.
// 세 번째 출력이 같은 이유는 pptr은 결국 ptr을 가르키는 포인터로 ptr의 주소가 들어있다.


