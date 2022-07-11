// Program menghitung jumlah karakter. by: Najwa Amelia Q.A
#include <stdio.h>
#include <string.h>
int main() {
	char str[100];	// deklarasi variabel str tipe array
	int banyak;		// deklarasi variabel banyak tipe integer
	printf("Masukkan string:\n" );
	fgets(str, sizeof(str), stdin);	// menginputkan string
	// menghitung jumlah karakter string dengan fungsi strlen dan distore ke variabel banyak
	banyak = strlen(str)-1;	
	// menampilkan banyak karakter dari string
	printf("\nJumlah karakter: %d", banyak);
	return 0;
}
