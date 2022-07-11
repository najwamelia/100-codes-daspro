//Program untuk mengecek bilangan armstrong. by: Najwa Amelia Q.A
#include <stdio.h> 
int main()
{
	int n, n1, n2, n3, hasil;	// deklarasi variabel
	printf("Masukkan angka antara 0-999: ");
	scanf("%d",&n);		// membaca input angka
	if (n>=0 && n<=9)	// jika angka mulai dari 0 hingga 9
		printf("\n%d merupakan bilangan Armstrong", n);	// cetak angka = bil armstrong
	else if (n>9 && n<=99) // jika angka lebih dari 9 hingga 99
			printf("\n%d bukan merupakan bilangan Armstrong", n); // cetak angka bukan bil armstrong
	// jika angka lebih dari 99 hingga 999, eksekusi:
	else if (n>99 && n<=999) {
		n1 = n/100; 		//untuk mengambil suku bilangan pertama
		n2 = (n%100)/10;	//untuk mengambil suku bilangan kedua
		n3 = n%10; 			//untuk mengambil suku bilangan ketiga
		hasil = (n1*n1*n1) + (n2*n2*n2) + (n3*n3*n3);
		if (n == hasil)	// jika angka benar sama dengan hasil perhitungan
			printf("\n%d merupakan bilangan Armstrong", n); // cetak angka = bil armstrong
		else // jika angka tidak sama dengan hasil
		printf("\n%d bukan merupakan bilangan Armstrong", n); // cetak angka bukan bil armstrong
	}
	else	// jika angka yang dimasukkan tidak sesuai interval
		printf("\nAngka yang dimasukkan bukan antara 0-999");	
	return 0;
}
