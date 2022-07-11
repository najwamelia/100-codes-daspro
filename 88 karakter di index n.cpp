// Program untuk menentukan karakter pada index tertentu. by: Najwa Amelia Q.A
#include<stdio.h>                                                                                                                                  
int main () {   
	// deklarasi variabel   
	char str[50], ch;                                       
	int index;  
	printf("Tulis string: ");      
	gets(str);  // menginput string pada array                                                                                                                                               
	printf("Masukkan index yang dicari: ");                                                       
	scanf("%d", &index);  // menginput nilai index 
	// mencari karakter pada index                                                        
	ch = str[index];  
	//menampilkan hasil                                                             
	printf("\nKarakter pada index ke %d: %c\n", index, ch);  
	return 0;                          
}                      
