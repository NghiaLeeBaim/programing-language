#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	int a, b;
	printf("---------------- Bài 1: Nhập 2 số nguyên và in ra tổng, hiệu, tích, thương ----------------\n\n");


	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);

	printf("Tong: %d \n", a + b);
	printf("Hieu: %d \n", a - b);
	printf("Tich: %d \n", a * b);
	printf("Thuong: %d", a / b);

	return 0;
}

// ----------------------------------------------------------------------------------------------------------

int main() {
	int a;
	printf("---------------- Bài 2: Nhập 1 số nguyên kiểm tra số chẵn hay lẻ ----------------\n\n");

	printf("Nhap 1 so nguyen: ");
	scanf("%d", &a);

	if (a%2==0) {
		printf("So nay la so chan\n");
	}
	else
	{
		printf("So nay la so le\n");
	}

	return 0;
}

// ----------------------------------------------------------------------------------------------------------

int main() {
	int n;
	printf("---------------- Bài 3: Tính giai thừa n (dùng vòng lặp) ----------------\n\n");

	// Giai thừa (ký hiệu: n!) là phép toán lấy tất cả các số nguyên dương từ 1 đến n, rồi nhân lại với nhau.
	// VD: n! = 1 x 2 x 3... x n

	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);
	int kq=1;
	for (int i = 1; i <= n; i++) {
		kq = kq * i;
	}

	printf("%d! = %d", n, kq);
	

	return 0;
}

// ----------------------------------------------------------------------------------------------------------

int main() {
	int n;
	printf("---------------- Bài 4: Tính Fibonacci n (không dùng mảng) ----------------\n\n");

	// Dãy Fibonacci là 1 dãy số tiếp theo là tổng 2 số trước cộng lại
	// Vd: n=5; thì dãy fibonacy là : 0, 1, 1, 2, 3

	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);
	
	long f0 = 0;
	long f1 = 1;
	
	if (n >= 1) printf("%ld ", f0);
	if (n >= 2) printf("%ld ", f1);

	for (int i = 3; i <= n; i++) {
		long fn = f0 + f1;
		printf("%ld ",fn);
		f0 = f1;
		f1 = fn;
	}
	
	return 0;
}
