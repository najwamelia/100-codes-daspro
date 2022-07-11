// Program untuk menghitung luas juring lingkaran. by: Najwa Amelia Q.A
#include <stdio.h>                                                                                                                                         
int main () {
	//deklarasi variabel
    int radius, sudut;
    float luas;
    printf("Masukkan panjang jari-jari: ");
    scanf("%d", &radius); // menginput nilai r
    printf("Masukkan besar sudut: ");
    scanf("%d", sudut);	  // menginput niai besar sudut
    // menghitung luas juring
    luas = (3.14*radius*radius*sudut)/360;
    // menampilkan hasil
    printf("\nLuas Juring Lingkaran: %.2f", luas); 
    return 0;
}
