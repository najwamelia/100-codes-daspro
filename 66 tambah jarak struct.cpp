/* Program untuk menambahkan dua jarak dalam feet&inci 
menggunakan struct. by: Najwa Amelia Q. A.*/
#include <stdio.h>
struct jarak {	// deklarasi struct "jarak"
	int feet;
	float inci;
} j1, j2, jumlah; // variabel
	
int main() {
	// menginputkan jarak pertama
	printf("Masukkan jarak pertama (feet): ");
	scanf("%d", &j1.feet);
	printf("Masukkan jarak pertama (inci): ");
	scanf("%f", &j1.inci);
	
	// menginputkan jarak kedua
	printf("\nMasukkan jarak kedua (feet): ");
	scanf("%d", &j2.feet);
	printf("Masukkan jarak kedua (inci): ");
	scanf("%f", &j2.inci);
	
	// menjumlahkan kedua jarak
	jumlah.feet = j1.feet + j2.feet;
	jumlah.inci = j1.inci + j2.inci;
	
	// konversikan inci ke feet jika lebih besar dari 12
	while (jumlah.inci >= 12.0) {
		jumlah.inci = jumlah.inci - 12.0;
		++jumlah.feet;
	}
	printf("\nJumlah dari jarak = %d\' %.1f\"", jumlah.feet, jumlah.inci);
	return 0;
}
