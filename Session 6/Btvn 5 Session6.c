#include <stdio.h>
int main(){
	int month;
	int year;
	
	do{
		printf("Moi ban nhap thang : ");
		scanf("%d", &month);
		printf("Moi ban nhap nam : ");
		scanf("%d", &year);
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("So ngay cua thang %d va nam %d la 31", month, year);
				break;
			
			case 2:
				if(year%4 == 0 && year%100 != 0 || year%400 == 0){
					printf("So ngay cua thang 2 va nam %d la 29", year);
					break;
				}
				
				printf("So ngay cua thang 2 va nam %d la 28", year);
				break;
			
			case 4: case 6: case 9: case 11: 
				printf("So ngay cua thang %d va nam %d la 30", month, year);
				break;
				
				
			default:
				printf("Lua chon khong hop ly ! . Vui long chon lai. ");
		}
		printf("\n");
		printf("\n");
			
	}while(month != 12);
	
	
	return 0;
}
