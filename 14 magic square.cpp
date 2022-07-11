/* Program untuk mencetak magic square ukuran ganjil hingga 9
by: Najwa Amelia Qorry 'Aina*/
#include <stdio.h>
int bs[19][19], brs, kol, orde=9;	// deklarasi variabel
void susun();	// prototype fungsi 
void cetak();	// prototype fungsi 

int main() {
	printf("Masukkan orde (1-9, ganjil): "); 
	scanf("%d", &orde);	// input orde bilangan ganjil 
	if (orde%2 && (orde<10)) {	// jika orde ganjil, lebih dari 0 dan kurang dari 10
		brs = -1;  // inisialisasi posisi pertama
		kol = orde/2;
		susun();	// memanggil fungsi susun
		cetak();	// memanggil fungsi cetak
	}
	return 0;
}
// menentukan angka-angka selanjutnya pada magic square
void susun() {
	for(int bil=1; bil<=(orde*orde); bil++) {
		if((bil%orde) == 1) brs++; // jika bil mod orde sama dgn 1, brs ditambah
		else {brs--; kol++;} // jika tidak, brs diturunkan, kol ditambah
		if(brs<0) brs=orde-1; // jika brs kurang dari 0, brs menjadi orde-1
		if(kol>(orde-1)) kol=0; // jika kol lebih dari orde-1, kol menjadi  0
		bs[brs][kol]=bil;
	}
}
// fungsi untuk mencetak magic square
void cetak() {
	for(brs=0; brs<orde; brs++) {
		printf("\n");
		for(kol=0; kol<orde; kol++)
			printf("%4d", bs[brs][kol]);
	}
}

