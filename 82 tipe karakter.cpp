// Program untuk mengecek tipe karakter. by: Najwa Amelia Q.A
#include<stdio.h>                                                                
#include<ctype.h>                                                                                                                                  
int main() {                                                                               
	char karakter;	// deklarasi variabel                                                                
	printf("Tulis karakter: ");                                               
	karakter = getchar();  // membaca input karakter    
	// cek jika karakter huruf, cetak:                                                   
	if(isalpha(karakter) > 0)                                                                               
		printf("\n==> Karakter adalah HURUF\n"); 
	// cek jika karakter angka, cetak:                                                                                                                         
	else if(isdigit(karakter) >0)                                                                                                                               
		printf("\n==> Karakter adalah ANGKA\n");
	// jika karakter bukan huruf/angka, cetak:                                                                                                                            
	else                                                                                                                                                         
		printf("\n==> Karakter BUKAN huruf ataupun angka");                                      
	return 0;                                                                          
}   
