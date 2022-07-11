// Program untuk menampilkan tabel perkalian
#include <stdio.h>
int main() {
	int i, j, tabel;	// deklarasi variabel
	printf("Masukkan bilangan: ");
	scanf("%d", &tabel); // input bilangan yang akan dicari tabel perkaliannya
	int max = tabel;
	for (i = 1; i <= tabel; i++) { // outer loop
		for (j = 0; j <= max; j++) { // inner loop
	    	printf("%d x %d = %d \n", i, j, i*j); }
	    printf("\n");
	}
}
