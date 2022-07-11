// Program untuk menentukan huruf Vokal atau Konsonan
#include <stdio.h>
int main() {
    char c; // mendeklarasikan variabel
    int vokal, vokalKapital;
    printf("Masukkan sebuah huruf alfabet: ");
    scanf("%c", &c); // menginputkan huruf
    
    // mengevaluasi untuk c adalah huruf vokal kapital
    vokalKapital = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    // mengevaluasi untuk c adalah huruf kecil vokal
    vokal = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // jika c adalah vokal, eksekusi (true)
    if (vokal || vokalKapital)
        printf("%c adalah huruf Vokal.", c);
    else
        printf("%c adalah huruf Konsonan.", c);
    return 0;
}

