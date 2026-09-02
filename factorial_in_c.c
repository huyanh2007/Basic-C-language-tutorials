//Cho 1 số nguyên , tính giai thừa của số nguyên ấy

#include <stdio.h>
int main(){
    printf("Enter the number: ");
    int n;
    int ans = 1;
    scanf("%d",&n);
    for(int i =1 ; i <= n ; i++){
        ans = ans * i;
    }
    printf("The ans is: %d" , ans);
    return 0;
}