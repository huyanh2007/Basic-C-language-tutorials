// Mảng trong C
// Nhập 10 số nguyên và hiển thị 10 số nguyên và tổng của 10 số này 

#include <stdio.h> 
int main(){
    int arr[9];
    int sum = 0;
    for(int i = 0 ; i <= 9; i++){
        printf("Please enter the %d element of array: ", i);
        scanf("%d" , &arr[i]);
        sum = sum + arr[i];
    }
    printf("The ans is: %d" , sum);
    return 0;
}