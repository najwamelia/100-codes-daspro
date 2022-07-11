// Program untuk mencari volume tabung. by: Najwa Amelia Qorry 'Aina
#include<stdio.h>                                                             
#define pi 3.14                                                                               
int main() {
	// deklarasi variabel                                                                               
	int radius, tinggi;                                                         
	float volume=0;                                                               
	printf("Panjang jari-jari botol: ");                                                 
	scanf("%d", &radius);  // menginputkan nilai r                                                                                                                              
	printf("Tinggi botol: ");                                                 
	scanf("%d", &tinggi);  // menginputkan nilai tinggi                                                    
	// menghitung volume tabung/botol                                                                            
	volume = pi*(radius*radius*tinggi);   
	// menampilkan hasil                                                                                                                  
	printf("\nVolume botol: %.2f", volume); 
	return 0;                           
}   
