#include <stdio.h>
int main(){
	float a, b, c;
	int option;
	
	do{
		printf("   \n Menu\n");
		printf("1. Nhap 3 so\n");
		printf("2. Tong 3 so\n");
		printf("3. Trung binh cong 3 so\n");
		printf("4. So nho nhat\n");
		printf("5. So lon nhat\n");
		printf("6. Thoat\n");
		
		printf("Lua chon cua ban la : ");
		scanf("%d", &option);
		
		switch(option){
			case 1:
				printf("Moi ban nhap so a : ");
				scanf("%f", &a);
				printf("Moi ban nhap so b : ");
				scanf("%f", &b);
				printf("Moi ban nhap so c : ");
				scanf("%f", &c);
				printf("So ban da nhap la %f %f %f", a, b, c);
				break;
			
			case 2:
				printf("Moi ban nhap so a : ");
				scanf("%f", &a);
				printf("Moi ban nhap so b : ");
				scanf("%f", &b);
				printf("Moi ban nhap so c : ");
				scanf("%f", &c);
				printf("Tong cua ba so %f, %f va %f la %f ", a, b, c, a+b+c);
				break;
			
			case 3:
				printf("Moi ban nhap so a : ");
				scanf("%f", &a);
				printf("Moi ban nhap so b : ");
				scanf("%f", &b);
				printf("Moi ban nhap so c : ");
				scanf("%f", &c);
				printf("Trung binh cong cua 3 so %f, %f va %f la %f ", a, b, c, (a+b+c)/3);
				break;
				
			case 4:
				printf("Moi ban nhap so a : ");
				scanf("%f", &a);
				printf("Moi ban nhap so b : ");
				scanf("%f", &b);
				printf("Moi ban nhap so c : ");
				scanf("%f", &c);
				if(a<b && a<c){
					printf("%.2f la so nho nhat ", a);
				}else if(b<a && b<c){
					printf("%.2f la so nho nhat ", b);
				}else{
					printf("%.2f la so nho nhat ", c);
				}
				break;
				
			case 5:
			printf("Moi ban nhap so a : ");
			scanf("%f", &a);
			printf("Moi ban nhap so b : ");
			scanf("%f", &b);
			printf("Moi ban nhap so c : ");
			scanf("%f", &c);
			if(a>b && a>c){
				printf("%.2f la so lon nhat ", a);
			}else if(b>a && b>c){
				printf("%.2f la so lon nhat ", b);
			}else{
				printf("%.2f la so lon nhat ", c);
			}
			break;
			
			case 6:
				printf("Ban da thoat khoi chuong trinh");
				break;
				
			default:
				printf("Lua chon khong hop le. ");
					
			
		}
		
	}while(option != 6);
	
	
	return 0;
}
