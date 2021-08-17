#include <stdio.h>

int bubbleSort(int *arr){
    // int size = sizeof() / sizeof(int);
    int temp;

    for(int i = 0; i < 5;i++)
    for (int j = 0; j <= i; j++)
    {
        if(arr[i] >  arr[j] ){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
    }
    }
    
    
    return *arr;
}
int main(){
    int arr[] = {111, 2, 4 , 8, 5};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        printf("Before Sorting : %d \n", arr[i]);
    }
    
    bubbleSort(arr);
    for (int i = 0; i < size; i++)
    {
    printf("After Sorting : %d \n", arr[i]);
    }
   
    bubbleSort(arr);

}