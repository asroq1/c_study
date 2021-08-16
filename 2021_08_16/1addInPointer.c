#include <stdio.h>

int main(){

    int a;
    int* pa;
    pa = &a;

    char b;
    double c;
    
    char* pc = &b;
    double* pb = &c; 
    
    printf("pa의 값 : %p \n", pa);
    printf(" (pa + 1)의 값  : %p \n", pa + 1);
    printf("pc의 값 : %p \n", pc);
    printf(" (pc + 1)의 값  : %p \n", pc + 1);
    printf("pb의 값 : %p \n", pb);
    printf("(pc + 1)의 값  : %p \n", pb + 1);


    printf("pa의 값 : %p \n", pa);
    printf(" (pa - 1)의 값  : %p \n", pa - 1);
    printf("pc의 값 : %p \n", pc);
    printf(" (pc - 1)의 값  : %p \n", pc - 1);
    printf("pb의 값 : %p \n", pb);
    printf("(pc - 1)의 값  : %p \n", pb - 1);

    return 0;
}

// 출력
// pa의 값 : 000000000061FE04 
//  (pa + 1)의 값  : 000000000061FE08
// pc의 값 : 000000000061FE03
//  (pc + 1)의 값  : 000000000061FE04
// pb의 값 : 000000000061FDF8
// (pc + 1)의 값  : 000000000061FE00

// pa의 값 : 000000000061FE04 
//  (pa + 1)의 값  : 000000000061FE08
// pc의 값 : 000000000061FE03
//  (pc + 1)의 값  : 000000000061FE04
// pb의 값 : 000000000061FDF8
// (pc + 1)의 값  : 000000000061FE00
// pa의 값 : 000000000061FE04
//  (pa - 1)의 값  : 000000000061FE00
// pc의 값 : 000000000061FE03
//  (pc - 1)의 값  : 000000000061FE02
// pb의 값 : 000000000061FDF8
// (pc - 1)의 값  : 000000000061FDF0

//자료형의 크기만큼 더해진다. 
// 캐릭터는 1byte, dobule 8byte, int 4bype 

