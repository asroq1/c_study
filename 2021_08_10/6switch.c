#include <stdio.h>

int main(){
    int input;

    printf("1.���ֱ�");
    printf("2.�ֱ�");
    printf("3.���");

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf(" 2");
    case 3:
        printf(" 3");

    default:
    printf(" ?");
        break;
    }
    return 0;
};