// Tráo đổi giá trị của hai biến (a thành b và ngược lại) qua biến c trung gian 

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
    int c = a;
    a = b;
    b = c;
	printf("after swapping, a = %d, b = %d", a, b);
	return 0;
}