// Program untuk mengkonversi CM ke feet dan sebaliknya. by: Najwa Amelia Q.A
#include <stdio.h>
int main() {
	// deklarasi variabel
	int n, cm;
	float feet;
	printf("Enter '1' untuk konversi cm ke feet \nEnter '2' untuk konversi feet ke cm\n");
	printf("1 atau 2: ");
	scanf("%d", &n);  // membaca input 1 atau 2
	// mengkonversi meter ke feet jika n sama dengan 1
	if (n==1) {
		printf("\nMasukkan panjang (cm): "); 
		scanf("%d", &cm);  // menginputkan value ke variabel meter
		feet = cm * 0.0328084;
		printf("\n==> %d CM  =  %.2f Feet\n", cm, feet);
	}
	// mengkonversi meter ke feet jika n sama dengan 2
	else if (n==2) {
		printf("\nMasukkan panjang (feet): "); 
		scanf("%f", &feet);	  // menginputkan value ke variabel feet
		cm = feet / 0.0328084;	
		printf("\n==> %.2f Feet  =  %d CM\n", feet, cm);
	}
	return 0;
}
