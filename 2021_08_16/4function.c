// #include <stdio.h>

// int printHello(){
//     printf("Hello \n");
//     return 0;
// }
// int main(){ 
//     printf("call func");
//     printHello();
//     return 0;
// }

// #include <stdio.h>

// int returnThousand(){
  
//     return 1000;
// }
// int main(){ 
//     int number = returnThousand();
//     printf("number = %d" , number);
    
//     return 0;
// }

// return�Լ��� return���� 1000�� number�� �Ҵ��ߴ�.
// �Լ��� ���ǰ� ���� ���ϰ��� ��ȯ�Ѵ�.

// #include <stdio.h>
// int slave(int master_money) {
//   master_money += 10000;
//   return master_money;
// }
// int main() {
//   int my_money = 100000;
//   printf("2021.08.16 ��� : $%d \n", slave(my_money));
//   printf("my_money : %d", my_money);

//   return 0;
// }

//���
// 2021.08.16 ��� : $110000
// my_money : 100000 

// slave�Լ��� �Ķ���Ϳ� ���� ���� my_money�� �Ҵ��ϱ⿡
// slave�Լ��� ����ǰ� master_money�� ��ȯ�ȴ�.

// �׷��� money�� ���� 10000�� ���´�. �� ������ slave�Լ��� �̿��ص�
// main�� ���������� my_money�� ������ ������ ���� �ʱ� �����̴�. 
// �̰��� �ذ��Ϸ��� ����Ʈ�� Ȱ���ϸ� �ȴ�.

#include <stdio.h>

// int main(){
   
//     int changeValue(int *value){

//         printf("value�� ��: %p \n", value);
//         printf("value�� �� : %d \n", *value);

//         *value = 3;
//         printf("�Լ� ����\n");
//     return 0;
//     }
//    int i = 0;
//    printf("i�� �ּ� : %p \n" , &i);
//    printf("ȣ�� ���� i�� : %d \n" , i);
//    changeValue(&i);
//    printf("ȣ�� ���� i�� : %d \n" , i);

//    return 0;
// }

// ���
// i�� �ּ� : 000000000061FE14 
// ȣ�� ���� i�� : 0
// value�� ��: 000000000061FE14
// value�� �� : 0
// �Լ� ����
// ȣ�� ���� i�� : 3


// int main(){
//     int a = 10;
//     int b = 20;

//     printf("befor a = %d, b = %d \n" , a , b);
//     swap(&a, &b);
//     printf("after a = %d , b = %d \n", a , b);
//     return 0;
// }

// int swap(int *number ,int *number2){ 
//     int temp;
//     temp = 0;
//      temp = *number;
//      *number = *number2;
//      *number2 = temp;
//     return 0;
// }
//  swap�� ȣ���� �� a, b������ �ּҰ��� �����ش�.
// swap�� �� ���� �Ķ���ʹ� ������ ���� �޴´�.
// �׷��⿡ �����͸� ���� main�� ���������� ������ �� �ִ� ���̴�.

// int addNumber(int *parr){
//     int i;
//     for(i = 0; i < 3; i++){
//         parr[i]++;
//     }

//     return 0;
// }
// int main(){
//     int arr[3];
//     int i;

//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     addNumber(arr);

//     printf("�迭�� �� ���� : %d, %d ,%d ", arr[0],arr[1],arr[2]);
    
//      return 0;
// }

// addNumber()�� ȣ���� �� arr�� �׳� �־ �Ǵ� ������ �迭�� �ּ��� ���۰��� ������ �ֱ� �����̴�.
// ���� 


// int maxNumber(int *parr){
//     int i;
//     int max = parr[0];

//     for (int i = 0; i < 10; i++)
//     {
//         if(parr[i] > max){
//             max = parr[i];
//         }
//     }
//     return max;
// }
// int main(){
//     int arr[10];
//     int i;

//     for (int i = 0; i < 10; i++)
//     {
//        scanf("%d", &arr[i]);
//     }

//     printf("�迭 �� ���� ū �� : %d \n", maxNumber(arr));
    
// }

//���� ū ���� max��� ������ ��� �����Ѵ�.
// �迭�� ù ��° ���� max��� ������ �� �ݺ������� max���� �� ū ���� �ִٸ�,
// �ش� ���� max�� �ٲ��ش�.

int pswap(int **ppa, int **ppb){
    int *temp = *ppa;

    printf("ppa�� ����Ű�� ���� �ּҰ� : %p \n", ppa);
    printf("ppb�� ����Ű�� ���� �ּҰ� : %p \n", ppb);

    *ppa = *ppb;
    *ppb = temp;
    return 0;
}

int main(){
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;
    
    pswap(&pa, &pb);

    return 0;
}