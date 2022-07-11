/* Program untuk menampilkan bentuk love dari bintang. by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
	// deklarasi dan inisialisasi variabel
	int n, brs, kol;	
	n = 6;
	printf(">> LOVE <<\n\n"); // mencetak tulisan >> LOVE <<
	// menampilkan bentuk love
	for(brs=0; brs<n; brs++) {
		for(kol=0; kol<n+1; kol++)
			if ((brs==0 && kol%3!=0) || (brs==1 && kol%3==0) || (brs-kol==2) || (brs+kol==8))
				printf("*");	// mencetak * jika kondisi diatas benar
			else	// mencetak spasi jika kondisi salah
				printf(" ");
		printf("\n");	// mencetak baris baru
	}
	return 0;
}
