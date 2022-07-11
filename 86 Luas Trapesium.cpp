// Program untuk menghitung luas trapesium. by: Najwa Amelia Q.A
#include <stdio.h>

int main() {
	int A, B, C, L;  // deklarasi variabel
	printf("Masukkan sisi atas: ");
	scanf("%d",&A); // menginput nilai sisi atas
	printf("Masukkan sisi bawah: ");
	scanf("%d",&B); // menginput nilai sisi bawah
	printf("Masukkan tinggi: ");
	scanf("%d",&C); // menginput nilai tinggi
	// menghitung luas
	L=(A+B)*C/2 ;	
	// menampilkan hasilnya
	printf("\nLuas trapesium: %d", L);
	return 0;
}
