/* Program untuk mengecek apakah suatu bilangan harshad (bilangan 
yang habis dibagi jumlah angka-angkanya). by: Najwa Amelia Q. A*/
#include<stdio.h>
int main() {
	int n, temp, sum = 0, digit, res; // deklarasi variabel
	//To take user input
	printf("Masukkan angka: "); 
	scanf("%d",&n);	// menginput angka dari user
	temp = n; // distore ke temp
	while(temp!=0) { // ketika temp tidak sama dengan 0, eksekusi:
		digit=temp % 10; // mencari digit terakhir
		sum = sum + digit;
		temp = temp / 10;
	}
	res = n % sum;
	if(res == 0) // jika kondisi benar, cetak:
		printf("\n==> %d adalah Harshad Number", n);
	else	// jika salah, cetak
		printf("\n==> %d bukan Harshad Number", n);
	return 0;
} 
