//Viết hàm hiển thị ra các số chia hết cho 3 và ko chia hết cho 5
#include<stdio.h>

void show(){
    for(int i = 1; i <= 100 ; i++){
        if ( i % 5 != 0 && i % 3 == 0){
            printf("%d " , i);
        }
    }
}

int main() {
	show();
	return 0;
}