/*Program untuk menentukan bilangan positif dan negatif. by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
    int n;	// deklarasi variabel
    printf("Masukkan Angka:  ");
    scanf("%d", &n); // menginputkan angka ke variabel n
    if (n > 0)	// jika n lebih dari 0, cetak:
        printf("\n==> %d adalah bilangan positif\n", n);
    else if (n < 0) // jika n kurang dari 0, cetak:
        printf("\n==> %d adalah bilangan negatif\n", n);
    else // jika n sama dengan 0, cetak:
        printf("\n==> 0 bukan bilangan positif maupun negatif\n");
    return 0;
}
