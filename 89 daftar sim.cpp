// Program untuk menentukan apakah usianya sudah bisa daftar SIM. by: Najwa Amelia Q.A
#include<stdio.h>                                                                                                                                            
int main() {  
	// deklarasi variabel                                                                             
	char nama[30];                                                                 
	int usia, tunggu;                                                            
	printf("Masukkan Nama: ");                                                        
	scanf("%s", nama); // menginput nama                                                             
	printf("Masukkan Usia: ");                                                  
	scanf("%d", &usia); // menginput usia                                                          
	if(usia>=17)   // jika usia lebih dari sama dg 17, cetak:                                                                                                                                               
		printf("\n%s kamu sudah bisa daftar SIM!", nama);                                                                                                          
	else {                                                                              
		tunggu = 17-usia;                                                          
		printf("\n%s kamu belum cukup umur untuk daftar SIM.", nama);
		printf("\nTunggu %d tahun lagi ya!", tunggu); 
	}  
	return 0;                                                                            
}    
