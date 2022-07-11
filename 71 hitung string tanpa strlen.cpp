/*Program untuk menghitung panjang string tanpa strlen. by: Najwa Amelia Q.A*/
#include <stdio.h>
int main() {
	// deklarasi variabel
    char str[100], i;	
    printf("Tulis string: \n");
    scanf("%s", str);	// menginputkan string
    // menghitung panjang string dan distore ke i
    for(i=0; str[i]!='\0'; ++i);	// '\0' = akhir dari string
       printf("\nPanjang dari string: %d", i); // menampilkan hasil
    return 0;
}
