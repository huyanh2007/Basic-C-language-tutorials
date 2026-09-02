//Đếm độ dài của xâu ra màn hình 
//Dùng thư viện string.h

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    gets(s);
    int len = 0;
    while(s[len] != '\0'){ // ký tự '\0' là kết thúc độ dài ký tự 
        len++;
    }
    printf("%d" , len);
}