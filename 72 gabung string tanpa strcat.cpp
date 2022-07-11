/*Program untuk menggabung string tanpa strcat. by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
	char str1[50], str2[50], i, j;	// deklarasi variabel
	printf("Tulis string pertama:\n");
	scanf("%s",str1);	// menginputkan string pertama
	printf("\nTulis string kedua:\n");
	scanf("%s",str2);	// menginputkan string kedua
	// for loop untuk menghitung panjang string
	for(i=0; str1[i]!='\0'; ++i); 	
	// loop untuk menggabung string str2 di akhir str1
		for(j=0; str2[j]!='\0'; ++j, ++i) {
			str1[i]=str2[j];
		}
	// '\0' = akhir dari string
	str1[i]='\0';
	printf("\nPenggabungan =>\n%s", str1);
	return 0;
}
