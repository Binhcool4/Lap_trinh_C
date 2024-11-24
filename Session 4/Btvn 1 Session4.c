#include <stdio.h>
int main(){
	//Tao mot bien
	int number;
	printf ("Moi ban nhap mot so bat ki : ");
	scanf ("%d", &number);
	
	//Tao dieu kien kiem tra xem so do la duong hay am
	if( number >= 0 ){
		printf (" Day la so duong !");
		
	}else{
		printf (" Day la so am !");
		
	}
	
	return 0;
}
