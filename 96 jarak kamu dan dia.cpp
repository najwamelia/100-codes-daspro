/* Program untuk mencari jumlah dari selisih absis dan selisih ordinat 
yang menjadi jarak antara kamu dan dia. by: Najwa Amelia Q.A */
#include <stdio.h>
#include <string.h>

int main() {
    int dx, dy, sum, x1, x2, y1, y2;	// deklarasi variabel
    printf("Masukkan koordinat x1 y1 x2 y2:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);  // menginputkan nilai koordinat
    // menghitung selisih dua titik
    dx = (x1-x2);
    dy = (y1-y2);
    // mengubah bil negatif ke positif
    if(dx<0) {
        dx= dx*(-1);
    } 
    if(dy<0){ 
        dy = dy*(-1);
    }
    // menjumlahkan jarak selisih kedua titik
    sum = dx+dy;
    printf("\nJarak kamu dan dia: %d\n", sum);  // menampilkan hasilnya
    // menampilkan output pesan
    if(sum<=5) {  // jika jarak kurang dari sama dengan 5
        printf("Kamu masih mungkin mendapatkannya!\n");
    }
    else if(sum<=10) { // jika jarak kurang dari sama dengan 10
        printf("Kamu harus bekerja keras untuk mendapatkannya!\n");
    }
    else {
        printf("Mundur ajalah\n");
    }
    
    return 0;
}
