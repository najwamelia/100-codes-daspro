// Program untuk mengubah angka menjadi terbilang
#include <stdio.h>

int main()
{
	int n, puluhan_rat; // mendeklarasikan variabel
	printf("Masukkan angka ratusan: ");
	scanf("%d", &n);	// menginput angka
	puluhan_rat = (n%100)/10;		// mengambil digit kedua dalam ratusan
	if (n>=100 && n<=999) {
			//untuk digit pertama dalam ratusan
			switch (n / 100) {			
	        	case 1: printf("Seratus"); break;
	        	case 2: printf("Dua ratus"); break;
	        	case 3: printf("Tiga ratus"); break;
	        	case 4: printf("Empat ratus"); break;
	        	case 5: printf("Lima ratus"); break;
	        	case 6: printf("Enam ratus"); break;
	        	case 7: printf("Tujuh ratus"); break;
	        	case 8: printf("Delapan ratus"); break;
	        	case 9: printf("Sembilan ratus"); break; }
    	//untuk digit kedua (belasan) dalam ratusan
    	if (puluhan_rat == 1) {		
    		switch (n % 10) {
	        	case 1: printf(" sebelas"); break;
	        	case 2: printf(" dua belas"); break;
	        	case 3: printf(" tiga belas"); break;
	        	case 4: printf(" empat belas"); break;
	        	case 5: printf(" lima belas"); break;
	        	case 6: printf(" enam belas"); break;
	        	case 7: printf(" tujuh belas"); break;
	        	case 8: printf(" delapan belas"); break;
	        	case 9: printf(" sembilan belas"); break; }
    	}
    	//untuk digit kedua (puluhan) dalam ratusan
		else {						
    		switch (puluhan_rat) {
	        	case 2: printf(" dua puluh"); break;
	        	case 3: printf(" tiga puluh"); break;
	        	case 4: printf(" empat puluh"); break;
	        	case 5: printf(" lima puluh"); break;
	        	case 6: printf(" enam puluh"); break;
	        	case 7: printf(" tujuh puluh"); break;
	        	case 8: printf(" delapan puluh"); break;
	        	case 9: printf(" sembilan puluh"); break; }
		}
		//untuk digit ketiga (satuan) dalam ratusan
		if (puluhan_rat != 1) {		
        	switch (n % 10) {		
	        	case 0: break;
	        	case 1: printf(" satu"); break;
	        	case 2: printf(" dua"); break;
	        	case 3: printf(" tiga"); break;
	        	case 4: printf(" empat"); break;
	        	case 5: printf(" lima"); break;
	        	case 6: printf(" enam"); break;
	        	case 7: printf(" tujuh"); break;
	        	case 8: printf(" delapan"); break;
	        	case 9: printf(" sembilan"); break; }
		}
	} else printf("Angka yang dimasukkan bukan ratusan");
	return 0;
}
