// Program untuk menukar value tanpa variabel ketiga. by: Najwa Amelia Q.A
#include <stdio.h>
int main() {
	int n1, n2;	// deklarasi variabel
	printf("Masukkan angka pertama: ");
	scanf("%d", &n1);
	printf("Masukkan angka kedua: ");
	scanf("%d", &n2);
	// menampilkan variabel dan value sebelum ditukar
	printf("\nSebelum ditukar:\n\tn1 = %d \n\tn2 = %d\n", n1, n2);
	// melakukan penukaran tanpa variabel ketiga
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	// menampilkan variabel dan value setelah ditukar
	printf("\nSebelum ditukar:\n\tn1 = %d \n\tn2 = %d", n1, n2);
	return 0;
}
