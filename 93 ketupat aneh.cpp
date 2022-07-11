/* Program untuk menampilkan belah ketupat dengan karater * dan -. by: Najwa Amelia Q. A*/
#include <stdio.h>
int main() {
	// deklarasi variabel
    int x, y, brs;
    int ast, grs; 
    printf("Masukkan jumlah kolom belah ketupat hingga tengah: ");
    // input=angka yang merupakan jumlah kolom belah ketupat hingga ke tengahnya
    scanf("%d", &brs); 
    // inisialisasi * dan -
    ast = 1;
    grs = brs-1;
    
    if(brs > 25)  // jika input lebih dari 25, stop
        return 0;
    else {	// jika input tidak melebihi batas 25, eksekusi:
    	// loop untuk menampilkan * dan -
    	for(x=1; x<brs*2; x++) {
	        for(y=1; y<=grs; y++)
	            printf(" ");	// cetak spasi 
	        
	        if(brs&1) { 
	           for(y=1; y<ast*2; y++) {
		            if (y&1)
		                printf("*"); 
		            else
		                printf("-"); 
	            } 
	        }
	        else {
	        for(y=1; y<ast*2; y++) {
	            if (y&1)
	                printf("-"); 
	            else
	                printf("*"); 
	            }
	        }
	        printf("\n");
	        
	        if(x<brs) {
	            grs--;
	            ast++;
	        }
	        else {
	            grs++;
	            ast--;
	        }
	    }
    }
    return 0;
}
