#include <stdio.h>

int main(){
	int result;
	scanf("%d", &result);

	if(result >= 90 && result <= 100){
		printf("A");
	}else if(result >= 80 && result <= 89){
		printf("B");
	}else if(result >= 70 && result <= 79){
		printf("C");
	}else if(result >= 60 && result <= 69){
		printf("D");
	}else{
		printf("F");
	}
	return 0;
}
