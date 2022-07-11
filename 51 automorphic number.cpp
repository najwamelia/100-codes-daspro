/* Program untuk mengecek apakah suatu kuadrat bilangan diakhiri 
dengan angka yang sama dengan bilangan tsb. by: Najwa Amelia Q. A*/
#include<stdio.h>
int cek(int num); // fungsi prototype
int main() {
    int num, kuadrat;	// deklarasi variabel
    printf("Masukkan angka: ");
    scanf("%d",&num); // membaca input angka
    kuadrat = num * num;  
    printf("\n%d kuadrat = %d", num, kuadrat); // menampilkan hasil kuadrat
    // jika return fungsi cek benar, cetak:
    if(cek(num))
        printf("\n==> Bilangan Automorphic"); 
    else // jika salah
        printf("\n==> Bilangan Automorphic");
    return 0;
}
// fungsi untuk mengecek apakah bilangan automorphic atau bukan
int cek(int num) {
    int kuadrat = num * num;  
    while (num > 0) { // ketika num lebih dari 0, eksekusi:
        if (num % 10 != kuadrat % 10)
            return 0;
        num = num / 10;
        kuadrat = kuadrat / 10;
    }
    return 1;
}
