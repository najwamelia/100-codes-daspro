/* Program untuk menemukan semua kemungkinan penjumlahan yang 
menghasilkan angka n. by: Najwa Amelia Q.A. */
#include <stdio.h>
// fungsi prototype
void bil(int show[], int n);
void cek(int x, int n, int show[], int z);

int main() {
    int show[100], n, x;	// deklarasi variabel
    printf("Masukkan angka: ");
    scanf("%d", &n);   // menginput angka
    printf("\nBilangan-bilangan penjumlah:\n");
    if(n>=1 && n<=100) {
        for(x=0; x<n; ++x) {
		} cek(1, n, show, 0);  // memanggil fungsi cek
    }      
    else 
        return 0;
}
// fungsi untuk menampilkan angka yang dapat dijumlahkan
void bil(int show[], int n) {
    for (int x=0; x<n; x++)
        printf("%d ", show[x]);
    printf("\n");
}
// melakukan pencarian semua bil yang menjadi penjumlahan angka n
void cek(int x, int n, int show[], int z) {
    if (n == 0)
        bil(show, z);	// memanggil fungsi bil
    for (int y=x; y<=n; y++) {
        show[z] = y;
        cek(y, n-y, show, z+1);
    }
}


