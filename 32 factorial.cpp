// Program untuk mencari nilai faktorial. by: Najwa Amelia Q. A.
#include <stdio.h>
// fungsi untuk menghitung faktorial
int fact (int n) {
	if (n>1) // jika angka lebih dari 1, eksekusi:
		return (n*fact(n-1)); 	// rekursif mereturn hasil perhitungan rumus faktorial
	else // jika n kurang dari 1, return 1
		return (1);				// non-rekursif
}
int main() {
	int n;	// deklarasi variabel
	printf("Masukkan angka: ");
	scanf("%d", &n);	// membaca input angka
	printf("\nFaktorial %d = %d", n, fact(n)); // menampilkan hasil faktorial
	return 0;
}
