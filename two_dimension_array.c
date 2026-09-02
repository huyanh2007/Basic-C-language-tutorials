// Mảng 2 chiều trong C 
//Cho một mảng 2 chiều các số nguyên n hàng m cột arr
//Tính tổng các phần tử trong mảng arr
// Đầu vào [[5,7,3],[1,2,4]] ; đầu ra 22
#include<stdio.h>

int main() {
    int n , m;
    int sum = 0;
    scanf("%d%d", &n , &m);

    int arr[100][100];
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < m ; j++ ){
            scanf("%d" , &arr[i][j]);
        }
    }

    for(int i = 0 ; i < n ; i++){
        for (int j = 0; j < m ; j++){
            sum += arr[i][j];
        }
    }
    printf("%d" , sum);
    return 0;
}