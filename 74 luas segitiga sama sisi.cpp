// Program untuk menghitung luas segitiga sama sisi. by: Najwa Amelia Q. A.
#include<stdio.h>
#include<math.h>
int main() {
	// deklarasi variabel
   int sisi;
   float luas, temp;

   // menginputkan panjang sisi segitiga
   printf("Masukkan panjang sisi segitiga sama sisi:\n");
   scanf("%d", &sisi);

   // menghitung luas segitiga sama sisi
   temp = sqrt(3) / 4 ;
   luas = temp * sisi * sisi ;
   printf("\nLuas Segitiga: %.2f", luas);
   return(0);
}
