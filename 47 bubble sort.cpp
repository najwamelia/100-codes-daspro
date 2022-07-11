/* Program untuk mengurutkan bilangan dengan bubble sort. by: Najwa Amelia Q.A*/
#include <stdio.h>
//fungsi void bubbleSort menerima inputan arr dan n bertipe integer.
void bubbleSort(int arr[], int n) {
	int i, j, tmp;
	for(i = 0; i < n; i++) {
		// perulangan dan tmp untuk variable penukaran sementara
		for(j=0; j < n-i-1; j ++) {
			if(arr[j] > arr[j+1]) { 
    			tmp = arr[j];
        		arr[j] = arr[j+1];
        		arr[j+1] = tmp;
      		}
    	}
  	}
}
int main() {
	int array[100], n, i, j; //deklarasi variable array, n, i dan j bertipe integer.
	printf("Banyak data angka: ");
	scanf("%d", &n);	// membaca input jumlah banyak elemen
	printf("Masukkan nilai: \n");
	for(i = 0; i < n; i++) {
    	scanf("%d", &array[i]);	// menginputkan bilangan-bilangan ke dalam array
	}
	bubbleSort(array, n); //memanggil fungsi bubbleSort
	// menampilkan hasil pengurutan bilangan 
	printf("\nHasil pengurutan:\n");
	for(i = 0; i < n; i++) {
    	printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
