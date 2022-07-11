/* Program untuk menghilangkan huruf vokal dari suatu string. by: Najwa Amelia Q.A*/
#include <stdio.h>
#include <string.h>
int main() {
	// inisialisasi variable
	char str[100];
	int i, j, l=0;
	printf("Masukkan string: ");
	gets(str);	// menginputkan string ke variabel str
	l = strlen(str); // menghitung panjang string
	for(i=0; i<l; i++) {   
		// pengecekan huruf vokal kecil dan kapital
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
		// for loop untuk menghapus huruf vokal 
			for(j=i; j<l; j++) {
				str[j]=str[j+1];
			}
			l--;
		}
	}
	printf("\nString tanpa vokal: %s",str);
	return 0;	
}
