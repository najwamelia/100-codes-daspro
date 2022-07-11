// Program untuk mencari akar kuadrat persamaan by: Najwa Amelia Q. A
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, d, akar1, akar2, realPart, imagPart; // deklarasi variabel
    printf("Masukkan koefisien a, b dan c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c; // definisi dari diskriminan
    // jika akar kuadrat real dan keduanya tidak sama
    if (d > 0) {
        akar1 = (-b + sqrt(d)) / (2 * a);
        akar2 = (-b - sqrt(d)) / (2 * a);
        printf("\nakar1 = %.2lf dan akar2 = %.2lf", akar1, akar2);
    }
    // jika akar kuadrat real dan keduanya sama
    else if (d == 0) {
        akar1 = akar2 = -b / (2 * a);
        printf("\nakar1 = akar2 = %.2lf;", akar1);
    }
    // jika akar kuadrat tidak real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("\nakar1 = %.2lf+%.2lfi dan akar2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    } 
    return 0;
} 

