// Program untuk mencari lokasi bilangan dalam array. by: Najwa Amelia Q. A
#include <stdio.h>
int main() {
	int a[100], cari, i, n;	 // deklarasi variabel
	printf("Masukkan banyak angka: ");
	scanf("%d", &n);	// menginputkan banyak angka 
	// menginputkan bilangan ke array
	printf("Masukkan %d angka:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// menginputkan angka yang dicari lokasinya
	printf("\nAngka yang dicari lokasinya: ");
	scanf("%d", &cari);
	// mencari lokasi angka dalam array
	for (i = 0; i < n; i++) {
		if (a[i] == cari)  { // jika angka yang dicari ada, cetak:
			printf("\n==> Angka %d pada array berada di lokasi: %d\n", cari, i+1);
			break;
		}
	}
	if (i == n)  	// jika angka yang dicari tidak ada, cetak:
		printf("\n==> Angka %d Tidak teridentifikasi dalam array\n", cari);
	return 0;
}
