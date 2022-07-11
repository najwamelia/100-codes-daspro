// Program untuk menjumlahkan matriks by: Najwa Amelia Q.A.
#include <stdio.h>
int main() {
	int i, j, brs, kol;	// deklarasi variabel
	int matriks1[10][10], matriks2[10][10], jumlah[10][10];	// array untuk matriks dan hasil jumlahnya

	printf("Jumlah baris matriks: ");
	scanf("%d", &brs);	// membaca input banyak baris pada matriks
	printf("Jumlah kolom matriks: ");
	scanf("%d", &kol);	// membaca input banyak kol pada matriks
	// menginputkan setiap elemen matriks ke dalam array matriks1 dan 2
	printf("Masukkan elemen matriks pertama:\n");
	for(i=0; i<brs; i++) {
		for(j=0; j<kol; j++) {
    		scanf("%d", &matriks1[i][j]);
		}
	}
	printf("Masukkan elemen matriks kedua:\n");
	for(i=0; i<brs; i++) {
		for(j=0; j<kol; j++) {
    		scanf("%d", &matriks2[i][j]);
		}
	}
	// menjumlahkan matriks1 dan matriks2 dan menampilkan hasilnya
	printf("Penjumlahan kedua matriks:\n");
	for (i=0; i<brs; i++) {
    	for (j=0; j<kol; j++) {
    		jumlah[i][j] = matriks1[i][j] + matriks2[i][j];
			printf("%d  ", jumlah[i][j]);
    	}
    printf("\n");
	}
	return 0;
}
