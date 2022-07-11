/*Program untuk mencari hasil bagi dan sisanya. by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
	int num1, num2, hasil, sisa;	// deklarasi variabel
	printf("Angka yang terbagi: ");
	scanf("%d", &num1);	// menginputkan angka terbagi ke num1
	printf("Angka yang membagi: ");
	scanf("%d", &num2);	// menginputkan angka terbagi ke num2
	
	// hasil pembagian disimpan ke variabel hasil
	hasil = num1 / num2;	
	// mencari sisanya dan disimpan ke variabel sisa
	sisa = num1 % num2;
	
	// menampilkan output
	printf("\nHasil Pembagian: %d\n", hasil);
	printf("Sisa: %d", sisa);
	return 0;
}
