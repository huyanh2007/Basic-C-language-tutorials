//Cấp phát bộ nhớ động trong C với hàm malloc
//Dùng để cấp phát một khối bộ nhớ có kích thước chỉ định (tính bằng byte). Không xóa dữ liệu cũ (chứa giá trị rác)
//Cú pháp cơ bản : ptr = (cast_type*) malloc(size);

//Khai báo con trỏ làm tay vịn để quản lý vùng nhớ 
//Cấp phát bằng malloc()
//Kiểm tra xem hệ điều hành có cấp phát thành công không (nếu hết RAM, con trỏ sẽ nhận giá trị NULL).
//Giải phóng bộ nhớ bằng free sau khi dùng xong.


#include <stdio.h>
#include <stdlib.h> // Bắt buộc phải có để dùng malloc, calloc, free

int main() {
    int n = 5;
    int *arr;

    // 1 & 2. Khai báo và Cấp phát bộ nhớ động cho mảng gồm 5 số nguyên
    // sizeof(int) là 4 byte -> tổng cộng xin 5 * 4 = 20 byte
    arr = (int*) malloc(n * sizeof(int)); 

    // 3. Kiểm tra an toàn trước khi dùng
    if (arr == NULL) {
        printf("Khong du bo nho de cap phat!\n");
        return 1; // Thoát chương trình với mã lỗi
    }

    // Nhập và xuất dữ liệu như một mảng bình thường
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10; // Gán 10, 20, 30, 40, 50
    }

    printf("Cac phan tu trong mang dong: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 4. Giải phóng bộ nhớ ngay khi không còn dùng tới
    free(arr); 
    arr = NULL; // Thói quen tốt: đưa về NULL để tránh dùng nhầm con trỏ rác

    return 0;
}
