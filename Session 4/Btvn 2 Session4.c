#include <stdio.h>
int main(){
	//Nhap mot so nguyen 
	int number;
	printf ("Moi ban nhap so nguyen : ");
	scanf ("%d", &number);
	
	//Dieu kien tra xem do la so chan hay le
	if( number % 2 == 0){
		printf ("Day la so chan !");
		
	}else{
		printf ("Day la so le !");
		
	}
		
	return 0;
}
