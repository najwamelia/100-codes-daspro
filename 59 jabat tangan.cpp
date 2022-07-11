/* Program untuk menentukan jumlah maksimum jabat tangan. by: Najwa Amelia Q.A*/
#include<stdio.h>  
int main() {
	// deklarasi variabel
	int n, total;
	printf("Masukkan banyak orang: ");
	// menginputkan banyak orang ke variabel n
	scanf("%d", &n);
	// menghitung jumlah maksimum berjabat tangan
	total = n * (n-1) / 2;
	printf("\nMaksimum berjabat tangan antar orang ==> %d\n", total);
	return 0;
}
