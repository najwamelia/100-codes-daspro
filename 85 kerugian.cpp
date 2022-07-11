// Program untuk menghitung persentase kerugian. by: Najwa Amelia Q.A
#include<stdio.h>                                                                                                                                                                                                                                                                                                                         
int main() {                                                                               
	double cost, sold, loss, loss_per;                                            
	printf("Masukkan modal: ");                                                
	scanf("%lf", &cost);                                                          
	printf("Masukkan laba kotor: ");                                                
	scanf("%lf", &sold);                                                          
	                                                                            
	loss = cost - sold;                                                           
	loss_per = ((loss *100)/cost);                                                
	printf("\nPersentase Kerugian ==> %.2f %%\n", loss_per);  
	return 0;                                 
}            
