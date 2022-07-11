/* Program untuk mencari jumlah diagonal utama matriks. by: Najwa Amelia Q.A */ 
#include <stdio.h>
int main() {
    int matriks[10][10];
    int i, j, m, sum=0;
    // menginputkan banyak kolom/baris pada matriks
	printf("Masukkan orde matriks (maksimal 10): ");
    scanf("%d",&m);
    // menginputkan elemen-elemen matriks 
    printf("\nMasukkan %d angka pada Matriks %dx%d!\n", m*m, m, m);
    for(i=0;i< m;i++) {
        for(j=0; j<m; j++) {
            printf("Elemen di posisis [%d, %d]: ", i, j);
            scanf("%d", &matriks[i][j]);
        }
    }
 	// menampilkan matriks yang diinput
    printf("\nMatriks: \n");
    for(i=0;i< m;i++) {
        for(j=0;j< m;j++) {
            printf("\t%d   ", matriks[i][j]);
            // menghitung jumlah diagonal utama matriks
			if(i==j)
			  sum = sum + matriks[i][j];
        }
        printf("\n");
    }
    // menampilkan hasil penjumlah diagonal utama matriks
    printf("\nJumlah diagonal utama matriks ==> %d",sum);
    return 0;   
}
