/*Program untuk menemukan karakter dari string yang tidak diulang. by: Najwa Amelia Q. A.*/
#include <stdio.h>
int main() {
	// deklarasi dan inisialisasi variables.
	char str[100];
	int i, muncul[256] = {0};
	printf("Masukkan string:\n");
	gets(str);  // menginputkan string ke variabel str
	// menghitung frekuensi muncul setiap karakter
	for(i = 0; str[i] != '\0'; i++)
		muncul[str[i]]++;
	printf("\nKarakter yang tidak diulang==>\n");
	// mencari karakter yang tidak diulang
	for(i = 0; i < 256; i++) {
		if(muncul[i] == 1) 
		printf(" %c ", i); // menampilkan karakter yang tidak diulang
	}
return 0;
}
