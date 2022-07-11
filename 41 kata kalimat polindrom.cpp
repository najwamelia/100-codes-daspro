// Program menentukan apakah suatu kata/kalimat polindrom. by: Najwa Amelia Q.A
#include <stdio.h>
#include <string.h>
//#include <ctype.h>

int main() {
    char kata[50] = {'\0'};	// deklarasi array
    char temp[50] = {'\0'}; // deklarasi array
    int n, i, j = 0;	// deklarasi variabel

    printf("Tulis Kata/Kalimat:\n");
    gets(kata);		// membaca input kata/kalimat
    // strlen untuk menghitung jumlah karakter yang ada pada kata/kalimat yang dinput
    n = strlen(kata);	// distore ke variabel n
	// for loop untuk konversi karakter yang diinput menjadi huruf kecil.
    for(i = 0; kata[i]; i++) { 
        kata[i] = tolower(kata[i]);
    }
	//for loop pembalikan kata/kalimat dan disimpan ke variabel array char temp
    for(i = n-1; i >= 0; i--) {
        temp[j] = kata[i];
        j++;
    }
	// pembandingan antara kata/kalimat yang diinput dengan yang sudah dibalik.
    if(strcmp(kata, temp) == 0)	// jika kata/kalimat sama, cetak:
        printf("==> Palindrom");
    else	// jika tidak sama, cetak:
        printf("==> Bukan Palindrom");
    return 0;
}
