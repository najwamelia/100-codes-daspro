// Program untuk mentranspose matriks by: Najwa Amelia Q.A.
#include <stdio.h>
int main() {
	int i, j, brs, kol;	// deklarasi variabel
	int matriks[10][10];	// array untuk elemen matriks
	int transpose[10][10];	// array untuk elemen transpose matriks

	printf("Jumlah baris matriks: ");
	scanf("%d", &brs);	// membaca input banyak baris pada matriks
	printf("Jumlah kolom matriks: ");
	scanf("%d", &kol);	// membaca input banyak kol pada matriks
	// menginputkan setiap elemen matriks ke dalam array matriks
	printf("Masukkan elemen matriks:\n");
	for(i=0; i<brs; i++) {
		for(j=0; j<kol; j++) {
    		scanf("%d", &matriks[i][j]);
		}
	}
	// for untuk mentranspose matriks
	for (i=0; i<brs; i++) {
		for(j=0; j<kol; j++) {
    		transpose[j][i] = matriks[i][j];
    	}
	}
	// menampilkan hasil transpose matriks
	printf("\nTranspose matriks:\n");
	for (i=0; i<kol; i++) {
		for(j=0; j<brs; j++) {
    		printf("%d  ", transpose[i][j]);
	}
    printf("\n");
	}
	return 0;
}
