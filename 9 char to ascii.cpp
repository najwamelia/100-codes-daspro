// Program untuk menemukan nilai ASCII dari suatu karakter
#include <stdio.h>
int main() 
{  
    char c;
    printf("Masukkan karakter: ");
    scanf("%c", &c);  // membaca input karakter
    
    // %d menunjukkan nilai integer dari karakter
    printf("\nNilai ASCII dari %c = %d", c, c);
    
    return 0;
}

