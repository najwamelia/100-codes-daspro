/*Program untuk menghilangkan spasi dari string. by: Najwa Amelia Q.A*/
#include  <stdio.h>
int main() {
    //deklarasi dan inisialisasi variables.
    char str[100], hilang[100];
    int i=0, j=0;
    printf("Masukkan string:\n");
    gets(str);  // menginputkan string ke variabel str
    // loop untuk menghilangkan spasi dari string
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            hilang[j++] = str[i];
        }    
        i++;
    }
    hilang[j] = '\0'; // string tanpa spasi di store ke variabel hilang
    // menampilkan hasil string tanpa spasi
    printf("\nString tanpa spasi:\n%s", hilang);
    return 0;
}
