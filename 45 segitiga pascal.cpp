/* Program menampilkan segitiga pascal dengan perulangan for
by: Najwa Amelia Q. A.*/
#include <stdio.h>
int main() {
    int kolom, baris, tinggi;	// deklarasi variabel
    printf("Masukkan tinggi segitiga pascal: ");
	scanf("%d", &tinggi);	// membaca input tinggi segitiga
    int nilai[tinggi][tinggi];	// deklarasi variabel nilai array 
    int jarak1 = tinggi;	
    for(baris=0;baris<tinggi;baris++) {
        // untuk menentukan jarak dari tepi
		for(int jarak=jarak1; jarak>=0; jarak-=1) {
            printf(" ");
        }
        // untuk menampilkan nilai setiap baris kolom segitiga pascal
        for(kolom=0; kolom<=baris; kolom++) {
			nilai[baris][kolom] = nilai[baris-1][kolom] + nilai[baris-1][kolom-1];
            if(kolom==baris || kolom==0) 
				nilai[baris][kolom] = 1;
            printf("%d ", nilai[baris][kolom]);
        }
        jarak1 = jarak1-1;   // untuk mengurangi jarak dari tepi agar membentuk segitiga
        printf("\n");
    }
	return 0;
}
