#include <stdio.h>

//소수 찾기 프로그램

// int main(){
//     int guess = 5;
//     int prime[1000];

//     int index = 1;
//     int i;
//     int ok;
//     prime[0] = 2;
//     prime [1] = 3;

//     for(;;){
//         ok = 0;
//         for(i = 0; i <= index; i++){
//             if(guess & prime[i] != 0){
//                 ok++;
//             }else{
//                 break;
//             }
//             if( ok == (index + 1)){
//                 index++;
//                 prime[index] = guess;
//                 printf("소수 : %d \n", prime[index]);
//                 if(index == 999){
//                     break;
//                 } 
             
//             }
//                guess += 2;
//         }
//         return 0;   
//     }
// }

int main(){
    int score[3][2];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j <= i; j++){
            if(j == 0){
                printf("%d 번째 학생의 국어 점수 :", i + 1);
                scanf("%d", &score[i][j]);
            }else if( j == 1){
                printf("%d 번째 학생의 수학 점수 : " , i + 1);
                scanf("%d", &score[i][j]);
            }
        }
    }

    for( i = 0; i < 3; i++){
        printf(" %d 번째 학생의 국어 점수  : %d 수학점수 : %d  \n" , i + 1 , score[i][0], score[i][1]);
    }

    return 0;
}