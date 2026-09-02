// Cấu trúc rẽ nhánh if else trong C (Kiểm tra điều kiện đúng sai)
//Tìm số lớn nhất trong 3 chữ số 
//Trong điều kiện if else , có thể thêm điều kiện và bằng "&&" , thêm điều kiện hoặc bằng "||"

#include<stdio.h>

int main() {
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a >= b, a >= c){
        printf("The maximum value is: %d\n",a);
    }
    else if(b >= a , b >= c){
        printf("The maximum value is: %d\n",b);
    }
    else if (c >= a , c >= b){
        printf("The maximum value is: %d\n",c);
    }else{
        printf("Error value");
    }
	return 0;
}