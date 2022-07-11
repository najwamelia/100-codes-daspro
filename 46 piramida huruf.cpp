/*Program untuk menampilkan piramida alfabet. by: Najwa Amelia Q. A.*/
#include <stdio.h>
int main() {
    int i, j;	// deklarasi variabel
    int spasi = 4;	
    char huruf = 'A';
    printf("=PIRAMIDA ALFABET=\n\n"); //mencetak baris kosong
    /*menjalankan loop utama*/
    for(i=1; i<=5; i++) {
        /*mencetak spasi*/
        for(j=1; j<=spasi; j++)
            printf(" ");
        /*mencetak baris pertama*/
        for(j=1; j<=i; j++)
            printf("%c",huruf+j-1);
        /*mencetak baris kedua*/
        for(j=i-1; j>=1; j--)
            printf("%c",huruf+j-1);      
        printf("\n"); //mencetak baris kosong
        spasi--;
    }
    return 0;
}

