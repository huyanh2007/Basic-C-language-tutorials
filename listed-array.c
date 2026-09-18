//In số phần tử n trong mảng một chiều;

#include <stdio.h>
int main(){
    printf("Nhập số phần tử n: ");
    int n;
    scanf("%d" , &n);
    int arr[n] ;

    for(int i = 0 ; i < n ; i++){
        printf("Phần tử thứ %d : \n" , i+1); //lưu ý i được bắt đầu từ con số 0
        scanf("%d" , &arr[i] );   //Lưu giá trị vào từng ô nhớ từ a[0] đến a[n-1]

    }
    for(int i = 0 ; i < n ; i++){
        printf("mảng bạn vừa nhập là: %d \n" , arr[i]);
    }
    return 0;
}