// Vòng lặp for ( kiểm tra điều kiện xong mới lặp)
//Hiển thị các số từ a đến b
//Tính tổng các số từ a đến b
#include <stdio.h>

int main(){
    printf("Please enter value for a and b respectively: ");
    int a , b;
    int sum = 0 ;
    scanf("%d%d",  &a, &b);
    printf("Your list numbers are: \n");
    for(int i = a ; i <= b ; i++){
        printf("%d\n" , i); //Liệt kê các số từ a đến b 
        sum = sum +i; // Tính tổng các số từ a đến b 
    }
    printf("The sum from a to b is: %d" , sum);
    return 0;
}