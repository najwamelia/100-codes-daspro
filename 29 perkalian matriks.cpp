// Program untuk mengalikan matriks by: Najwa Amelia Q.A.
#include <stdio.h>
int main() {
	int i, j, k, brs1, kol1, brs2, kol2, jumlah = 0;
	int matriks1[10][10], matriks2[10][10], kali[10][10];
	printf("Jumlah baris matriks pertama: ");
	scanf("%d", &brs1);	// membaca input banyak baris pada matriks pertama
	printf("Jumlah kolom matriks pertama: ");
	scanf("%d", &kol1);	// membaca input banyak kol pada matriks pertama
	printf("Jumlah baris matriks kedua: ");
	scanf("%d", &brs2);	// membaca input banyak baris pada matriks kedua
	printf("Jumlah kolom matriks kedua: ");
	scanf("%d", &kol2);	// membaca input banyak kol pada matriks kedua
	// jika jumlah kolom matriks pertama tidak sama dengan kolom matriks kedua 
	if(kol1 != kol2)
		printf("Kedua matriks tidak dapat dikalikan.\n");
	// jika tidak, inputkan setiap elemen matriks ke dalam array matriks1 dan 2
	else {
		printf("Masukkan elemen matriks pertama:\n");
		for(i=0; i<brs1; i++) {
			for(j=0; j<kol1; j++) {
    			scanf("%d", &matriks1[i][j]);
			}
		}
		printf("Masukkan elemen matriks kedua:\n");
		for(i=0; i<brs2; i++) {
			for(j=0; j<kol2; j++) {
    			scanf("%d", &matriks2[i][j]);
			}
		}
		// mengeksekusi perkalian matriks1 dan matriks2 
		for(i = 0; i < brs1; i++) {
    		for(j = 0; j < kol2; j++) {
    			for(k = 0; k < brs2; k++) {
    				jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        		}
        		kali[i][j] = jumlah;
        		jumlah = 0;
      		}
    	}
    	// menampilkan hasil perkalian kedua matriks
    	printf("Hasil perkalian matriks: \n");  
    	for(i = 0; i < brs1; i++) {
      		for(j = 0; j < kol1; j++) {
    			printf("%d  ", kali[i][j]);
      		}
    		printf("\n");
    	}
	}
  	return 0;
}
