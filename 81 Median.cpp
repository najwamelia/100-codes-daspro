/* Program untuk mencari median. by: Najwa Amelia Q.A*/
#include<stdio.h>                                                                             
int main() {
	// deklarasi variabel                                                                       
	int a[10], i, j, n;                                                  
	float median, temp;    
	// menginputkan banyak angka yang akan diinput      
	printf("Masukkan banyak nilai: ");
	scanf("%d", &n);                                                                                                                      
	// menginputkan nilai-nilai ke array                                                
	printf("Tulis %d nilai: \n", n);                                               
	for(i=0; i<n; i++)                                                             
		scanf("%d", &a[i]);                                                            
	// mengurutkan nilai dari terkecil ke terbesar                                                                   
	for(i=0;i<n-1;i++) {                                                                              
		for(j=0; j<n-i-1; j++) {                                                                            
			if(a[j]<a[j+1]) {                                                                           
				temp = a[j];                                                               
				a[j] = a[j+1];                                                             
				a[j+1] = temp;                                                             
			}                                                                           
		}
	}
	// menghitung median                                                       
	if( n%2 == 0)                                                                  
		median = (a[(n/2)-1]+a[(n/2)])/2.0;                                           
	else                                                                           
		median = a[(n/2)];                                                                                                                                      
	// menampilkan hasil                                                                                                                                                                                                  
	printf("\nMedian = %.1f\n", median);         
	return 0;                                   
}
