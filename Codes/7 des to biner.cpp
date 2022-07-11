// Program untuk mengkonversi bilangan desimal ke biner
#include <stdio.h>

void biner(int bil); // fungsi prototype 

int main()
{
	int bil;	// deklarasi variabel
	printf("Masukkan bilangan desimal: ");
	scanf("%d", &bil); // membaca input bil desimal
	biner(bil); // memanggil fungsi 
	return 0;
}

void biner(int bil) // fungsi untuk mengkonversi desimal ke biner
{
	if (bil>1) 
		biner(bil/2); 		// bagian rekursif
	printf("%d", bil%2);	// bagian non-rekursif
}
