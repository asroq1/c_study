#include <stdio.h>
#include <string.h>

//strelen 구현 함수
int myStrlen(char* arr){
    // - \0을 만나기 전까지 while문을 계속 돌리면 된다.
    int counter = 0;
    // 1. cp에는 arr의 첫 번째 주소가 담긴다.
    char* cp = arr;

    // 2. cp의 값이 \0이 아니라면 계속 while문이 실행되고,
    // cp의 다음 값과 카운팅을 해준다.
    while(*cp != '\0'){
        counter++;
        cp++;
    }

    // 3. \0을 만나게 된다면 while은 종료하게 되고, 최종적으로 counter을 리턴한다.
    return counter;

}


// strcat 구현 함수

char* myStrcat(char* str1 , char* str2){

    // - 첫 번째 문자열의 맨 뒤를 찾는다.
    // - 거기서부터 두 번째 문자열을 한 개씩 넣어준다.
    
    // 1. \0을 만나기 전까지 num을 카운팅 한다.
    int num = 0;
    // 1-1 while문의 조건에 따라 str1의 문자열 값은 num이 카운팅 될 떄마다 바뀌게 된다.
    // \0을 만나게 되면 num의 카운팅은 종료된다.
    while(*(str1+num) !='\0'){
        num++;
    }

    // 2. \0을 만나기 전까지 num2를 카운팅 한다.
    int num2 = 0;
    // 2-1. 위와 같이 num2도 똑같이 카운팅 한다.
    while (*(str2+ num2) != '\0'){
        //이 값은 str1문자열의 끝 str2문자열의 시작지점
        *(str1+num+num2) = *(str2 + num2);
        num2++;
    }

    *(str1+num+num2) = '\0';
    

    return str1;
    
}

//strcmp 구현 함수

int myStrcmp ( char* str1, char* str2){
    // - 두 개의 문자열이 같다면 루프를 진행.
    // - 두 개의 문자열 중 하나가 끝나지 않았다면 계속 진행해라
    // - *str1, *str2는 파라미터로 넘어온 주소의 값을 의미한다.
    while (*str1 == *str2)
    {
        //1. while문을 돌던 중 둘 중 하나라도 \0에 위치한다면 한 개는 이미 끝난
        // 것이기에 break를 사용해 while을 종료시킨다.
        if(*str1 == '\0' || *str2 == '\0'){
            break;
        }
        str1++;
        str2++;
    }

    //2. 현재 문자가 \0이 아니라면 둘이 같지 않기에 -1을 리턴해준다.
    // 둘 다 \0에 위치한다면 0을 리턴해주면 된다.
    if(*str1 == '\0' && *str2 == '\0'){
        return 0;
    }else{
        return -1;
    }
    
}
int main(){

   char arr[100] = "devicii";
   char arr2[100] = "you can whatever you want";
    // strlen 만들기   
    printf(" original strlen : %d \n", strlen(arr));
    printf("self strlen : %d \n" , myStrlen(arr));

    //strcat 만들기
    printf(" myStrcat : %s \n", myStrcat(arr, arr2));

    //strcmp 만들기
    printf("my strcmp : %d \n" , myStrcmp(arr, arr2));

    if(!myStrcmp(arr, arr2)){
        printf("same strings.\n");
    }else{
        printf("diff strings.\n");
    }
 return 0;
}