#include <stdio.h>
// @1
// int main(){
//     char a;
//     a = 'A';
//     printf("a�� ���� ��� �մ� ���ڴ� ? �� : %d, ���ڴ� : %c \n", a ,a);
//     return 0;
// };
// @1
//A�� a�� ���� ���� �ٸ��� ���´�. ������ �ƽ�Ű �ڵ尪�� ������ ������ ���� �빮�ڿ�
// �ҹ����� ���� �ٸ���.


// @2

// int main(){
//     double cel;
//     printf("���� �µ��� ȭ���� �ٲٴ� ���α׷��Դϴ�. \n");
//     printf("���� �µ��� �Է��ϼ���. \n");
//     scanf("%lf", &cel);
//     printf("���� %f���� ȭ�� %f �� �Դϴ�. \n", cel, 9 * cel /5 + 32 );
//     return 0; 
// };

// @2
// scanf�� �Է¹޴� �Լ��̴�.
// %lf�� double�� �Է¹޴� ����̴�.
// ���� ���� printf������ ù ��° %f�� cel�� ���� ����,
// �� ��° %f�� ���� ���� �־��ش�.

//@3
int main(){
    char ch; //����
    
    short sh; //���� 
    int i;
    long lo;

    float fl; //�Ǽ�
    double du;

    printf("char ���� �Է� :");
    scanf("%c", &ch);
    
    printf("short ���� �Է� :");
    scanf("%hd", &sh);
    printf("int ���� �Է� :");
    scanf("%d", &i);
    printf("long ���� �Է� :");
    scanf("%ld", &lo);
    
    printf("float ���� �Է� :");
    scanf("%f", &fl);
    printf("double ���� �Է� :");
    scanf("%lf", &du);
    
    printf("char : %c, short : %d, int : %d \n", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
  
    
    return 0;
};

// @3
// char�� 1����Ʈ ¥���� �ִ�� �����ϴµ� �ѱ��� 2����Ʈ�� �ѱ��� �Է��Ѵٸ� ������ ����.
// ���� �޸� �̻� �����͸� ����־� �߻��ϴ� ������ ���� �����÷ο��� �����Ѵ�.
// ���ȿ� �ſ� ����ϴ�.

