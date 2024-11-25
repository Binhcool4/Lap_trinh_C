#include <stdio.h>
int main(){
	int i = 1;
	int b;
	printf("Nhap so nguyen duong b : ");
	scanf("%d", &b);
	
	
	
	do{
		int total;
	    total = i + b;
		printf("Tong cua hai so la : %d \n", total);
		i++;
		
	}while(i<b);
	
	return 0;
}
