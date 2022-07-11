// Program untuk menebak angka benar by: Najwa Amelia Q. A.
#include <stdio.h>
int main() {
	int angkaBenar = 7; // assign value untuk angka yang benar
	int tebak; 		// deklarasi variabel
	int coba = 0; 	// inisialisasi  limit percobaan menebak
	int limit = 3;	// batas percobaan menebak
	int habis = 0;	// kesempatan menebak sudah habis
	printf("Anda memiliki 3 kesempatan menebak!\n");
	// loop jika tebakan salah dan masih ada kesempatan menebak
	while(tebak!=angkaBenar && habis == 0) {
		if(coba < limit) { 
			printf("Tebak angka: ");
			scanf("%d", &tebak);
			coba++;
		} else
			habis = 1;
	}
	if (habis == 1) // jika kesempatan menebak sudah habis
		printf("\nSudah mencapai limit menebak!");
	else
		printf("\nAnda Benar!");
}
