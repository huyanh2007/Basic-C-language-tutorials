//Tính luỹ thừa (a mũ b)
// Vòng lặp while - do (Lặp trước , kiểm tra điều kiện sau)
#include <stdio.h>
int main(){
    printf("Enter two number a and b: ");
    int a,b;
    int ans = 1;
    scanf("%d%d" , &a , &b);
    while(b > 0){
        ans = ans * a ;
        b--;
    }
    printf("The ans is: %d" , ans );
    return 0;
}