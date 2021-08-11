#include <stdio.h>
//얘가 문자열 라이브러리이다.
#include <string.h>

int main(){

    char arr[100] = "devicii";
    char arr2[100] = "test";

    int box;

    //strlen은 문자열의 크기를 알려주는 함수이다.
   box =  strlen(arr);
   printf("%d \n" , box);

    //stcpy
    // 두 번째 인자값을 첫 번쨰 인자값에 덮어 씌운다.
    strcpy(arr, arr2);
    printf("cpy : %s \n", arr);

    //strcmp
    //같다면 0이 return 아니라면 다른 수가 return된다.
    int box2;
    box2 = strcmp(arr, arr2);
    if(!box2){
        printf("same string \n");
    }else{
        printf("diff string \n");
    }

    //strcat
    //첫 번째 인자 뒤에 두 번째 인자의 값이 붙어서 나온다.
    strcat(arr, arr2);
    printf("%s", arr);

    //strchr
    //문자열 내에 일치하는 문자가 있는지 검사하는 함수이다.
    // 첫 번째 파라미터에는 검색할 문자열, 두 번째 파라미터에는 확인할 문자를 입력한다.
   char str[] = "BlockDMask";
   char* ptr = strchr(str, 'M'); //알파벳 M을 찾음
    if(ptr != NULL)
    {
        printf("ptf : %c, ptr %d \n", *ptr, ptr);
    }

    return 0;
}