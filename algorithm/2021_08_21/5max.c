#include <stdio.h>

int main(){
	int max, pos;
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = 0;
	pos = 1;
	for (int i = 0; i < 9; i++)
	{

		if(arr[i] > max){
			pos = i + 1;
			max = arr[i];
		}
	}
	printf("%d\n", max);
	printf("%d\n", pos);


	return 0;
}
