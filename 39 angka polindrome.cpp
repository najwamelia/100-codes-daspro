// Program untuk menentukan apakah suatu angka polindrom. by: Najwa Amelia Q. A
#include<stdio.h>

int main() {
	int a, b, c, s = 0;		// deklarasi variabel
    printf("Masukkan bilangan: ");
    scanf("%d", &a);
    c = a;
   // bilangan dibalik di dalam while loop
   while(a > 0) {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
	}
   // angka yang dibalik dibandingkan dengan angka yang diinput
   if(s == c)
      printf("\n%d adalah bilangan polindrom", c);
   else
      printf("\n%d bukan bilangan polindrom", c);
	return 0;
}
