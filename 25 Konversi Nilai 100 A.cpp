/* Progrqam untuk mengkonversi nilai angka menjadi huruf 
by: Najwa Amelia Q.A*/
#include<stdio.h>
int main() {
   int nilai;	// deklarasi variabel
   printf("Masukkan nilai (0-100): ");
   scanf("%d", &nilai);	// membaca input nilai 0-100
   switch( nilai / 10 ) {
		case 10: printf("Nilai: A+"); // A+ untuk nilai 100
		 break;
		case 9: printf("Nilai: A");	// A untuk nilai 90-99
	     break;
		case 8: printf("Nilai: B");	// B untuk nilai 80-89
	     break;
		case 7: printf("Nilai: C");	// C untuk nilai 70-79
	     break;
		case 6: printf("Nilai: D");	// D untuk nilai 60-69
	     break;
		case 5: printf("Nilai: E");	// E untuk nilai 50-59
	     break;
		default:
	     printf("Nilai: F"); // F untuk nilai di bawah 50
	     break;
	return 0;
   }

   return 0;
}
