#include <stdio.h>
// @1
// int main(){
//     int i, sum = 0;
//     for ( i = 0; i < 20; i++){
//         sum = sum+ i;
//     }
//     printf("���� %d �Դϴ� \n", sum);
//     return 0;
// };

// @2

    // int main(){
    //     int i;
    //     int sub, score;
    //     double sum = 0;

    //     printf("�� ���� �Է��Ͻðھ�� ?");
    //     scanf("%d", &sub);

    //     printf("������ �Է����ּ���. \n");
    //     for( i = 0;  i< sub; i++){
    //         printf("���� %d :", i+1);
    //         scanf("%d", &score);
    //         sum = sum + score;
    //     }

    //     printf("������ %.2f \n", sum / sub);

    //     return 0;
    // };


    // @3

    // int main(){
    //     int ans;
    //     printf("���ڸ� ���纸����. \n");

    //     for(;;){
    // scanf("%d", &ans);
    // if(ans == 3){
    //     printf("�����̳׿�.\n");
    //     break;
    // }else{
    //     printf("Ʋ���̾��. \n");
    // }
    //     };
    //     return 0;
    // };

    int main(){
        int i, j = 0;
        int n;
        char text = '*';
        printf("�Է��ϼ���.");
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