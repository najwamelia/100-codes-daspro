// Program untuk menghitung persentase keuntungan. by: Najwa Amelia Q.A
#include<stdio.h>                                                             
                                                                                                                                                                                                                                                                          
int main() {                                                                               
	double cost, sold, profit, profit_per;                                        
	printf("Masukkan modal: ");                                                
	scanf("%lf", &cost);                                                          
	printf("Masukkan laba kotor: ");                                                
	scanf("%lf", &sold);                                                          
	                                                                            
	profit = sold - cost;                                                         
	profit_per = ((profit *100)/cost);                                            
	printf("\nPersentase Keuntungan ==> %.2f %%\n", profit_per);                               
	return 0;
}  
