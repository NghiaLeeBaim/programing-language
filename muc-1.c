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
