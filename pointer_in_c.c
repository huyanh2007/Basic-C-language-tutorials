//Con trỏ trong lập trình C 
//Cách khai báo (Nhớ đến 2 toán tử):
// & (toán tử lấy địa chỉ): Dùng để tìm xem biến đó nằm ở ô nhớ nào
// * (Toán tử giải tham chiếu/lấy giá trị) :Dùng để xem hoặc sửa đổi nội dung bên trong ô nhớ mà con trỏ đang trỏ tới 


//Khai báo con trỏ trong mảng
#include <stdio.h>
int main(){
    int arr[3] ={10 , 20 , 30}; //Thiết lập mảng
    int *ptr = arr; //Thiết lập con trỏ (arr vốn dĩ là địa chỉ nên ko cần sử dụng toán tử &)
    for(int i = 0 ; i < 3 ; i++){
        printf("Phan tu %d: %d\n" ,i , *(ptr+i));
    }
    
    return 0;
}