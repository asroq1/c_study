#include <stdio.h>


//     // 예제1

// int main(){ 
//     char null1 = '\0'; 
//     char null2 = 0; 
//     char null3 = (char)NULL; 

//     char notNull = '0';

//     printf("NULL의 정수값(아스키) : %d, %d , %d \n", null1, null2, null3);
//     printf("'0'의 아스키값 : %d \n", notNull);

// }

    // 예제2

    // int main(){
    //     char sentence1[4] = {'p', 's', 'i', '\0'};
    //     char sentence2[4] = {'p', 's', 'i', 0};
    //     char sentence3[4] = {'p' , 's', 'i', (char)NULL}; 
    //     char sentence4[4] = { "psi"};

    //     printf("sen 1: %s \n", sentence1);
    //     printf("sen 2: %s \n", sentence2);
    //     printf("sen 3: %s \n", sentence3);
    //     printf("sen 4: %s \n", sentence4);


    // }

    // // 예제3
    // int main(){
    //     char word[30] = {"long sentence"};
    //     char *str = word;

    //     printf("%s \n", str);

    //     return 0;
    // }

    // 예제4

    // int main(){
    //     char word[] = {"long sentence"}; 

    //     printf("조작 이전 : %s \n", word);

    //     word[0] = 'a';
    //     word[1] = 'c';
    //     word[2] = 'b';
    //     word[3] = 'd';
        

    //     printf("조작 이후 : %s \n", word);

    //     return 0;

    // }

//     // 예제5 

//    int  strLength(char *str);

//     int main(){
//         char str[] = ( " what is your name?");

//         printf("문자열의 길이 : %d \n", str);
//     }

//     int strLength(char *str){
//         int i = 0;
//         while(str[i]){
//             i++;
//         }

//         return i;

//     }

    int main(){
        char words[50];

        printf("30자 이내의 문자열을 입력해주세요 : ");
        scanf("%s", words);
        
        printf( " 문자열 : %s \n", words);

        return 0;
    }