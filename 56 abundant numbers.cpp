/* Program untuk mengecek abundant numbers/bil berlimpah (jumlah faktor
sejatinya lebih besar dari bilangan tsb). by: Najwa Amelia Q.A*/
#include<stdio.h>
	int main() {
	int n, sum=0, i; // deklarasi variable	
	printf("Masukkan angka: "); 
	scanf("%d",&n);	// menginputkan angka yang akan dicek apakah abundant
	//for loop untuk menghitung jumlah dari faktor-faktor
	for(i=1; i<n ; i++) {
		if(n%i == 0)
		sum = sum+i;
	}
	if(sum>n) // jika jumlah faktor lebih dari bilangan tsb, cetak:	
		printf("\n%d ==> Bilangan Berlimpah\n", n);
	else	// jika tidak, cetak: 
		printf("\n%d ==> Bukan Bilangan Berlimpah\n", n);
	return 0;
}
