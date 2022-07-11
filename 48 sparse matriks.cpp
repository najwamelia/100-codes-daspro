/* Program untuk mengecek apakah suatu matriks sparse matriks atau bukan
by Najwa Amelia Q. A */
#include<stdio.h>
int main() {
    int n, m, c, d, matrix[10][10];
    int counter = 0;
    printf("Masukkan banyak kolom dan baris matriks:\n");
    scanf("%d%d",&m,&n);
    printf("\nMasukkan %d element matriks:\n", m*n);
    for(c=0; c<m; c++) {  // untuk pengulangan baris
        for(d=0; d<n; d++) {   // untuk pengulangan kolom 
            scanf("%d", &matrix[c][d]); // membaca input matriks
            if(matrix[c][d] == 0)
            counter++;  // sama dengan counter=counter+1
        }
    }
    // menampilkan ulang matriks yang diinput
    printf("\nMatriks yang Ditulis:\n");
    for(c = 0; c < m; c++) {  // untuk pengulangan baris
        for(d = 0; d < n; d++)   // untuk pengulangan baris kolom
            printf("%d\t", matrix[c][d]);
    printf("\n");
    }
    // pengecekan apakah sparse matriks atau bukan
    if(counter > (m*n)/2)
        printf("\n==>Matriks di atas adalah Sparse Matriks");
    else
        printf("\n==>Matriks di atas bukan Sparse Matriks");
    return 0;
}
