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
	
	//Tao dieu kien de kiem tra so dien
	if(SoDien < 0){
		printf("Chi so ban ghi khong hop le");
		
	}else if(SoDien >= 0 && SoDien < 50){
		printf("Gia dien ban phai tra la 10.000d");
		
	}else if(SoDien >= 50 && SoDien < 100){
		printf("Gia dien ban phai tra la 15.000d");
		
	}else if(SoDien >= 100 && SoDien < 150){
		printf("Gia dien ban phai tra la 20.000d");
		
	}else if(SoDien >= 150 && SoDien < 200){
		printf("Gia dien ban phai tra la 25.000d");
		
	}else{
		printf("Gia dien ban phai tra la 30.000d");
		
	}

	
	
	return 0;
}
