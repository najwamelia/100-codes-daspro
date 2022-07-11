/* Program untuk menentukan apakah merupakan strong number 
(jumlah faktorial angka-angkanya=bilangan tsb). by: Najwa Amelia Q.A*/
#include<stdio.h>
int faktorial(int n); // prototype fungsi faktorial
int main() {
	int n, digit, sum=0, temp;	// dekllarasi variabel
	printf("------Cek Strong Number------\n\n");
	printf("Masukkan Angka: ");
	scanf("%d",&n);	// membaca input angka 
	temp=n; // menyimpan angka ke temp
	//while loop saat temp tidak sama dg 0
	while(temp!=0) {
	digit=temp%10;		//untuk digit terakhir
	digit = faktorial(digit);	// memanggil fungsi faktorial
	sum=sum+digit;	// meningkatkan besar digit
	temp=temp/10;
	}
	// jika hasil sum benar sama dg angka n, cetak:
	if(sum == n)
		printf("\n==> Merupakan Strong Number");
	//false condition
	else
		printf("\n==> Bukan Strong Number");
    return 0;
}
// fungsi menghitung faktorial
int faktorial(int n) { 
	int i, fact=1;
	for(i=1; i<=n; i++) {
		fact = fact*i;
	}
	return fact;
}
