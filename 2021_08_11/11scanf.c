#include <stdio.h>

// int main(){

//     int box;
//     printf("입력하세요.");
    
//     //&을 붙여주는 이유는 box의 값이 아닌 box의 주소 자체를 알려줘야 하기 때문이다.
//     // &는 주소를 알려주는 것이다.
//     scanf("%d", &box);
//     printf("%d 입니다.", box);

//     return 0;
// }

//scanf와 prinft는 단짝이다.
//

int main(){

    char a[10];

    //문자열의 경우에는 &가 필요없다. 그냥 쓰면 된다.
    printf("입력하세요.");
    scanf("%s", a);
    printf("%s 입니다.", a);

    return 0;
}
