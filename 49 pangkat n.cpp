/* Program untuk menghitung pangkat suatu bilangan. by: Najwa Amelia Q. A.*/
#include<stdio.h> 
int main() {
	int num, n, expo, temp = 1; //deklarasi dan inisialisasi variabel
	printf("Masukkan angka basis: ");
	scanf("%d", &num);	// membaca input angka yang akan dipangkatkan
	printf("Masukkan angka eksponen (n): ");
	scanf("%d", &n);	// membaca input pangkat
	// while loop saat pangkat tidak sama dengan 0
	while (n != 0) {
		temp = temp * num;
	--n;
}
    printf("\n%d pangkat n adalah => %d", num, temp);
    return 0;
}
