#include <stdio.h>

int main()
{
    for(int i=0; i < 5; i++){
        for(int j = 0; j < i +2; j+=2){
            printf("Hello");
        }
        printf("\n");
    }

	return 0;
}
