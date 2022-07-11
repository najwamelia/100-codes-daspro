// Program untuk menampilkan Deret Fibonacci by: Najwa Amelia Q. A
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1; // deklarasi variabel	
	int next = t1 + t2; 	 // inisialisasi variabel
    printf("Banyak suku deret Fibonacci yang ditampilkan: ");
    scanf("%d", &n);	// menginput bilangan banyaknya suku
    printf("\nDeret Fibonacci: %d, %d, ", t1, t2); // menampilkan deret
	// loop for untuk menentukan suku berikutnya pada deret fibonacci
    for (i = 3; i <= n; ++i) {
        printf("%d, ", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    return 0;
}

