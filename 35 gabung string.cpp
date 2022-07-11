/* Program untuk menggabungkan dua string. by: Najwa Amelia Q. A.*/
#include <stdio.h>
int main() {
    char string1[100], string2[100];	/*deklarasi variabel*/
    char *x1 = string1;	/*assign nilai yang ditunjuk x berupa string1*/
    char *y2 = string2;	/*assign nilai yang ditunjuk x berupa string2*/
	/*membaca input string 1 dan 2*/
	printf("Masukkan string pertama:\n");
    gets(string1);	
    printf("Masukkan string kedua:\n");
    gets(string2);	
    /*menggabungkan akhir kata pada string1 dengan string2*/
    while(*(++x1));
    while(*(x1++) = *(y2++));
    /*menampilkan hasil penggabungan kedua string*/
    printf("\nPenggabungan:\n");
	printf(string1);
    return 0;
}
