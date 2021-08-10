#include <stdio.h>
// @1
// int main(){
//     int i, sum = 0;
//     for ( i = 0; i < 20; i++){
//         sum = sum+ i;
//     }
//     printf("합은 %d 입니다 \n", sum);
//     return 0;
// };

// @2

    // int main(){
    //     int i;
    //     int sub, score;
    //     double sum = 0;

    //     printf("몇 개나 입력하시겠어요 ?");
    //     scanf("%d", &sub);

    //     printf("점수를 입력해주세요. \n");
    //     for( i = 0;  i< sub; i++){
    //         printf("과목 %d :", i+1);
    //         scanf("%d", &score);
    //         sum = sum + score;
    //     }

    //     printf("총합은 %.2f \n", sum / sub);

    //     return 0;
    // };


    // @3

    // int main(){
    //     int ans;
    //     printf("숫자를 맞춰보세요. \n");

    //     for(;;){
    // scanf("%d", &ans);
    // if(ans == 3){
    //     printf("맞히셨네요.\n");
    //     break;
    // }else{
    //     printf("틀리셨어요. \n");
    // }
    //     };
    //     return 0;
    // };

    int main(){
        int i, j = 0;
        int n;
        char text = '*';
        printf("입력하세요.");
        scanf("%d", &n);
        for(int i = 0; i < n; i++ ){
          for(int j = 0; j <= i; j++){
              printf(" ");
              printf("*");
          }
          printf("\n");
        }
    return 0;

    };