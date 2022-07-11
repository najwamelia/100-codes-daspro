/*Program untuk mengkonversi gram ke ons dan pon. by: Najwa Amelia Q.A */
#include <stdio.h>
#define ons 0.035274
#define pon 0.002204
int main () {
    float gram, dalamOns, dalamPon;  // deklarasi variabel
    printf ("Masukan satuan Gram = ");
    scanf ("%f", &gram);  // menginputkan satuan gram
    dalamOns = gram * ons;  // konversi ke ons
    dalamPon = gram * pon;  // konversi ke pon
	//menampilkan hasil konversi
    printf ("\n%.2f Gram:\n-> %.2f Ons \n-> %.2f Pound ", gram, dalamOns, dalamPon);  
    return 0;
} 
