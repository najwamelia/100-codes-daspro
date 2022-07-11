/* Program yang mencetak Ganjil untuk bilangan ganjil, 
dan Genap untuk bilangan genap dari sebuah input. by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
    int n;  // deklarasi variabel
    printf("Masukkan bilangan: ");
    scanf("%d", &n);  // membaca input bilangan
    if (n&1) // memeriksa jika n adalah bilangan ganjil 
        printf("Ganjil", n); // mencetak Ganjil
    else
        printf("Genap", n); // jika n bukan ganjil, cetak Genap
	return 0;
}
