// Program untuk mengkonversi jarak mil ke kilometer
#include <stdio.h>
#define KM_PER_MILE 1.609

int main()
{
	double mil, km;	// deklarasi variabel
		
		printf("Masukkan jarak dalam mil: ");
		scanf("%lf", &mil);	// input jarak dalam mil
		
		km = KM_PER_MILE * mil;	// menghitung mil ke km
		
		printf("\n%.2f mil = %.2f km", mil, km);	// print jarak dalam km
		
		return (0);
}
