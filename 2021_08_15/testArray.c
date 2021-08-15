#include <stdio.h>


//더블 배열 예제
int main(){

    int score[3][2];
    int i,j;
    int length = 3;

    for(int i = 0; i < 3; i++){
       
        for(int j = 0; j < 2; j++){
            
            if(j == 0){
               printf("%d번째 학생의 국어 성적을 입력하세요. \n", i+1);
                scanf("%d", &score[i][j]);
               
            }else if(j == 1){
                printf("%d번째 학생의 수학 성적을 입력하세요. \n", i+1);
                scanf("%d", &score[i][j]);
            }
        }
    } 


    for(int i = 0; i < 2; i++){
        printf("%d번째 학생의 국어 성적은: %d 입니다. 수학 성적은: %d 입니다. \n", i + 1, score[i][0] , score[i][1]);
    }

    return 0;
}


//선언 방법

int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
// 이렇게도 가능하고

int arr[2][3] = {1, 2, ,3 ,4 ,5 ,6};
// 이렇게 선언도 가능하다.

int arr[] = {1, 2 ,3, 4};
// 생소하지만 이렇게도 가능하다.

int arr[4]= { 1, 2, 3, 4};

// 이렇게 배열의 크기를 입력하지 않아도 컴파일러가 자동으로 사이즈를 체킹하고,
// 숫자를 넣어준다.

 int arr[]; 

//but
//  이렇게 선언하는 것은 불가능하다.
// 이유는 컴파일러가 어떤 크기의 배열을 정의하고 싶은지 모르기 때문.

int arr[][2] = {{1, 2,} , {3, 4} , {5, 6}, {7}};
// 이 배열은 성공적으로 컴파일 된다.
// 이유는 처음 선언시 arr[][2]라고 선언했기에 원소가 2인 1차원 배열이 생긴다.
// 마지막 배열의 원소는 0이 들어가있다.

//   arr[3][0] == 7 
    //  arr[3][1]  == 0


int arr[2][0] = {{4, 5, 6}, { 7, 8 ,9}};
// 이 선언은 놀랍게도 컴파일이 될 수 없다.
// C의 경우에는 맨 앞의 크기를 제외한 나머지 크기를 정확히 지정해줘야 한다고 한다.


// 상단의 문제를 풀다가 for문에서 입력이 제대로 들어가지 않았다.
// 찾아보니 이유는 scanf()에서 &를 붙여주지 않은 것.

// &(ampersand)는 주소를 의미한다.
// scanf()함수의 실행원리를 알아야한다.
// 1. 값을 입력받음.
// 2. 그 값을 레지스터에 임시로 저장. *레지스터는 임시의 공간
// 3. 해당 변수의 주소로 가서 그 주소가 가르키는 메모리에 현재 레지스터에 입력된 값을 저장.
// 4. 레지스터에 있던 값은 다시 지운다.

// 상단의 이유로 &를 사용해 주소값을 이용해줘야 한다.

// ex
 int a;
 char b[20];
 scanf("%d", &a); //&를 사용해야한다.
 scanf("%s", b); //문자열의 경우에는 문자열 자체가 주소라서 안써도 된다.


// ex2

#include<stdio.h> //call by value

void change(int );

int main() {
    int a = 5;
    printf("before change [a] : %d",a);
    change(a);
    printf("after change [a] : %d",a);
}

void change(int a){
    a = 10;
}

//결과 
//  before change [a] : 5
//  after change [a] : 5

#include<stdio.h> //call by reference

void change(int *);

int main() {
   int a = 5;
   printf("before change [a] : %d\n", a);
   change(&a);
   printf("after change [a] : %d\n", a);
   return 0;
}

void change(int *a) {
   *a = 10;
}

//결과 
// before change [a] : 5
//  after change [a] : 10


