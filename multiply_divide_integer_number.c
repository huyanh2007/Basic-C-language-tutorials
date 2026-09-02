// Nhân và chia hai số nguyên
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d" , &a , &b);
    printf("Multipy of %d and %d is: %d \n", a , b , a * b); // Nhân
    printf("%d divide by %d is: %d \n" , a , b ,a/b); //Chia
    printf("%d", a%b); //Chia lấy phần dư
    return 0;
}