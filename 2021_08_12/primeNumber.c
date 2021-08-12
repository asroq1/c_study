
#include <stdio.h>

int main(){
    int num;
    printf("입력하세요. \n");
    //1.입력값을 받는다.
    scanf("%d" , &num);
    
    // 2. 1은 소수가 아니다. 그래서 첫 번째 for은 i를 2로 세팅한다.
     for(int i = 2; i < num; i++){
        // 2-1. counter변수의 역할은 나누어지는 횟수를 구하기 위함이다.
         int counter = 0;

        // 3.  두 번째 for은 i의 값을 1부터 i의 값까지 다 나누는 for이다.
         for(int j = 1; j <= i; j++){
            // 3-1.  i 나누기 j의 나머지가 0이라는 말은 즉 나누어지는 수라는 것을 의미한다. 그래서 counter을 증가시킨다.
             if( i % j == 0){
                 counter++;
             }
         }
        //  4. 두 번째 for이 끝나고 counter가 2라면 즉 나누어 진 값이 1과 자기 자신뿐이라는 의미로 i는 소수임을 의미한다.
         if(counter == 2){
             printf("소수는 : %d \n", i);
         }

         // 5. 다시 첫 번째 for이 시작되고, counter은 0으로 초기화 된다.
 }
    return 0;
}
