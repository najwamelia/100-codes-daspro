/* Program untuk mengkonversi bilangan Octal ke Decimal. by: Najwa Amelia Q.A */
#include<stdio.h> 
#include<math.h>

int main() {
	// inisialisasi variabel
    long int oct, dec = 0;
    int i = 0;
    printf("Masukkan bilangan Oktal:\n");
    scanf("%ld", &oct);	//menginputkan bilangan ke variabel oct
	//konversi octal ke desimal
    while(oct != 0) {
        dec =  dec +(oct % 10)* pow(8, i++);
        oct = oct / 10;
    }
	// menampilkan hasil konversi
    printf("\nPada bilangan Desimal senilai dengan ==>\n%ld\n", dec);
    return 0;
}
