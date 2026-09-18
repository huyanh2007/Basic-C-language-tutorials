// Mảng 2 chiều: khai báo <kiểu dữ liệu> <tên mảng>[<số hàng>][<số cột>]
//Mảng 3 chiều : khai báo <kiểu dữ liệu> <tên mảng>[<dài-hàng>][<rộng-cột>][<cao-chiều thứ 3>]
//Cho sẵn 1 mảng 2 chiều , hãy liệt kê các phần tử của mảng theo dạng ma trận 
#include <stdio.h>
int main(){
    int a[2][3] ={{1,2,3} ,{4,5,6}};
    for(int j = 0 ; j < 2;j++ ){
        printf("[");
        for(int k = 0 ; k <3 ; k++){
            printf(" %d " , a[j][k]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}