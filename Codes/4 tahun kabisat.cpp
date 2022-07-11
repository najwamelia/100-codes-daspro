// Program untuk memerikasa tahun kabisat
#include <stdio.h>
int main() {
   int tahun;
   printf("Masukkan tahun: ");
   scanf("%d", &tahun);

   if (tahun % 400 == 0)	// tahun kabisat jika habis dibagi 400
      printf("%d adalah Tahun Kabisat.", tahun);
   // tidak habis dibagi 400
   else if (tahun % 100 == 0) // bukan tahun kabisat jika habis dibagi 100
      printf("%d bukan Tahun Kabisat.", tahun);
   // habis dibagi 4
   else if (tahun % 4 == 0)
      printf("%d adalah Tahun Kabisat.", tahun); // tahun kabisat jika tidak habis dibagi 100
   else
      printf("%d bukan Tahun Kabisat.", tahun);

   return 0;
}
