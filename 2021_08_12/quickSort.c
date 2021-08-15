// #include <stdio.h>

// int main()
// {  
// 	int arr[6] = {3, 7, 2, 5, 1, 4};
// 	int length = sizeof(arr)/sizeof(int);
	
// 	printf("정렬 전 : ");
// 	for(int i=0; i<length; i++)
// 	{
// 		printf("%d ", arr[i]); 
// 	}
	
// 	int j;
// 	int temp;

//     //1. 삽입정렬은 인덱스 1부터 비교한다.
// 	for(int i=1; i<length; i++)
// 	{
// 		temp = arr[i];

// 		j = i-1; 0
// 		while(0<=j && temp<arr[j])
// 		{
// 			arr[j+1] = arr[j];
// 			j--;
// 		}		
// 		arr[j+1] = temp;
// 	}

// 	printf("\n정렬 후 : ");
// 	for(int i=0; i<length; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }


#include <stdio.h>

int main (void){
    int i, j , temp;
    int arr[10] = { 3, 1 ,2 ,4 ,5 , 7, 6, 8, 10 ,9};
    int length = sizeof(arr)/ sizeof(int); 
    
    for(int i = 0; i < length; i++){
        //j에다가 i를 넣어주는 이유는 현재 정렬할 위치를 알려준다.
        j = i;
        
        // while문에서 arr[j]가 arr[j+1]보다 크다면,
        // temp를 활용해 arr[j]와 arr[j+1]의 값을 반전한다.
        while (arr[j] >  arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j + 1] = temp;
            j--;
        }

    }   
    for(int i = 0; i < length; i++){
        printf("%d \n", arr[i]);
    }

    return 0;
}