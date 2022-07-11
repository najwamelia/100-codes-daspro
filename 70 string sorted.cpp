/* Program untuk mengurutkan string dari kecil. by: Najwa Amelia Q.A */
#include<stdio.h>
#include<string.h>
int main() {
	int i, j, banyak;	// deklarasi variabel
	char str[25][25], temp[25];	// deklarasi array
	printf("Berapa banyak string?:  ");
	scanf("%d", &banyak);	// menginputkan banyak string
	// menginputkan string
	printf("Tulis string satu persatu:\n");
	for(i=0; i<=banyak; i++)
		gets(str[i]);
	for(i=0; i<=banyak; i++) {
		for(j=i+1; j<=banyak; j++) {
			if(strcmp(str[i], str[j])>0) {	// mengurutkan string
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	} 
	// menampilkan urutan string
	printf("\nUrutan string sesuai abjad: ");
	for(i=0; i<=banyak; i++)
		puts(str[i]);
	return 0;
}
