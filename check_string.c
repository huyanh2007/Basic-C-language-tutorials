//Kiểm tra xem 2 xâu có giống nhau ko 
//Sử dụng hàm strcmp (trả về 0 nếu 2 xâu giống nhau và trả về 1 số khác nếu 2 xâu khác nhau )
#include <stdio.h>
#include <string.h>
int main(){
    char c[1000];
    char n[1000];
    gets(c);
    gets(n);
    if(strcmp(c,n) == 0){
        printf("two people having the same name");
    }else{
        printf("two people don't have the same name");
    }
    return 0;
}