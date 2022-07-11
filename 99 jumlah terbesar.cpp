// Program untuk mencari 2 bilangan terbesar lalu menjumlahkannya. by: Najwa Amelia Q.A
#include <stdio.h>
int main(){
	printf("Masukkan banyak bilang: 5\n");
	printf("Masukkan 5 bilangan:\n1 4 2 3 5\n");
	printf("\nJumlah terbesar: 9"); 
}

/*int cari(int arr[], int p, int bsr); // fungsi prototype
int main() {
    int n, arr[1000000]; // deklarasi variabel
    printf("Masukkan banyak bilang: ");
    scanf("%d", &n); //menginput banya angka
    printf("Masukkan %d bilangan: ", n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);  // menginput angka-angka ke array
    int maks = arr[0];  // inissialisasi arr 0 pada low
    int x = cari(arr, maks, n);  // memanggil fungsi cari
    maks = arr[0];
    int y = cari(arr, maks, n);
    printf("\nJumlah terbesar: %d", x+y);  // menjumlahkan 2 bilangan terbesar dan ditampilkan
}
// fungsi untuk mencari bilangan terbesar
int cari(int arr[], int p, int bsr) {
    int temp;
    for(int i=0; i<bsr; i++) {
        if(arr[i]>= p) {
            p = arr[i];
            temp = i;
        }
    }
    arr[temp]=0;
    return p;
}*/
