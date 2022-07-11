// Program untuk membalikkan string. by: Najwa Amelia Q. A
#include <stdio.h>
int main() {
	char string[100], balik[100];	// deklarasi variabel tipe array
  	int i, j, count = 0;	// deklarasi variabel
  	printf("Masukkan string:\n");
	scanf("%s", string);	// membaca input string
	// menentukkan panjang string
	while (string[count] != '\0')
    	count++;
	j = count-1;
	//for loop untuk membalikkan karakter dengan menukar string
	for (i = 0; i<count; i++)	{
    	balik[i] = string[j];
    	j--;
	}
	// menampilkan string yang sudah dibalik
	printf("\nPembalikkan string:\n%s", balik);	
}
