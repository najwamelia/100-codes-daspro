// Program untuk mengecek apakah 2 kata anagram. by: Najwa Amelia Q.A
#include <stdio.h>
int cek(char [], char []);	// fungsi prototype
int main() {
	char a[100], b[100];	// deklarasi variabel array
	printf("Tulis string pertama:\n");
	gets(a);	// membaca input string dan distore ke array a
	printf("Tulis string kedua:\n");
	gets(b);	// membaca input string dan distore ke array b
	if (cek(a, b)) // jika return fungsi cek 1 (benar), cetak:
    	printf("\n==> Anagram");
	else	// jika tidak, cetak:
    	printf("\n==> Tidak Anagram");
	return 0;
}
// fungsi untuk mengecek anagram kedua string
int cek(char a[], char b[]) {
	int pertama[26] = {0}, kedua[26] = {0}, c=0;	// deklarasi variabel
	while (a[c] != '\0') {	// menghitung panjang string pertama
		pertama[a[c]-'a']++;
		c++;
	}
	c = 0;
	while (b[c] != '\0') {	// menghitung panjang string kedua
		kedua[b[c]-'a']++;
		c++;
	}
	// membandingkan kedua string
	for (c = 0; c<26; c++) {
		if (pertama[c] != kedua[c])
    		return 0;
	}
	return 1;
}
