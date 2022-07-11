// Program untuk mencari luas dan keliling lingkaran dengan r tertentu
#include <stdio.h>
#define PI 3.14159	// mendefinisikan nilai pi

int main(void)
{
	double radius;	// mendeklarasikan variabel
	double luas;
	double keliling;
	
	printf("Masukkan nilai r: ");
	scanf("%lf", &radius);	// input nilai r
	
	luas = PI * radius * radius; 	// menghitung luas lingkaran
	keliling = 2 * PI * radius;		// menghitung keliling lingkaran
	
	printf("\nLuas lingkaran = %.2f", luas);		// menampilkan luas
	printf("\nKeliling lingkaran = %.2f", keliling);	// menampilkan keliling

	
	return(0);
}
