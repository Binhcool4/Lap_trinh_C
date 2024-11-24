#include <stdio.h>
int main(){
	// Tao bien chi so cu, chi so moi va so dien
	int chisoCu;
	printf("Moi ban nhap so cong to cu : ");
	scanf("%d", &chisoCu);
	
	int chisoMoi;
	printf("Moi ban nhap so cong to moi : ");
	scanf("%d", &chisoMoi);
	
	int SoDien;
	SoDien = chisoMoi - chisoCu;
	
	double cost;
	
	//Tao dieu kien de kiem tra so dien
	if(SoDien < 50){
		cost = SoDien * 10000;
		
	}else if(SoDien < 100){
		cost = SoDien * 15000;
		
	}else if(SoDien < 150){
		cost = SoDien * 20000;
		
	}else if(SoDien < 200){
		cost = SoDien * 25000;

			
	}else{
		cost = SoDien * 30000;
		
	}
	printf("Tong tien dien: %.0f VND", cost);

	
	
	return 0;
}
