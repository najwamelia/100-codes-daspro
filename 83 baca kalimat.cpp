// Program untuk membaca suatu kalimat. by: Najwa Amelia Q.A
#include<stdio.h>                                                                                                                                              
int main() {                                                                               
	char kalimat[100], karakter;                                                     
	int hitung;                                                                     
	hitung = 0;                                                                     
	printf("Tulis kalimat:\n");                              
	// membaca input tulisan
	do {                                                                              
		karakter = getchar();                                                        
		kalimat[hitung++] = karakter;                                                    
	} while(karakter != '\n');                                                      
	hitung--;
	// menampilkan kembali tulisan
	printf("\nKamu menulis==>");                                                                        
	kalimat[hitung] ='\0';                                                             
	printf("\n%s\n", kalimat);   
	return 0;                                                     
}
