/* Program untuk mengkonversi detik ke jam, menit, dan detik
by: Najwa Amelia Q. a.*/
#include<stdio.h>
int main(){
	int detikTotal, b, c, jam, menit, detik, sisa; // deklarasi variabel
	printf("Masukkan detik: ");
	scanf("%d", &detikTotal); //membaca input angka dalam detik
	jam = detikTotal/3600; 	 // mengkonversi detik menjadi jam dengan dibagi 3600 
	sisa = detikTotal - (jam*3600); // mengkonversi sisanya menjadi menit
	menit = sisa/60; 	     // dibagi 60 agar menjadi menit
	detik = detikTotal - (jam*3600) - (menit*60); //sisanya dijadikan detik
	printf("\n%d Jam %d Menit %d Detik", jam, menit, detik); //print jam menit dan detik
	return 0;
}
