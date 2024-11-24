#include <stdio.h>
int main(){
	//Tao bien thang
	int month;
	printf ("Moi ban nhap thang : ");
	scanf ("%d", &month);
	
	//Tao dieu kien kiem tra thang
	switch(month){
		case 1:
			printf ("Thang nay co 31 ngay");
			break;
		case 2:
			printf ("Thang nay co 28-29 ngay");
			break;
		case 3:
			printf ("Thang nay co 31 ngay");
			break;
		case 4:
			printf ("Thang nay co 30 ngay");
			break;
		case 5:
			printf ("Thang nay co 31 ngay");
			break;
		case 6:
			printf ("Thang nay co 30 ngay");
			break;
		case 7:
			printf ("Thang nay co 31 ngay");
			break;
		case 8:
			printf ("Thang nay co 31 ngay");
			break;
		case 9:
			printf ("Thang nay co 30 ngay");
			break;
		case 10:
			printf ("Thang nay co 31 ngay");
			break;
		case 11:
			printf ("Thang nay co 30 ngay");
			break;
		case 12:
			printf ("Thang nay co 31 ngay");
			break;
		default:
			printf ("Thang khong hop le");	
		
	}
	
	return 0;
}
