// Program untuk menghitung jumlah n bilangan asli by: Najwa Amelia Q.A
#include <stdio.h>
int main() {
    int n, i, sum = 0; // deklarasi variabel dan inisialisasi
    printf("Masukkan Bilangan Asli: ");
    scanf("%d", &n);	// membava input 
    // for loop berakhir ketika n kurang dari i
    for(i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Jumlah = %d", sum);	// cetak sum merupakan jumlah bilangan
    return 0;
}
