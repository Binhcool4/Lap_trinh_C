#include <stdio.h>
int main(){
	//Nhap cac so nguyen
	int fistNum;
	printf ("Moi ban nhap so thu nhat : ");
	scanf ("%d", &fistNum);
	
	int secondNum;
	printf ("Moi ban nhap so thu hai : ");
	scanf ("%d", &secondNum);
	
	int thirdNum;
	printf ("Moi ban nhap so thu ba : ");
	scanf ("%d", &thirdNum);
	
	//Tao dieu kien de kiem tra so thu ba co nam trong so thu nhat va thu hai khong
	if(thirdNum > fistNum && thirdNum < secondNum || thirdNum < fistNum && thirdNum > secondNum){
		printf ("So %d co nam trong khoang cua so %d va %d ", thirdNum, fistNum, secondNum);
		
	}else{
		printf("So %d khong nam trong khoang cua so %d va %d ", thirdNum, fistNum, secondNum);
		
	}
	
	return 0;
}
