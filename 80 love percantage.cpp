/* Program untuk menghitung persentase kecocokan 
dari string nama yang diinput. by: Najwa Amelia Q.A*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// fungsi yang me-return jumlah dari semua digit
int jml_digit(int num) {
	int sum=0;
	while(num>0) {
		sum += (num%10);
		num/=10;
	}
	return sum;
}

int main() {
	// deklarasi dan inisialisasi variabel
	char cewek[40], cowok[40];
	int sum, sum1, i, pilih;
	float persen = 0;
	printf(">>>>> Persentase Kecocokan <<<<<\n\n");
	// Menginputkan string nama perempuan
	printf("Tulis nama perempuan: ");
	fflush(stdin);
	gets(cewek);
	// Menginputkan string nama laki-laki
	printf("Tulis nama laki-laki: ");
	fflush(stdin);
	gets(cowok);
	// cetak tulisan loading.....
	printf("\nLoading.....\n");	  
	// menghitung panjang string
	sum=0;
	for(i=0; i<(strlen(cewek)); i++) {
	sum += tolower(cewek[i]); //konversi uppercase ke lowercase
	}
	sum1 = 0;
	for(i=0; i<(strlen(cowok)); i++) {
	sum1 += tolower(cowok[i]); //konversi uppercase ke lowercase
	}
	// menghitung persentase 
	persen = (jml_digit(sum) + jml_digit(sum1)) + 40;
	if(persen>100)
		persen = 100;
	// tampilkan hasil perhitungan persentase
	printf("\nPersentase Kecocokan: %.02f %%\n", persen);
	return 0;
}
