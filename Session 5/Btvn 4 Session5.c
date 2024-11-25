#include <stdio.h>
int main(){
	int i = 1;
	int b;
	printf("Nhap so nguyen duong b : ");
	scanf("%d", &b);
	
	if(b <= 0 || b >10){
		printf("So nguyen khong hop le !");
	}
	
	//Vong lap
	do{
		int total;
	    total = i * b;
		printf("%d * %d = %d \n", b, 1, total);
		i++;
		
	}while(i<=10);
	
	return 0;
}
