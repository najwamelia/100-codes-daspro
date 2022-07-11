/* Program untuk mencetak huruf kapital pertama yang keluar dari string. by: Najwa Amelia Q.A*/
#include <stdio.h>
#include <string.h>
void  cek(char s[], int h, int i);
int main() {
	// deklarasi variabel
    int h;  
    char s[100];
    printf("Masukkan string:\n");
    gets(s);  // membaca input string
    h = strlen(s);  // menghitung panjang string, distore ke h
    cek(s, h, 0);  // memanggil fungsi cek
    return 0;
}
// fungsi untuk mencari huruf kapital pertama
void cek(char s[], int h, int i) {
    if (i <= h) {  // mengecek satu persatu huruf
        if (s[i] >= 'A' && s[i] <= 'Z')
            printf("\nHuruf kapital pertama==>  %c\n", s[i]);  // mencetak huruf kapital
        else  // jika tidak, cek ke huruf selanjutnya
            cek(s, h, i+1);  
    }
}
