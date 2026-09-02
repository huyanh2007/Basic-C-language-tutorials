// Sử dụng điều kiện bằng cấu trúc switch case 
// Cho 2 biến nhập giá trị từ bàn phím (a và b) và 1 biến ký tự c , c là các ký tự toán học 

#include <stdio.h>
int main(){
    int a,b;
    char c;
    printf("Please enter number for a , operator for c and number for b to compute");
    scanf("%d%c%d" ,&a ,&c, &b);
    switch (c){
        case '+':
            printf("a + b equal to: %d" , a+b);
            break;
        case '-':
            printf("a - b equal to: %d" , a-b);
            break;
        case '*':
            printf("a * b equal to: %d" ,a*b);
            break;
        case '/':
            printf("a / b equal to: %d" , a/b);
            break;
        case '%': 
            printf("%d" , a%b);
            break;

    }
    return 0;
}