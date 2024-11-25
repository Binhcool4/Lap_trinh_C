#include <stdio.h>
int main(){
	int i = 1;
	int b;
	printf("Nhap so nguyen duong b : ");
	scanf("%d", &b);
	
	if(b < 0){
		printf("So nguyen khong hop le !");
	}
	
	//Vong lap
	do{
		int total;
	    total = i * b;
		printf("Tong cua hai so la : %d \n", total);
		i++;
		
	}while(i<11);
	
	return 0;
}
