//Chuyển ký tự in thường thành in hoa và ngược lại 
//Độ dài để chuyển từ in thường sang in hoa và ngược lại theo ASCII là 32 đơn vị 

#include<stdio.h>
#include<string.h>

int main() {
	char s[1000];
    gets(s);
    //In thường sang in hoa
    for (int i = 0 ; i < strlen(s); i ++){
        if(s[i]>= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    //In hoa sang in thường 
    for(int i = 0 ; i < strlen(s); i ++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    printf("%s" ,s);
	return 0;
}