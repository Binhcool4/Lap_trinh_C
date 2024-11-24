#include <stdio.h>
int main(){
	//Nhap so nguyen
	int number;
	printf ("Moi ban nhap so nguyen : ");
	scanf ("%d", &number);
	
	if(number % 3==0 && number % 5==0){
		printf ("So %d nay chia het cho ca 3 va 5", number);
		
	}else if(number % 3 == 0){
		printf ("So %d nay chia het cho 3", number);
		
	}else if(number % 5 == 0){
		printf ("So %d nay chia het cho 5", number);
		
	}else{
		printf ("So nguyen nay khong chia het cho 3 va 5");
		
	}	
	
	return 0;
}
