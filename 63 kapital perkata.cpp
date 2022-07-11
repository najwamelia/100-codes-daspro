/*Program untuk . by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
	//deklarasi dan inisialisasi variables.
	char str[100]={0};	
	int i;
	printf("Masukkan string:\n");
	scanf("%[^\n]s",str); // menginputkan string ke variabel str
	// for loop untuk mengkapitalisasi huruf pertama pada kata 
	for(i=0; str[i]!='\0'; i++) {
		if(i==0) {	// jika huruf pertama lowercase
			if((str[i]>='a' && str[i]<='z'))
				str[i] = str[i]-32; //dikurang 32 untuk mengubahnya kapital
			continue;
		}
		// jika ada spasi, cek huruf selanjutnya
		if(str[i]==' ') {  
			++i;
			if(str[i]>='a' && str[i]<='z') {
				str[i]=str[i]-32;
				continue;
			}
		}
		else {
			// mengubah huruf kapital yang lain menjadi lowercase
			if(str[i]>='A' && str[i]<='Z')
				str[i] = str[i]+32; //dikurang 32 untuk mengubahnya lowercase
		}
	}
	// menampilkan hasil string setelah dikapitalisasi perkata
	printf("\nKapital di awal kata:\n%s",str);
	return 0;
}

