#include <stdio.h>
int main(){
	//Nhap bien nam
	int year;
	printf("Moi ban nhap nam : ");
	scanf("%d", &year);
	
	//Tao dieu kien de kiem tra co phai nam nhuan khong
	if(year % 4 == 0){
		printf("Day la nam nhuan !");
		
	}else{
		printf("Day khong phai nam nhuan !");
		
	}
	
	return 0;
}
