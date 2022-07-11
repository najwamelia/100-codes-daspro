// Program untuk mengkonversi suhu dari skala tertentu by: Najwa Amelia Q.A
#include <stdio.h>
int main() {
	char u;	// deklarasi variabel
	float c, r, f, k, t;	// deklarasi variabel
	printf("Masukkan nilai suhu beserta skalanya: ");
	scanf("%f",&t);		// input nilai suhu
	scanf(" %c",&u);	// input skala suhu
	switch (u) {		// mengubah skala suhu menjadi celcius
			case 'C' :
			case 'c' : c = t; break;
			case 'R' :
			case 'r' : c = t*5/4; break;
			case 'F' :
			case 'f' : c = (t-32)*5/9; break;
			case 'K' :
			case 'k' : c = t-273.0;
	}
	f= c*9/5+32.0;	// mengubah skala suhu menjadi fahrenheit
	r= c*4/5;		// mengubah skala suhu menjadi reamur
	k= c+273.0;		// mengubah skala suhu menjadi kelvin
	
	printf("\n%6.2f %c setara dengan: ", t, u);
	printf("\n%6.2f C", c);	// print hasil konversi ke celcius
	printf("\n%6.2f R", r);	// print hasil konversi ke reamur
	printf("\n%6.2f F", f);	// print hasil konversi ke fahrenheit
	printf("\n%6.2f K", k);	// print hasil konversi ke kelvin
	return 0;
}
