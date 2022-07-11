/* Program untuk mengecek amicable numbers (dua bilangan bersahabat jika jumlah faktor
bil pertama (kecuali bilangan itu) sama dengan bil kedua). by: Najwa Amelia Q.A*/
#include<stdio.h> 
int main() {
	int n1, n2, i;	//deklasasi variabel
	//deklarasi variabel untuk menyimpan jumlah dari pembagi
	int n1_divSum = 0, n2_divSum = 0;
	// menginputkan angka yang akan dicek apakah amicable
	printf("Masukkan angka pertama: ");
	scanf("%d", &n1);	
	printf("Masukkan angka kedua: ");
	scanf("%d", &n2); 
	//for loop untuk menghitung jumlah semua pembagi pada n1 dan n2
	for(int i=1; i<n1; i++) {
		if(n1 % i == 0)
		n1_divSum = n1_divSum + i;
	}
	for(int i=1; i<n2; i++) {
		if(n2 % i == 0)
		n2_divSum = n2_divSum + i;
	}
	// pengecekan kondisi apakah keduanya amicable
	if((n1 == n2_divSum) && (n2 == n1_divSum))
		printf("\n%d dan %d ==> Amicable numbers\n", n1, n2);
	else
		printf("\n%d dan %d ==> Bukan Amicable numbers\n", n1, n2);
	return 0;
}
