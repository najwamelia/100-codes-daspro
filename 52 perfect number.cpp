/* Program untuk mengecek apakah suatu bilangan positif perfect number (bil sama dengan
jumlah semua pembaginya kecuali bilangan tsb). by: Najwa Amelia Q. A*/
#include<stdio.h>
int main() {
	// deklarasi dan inisialisasi variabel
	int n, i=1, sum=0;
	printf("Masukkan angka: ");
	scanf("%d", &n); // membaca input angka dari user
	// while loop ketika i kurang dari angka
	while(i<n) {
		if(n%i == 0) {
			sum=sum+i;
			i++;
		}
	}
	if(sum == n)	// jika kondisi ini benar, cetak:
		printf("\n%d adalah Perfect Number", n);
	else	// jika salah, cetak :
		printf("\n%d bukan Perfect Number", n);
	return 0;
}
