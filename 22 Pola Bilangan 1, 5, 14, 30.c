/* Program untuk menentukan bilangan ke-n dari pola bilangan 1, 5, 14, 30, ... 
by: Najwa Amelia Q. A. */
#include<stdio.h>
int suku(int n);	// fungsi prototype
int main() {
    int n; 	// deklarasi variabel
    printf("Pola Bilangan: 1, 5, 14, 30, ...\n"); // menampilkan pola suku ke 1-4
    printf("Suku ke berapa yang dicari? : ");
    scanf("%d", &n);	// membaca input bilangan ke-n
    printf("\nSuku ke %d dari pola tersebut: %d", n, suku(n));	// mencetak suku ke-n
    return 0;
}
// fungsi rekursif untuk mencari bilangan suku ke-n
int suku(int n) {
    if (n == 1)	// jika n benar 1, return 1
        return 1;
    else	// jika n tidak sama dengan 1, maka hitung dan return hasilnya
        return (n*n+suku(n-1));
}
