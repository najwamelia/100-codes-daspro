/* Program untuk membalik inputan angka, yang awal di akhir dan sebaliknya.
by: Najwa Amelia Q. A.*/
#include <stdio.h>
int reverse(int arrRev[], int n);	// fungsi prototype
int main() {
	int n;	// deklarasi variabel
	printf("Banyak angka: ");
	scanf("%d", &n);	// membaca banyak angka yang akan diinput
	
	int arr[n];	// deklarasi array
	// untuk banyak input yang tidak melebihi batas n
	for (int i=0; i<n; i++) {
		scanf("%d", &arr[i]);	// membaca input angka dan di simpan di array arr
	}
	printf("\nSetelah direverse:\n");
	reverse(arr, n);	// memanggil fungsi reverse
	return 0;
}
//fungsi reverse untuk membalik angka yang awal menjadi di akhir, dan sebaliknya
int reverse(int arrRev[], int n) {
	for (int i=(n-1); i>=0; i--)
		printf("%d ", arrRev[i]);
}
