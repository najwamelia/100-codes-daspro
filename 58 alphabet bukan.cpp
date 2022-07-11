/* Program untuk mengecek apakah suatu input merupakan alphabet atau bukan.
by: Najwa Amelia Q. A. */
#include<stdio.h>
#include<conio.h>
int main() {
	char a;	// deklarasi variabel
	printf("Masukkan input: ");
	scanf("%c", &a); // menginputkan ke variabel a
	// kondisi, jika input merupakan huruf(a/A-z/Z), cetak: 
	if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
		printf("\n==> %c adalah Alphabet", a);
	else // jika tidak, cetak:
		printf("\n==> %c bukan Alphabet", a);
	return 0;
}
