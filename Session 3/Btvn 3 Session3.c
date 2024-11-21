#include <stdio.h>
int main(){
	//Nhap ban kinh hinh tron
	float Pi = 3.14;
	int radius;
	printf ("Moi ban nhap ban binh hinh tron : ");
	scanf ("%d", &radius);
	
	//Tinh chu vi hinh tron
	float Perimeter;
	Perimeter = 2 * Pi * radius;
	printf ("Chu vi hinh tron la %.2f", Perimeter);
	
	//Tinh dien tich hinh tron
	float Acreage;
	Acreage = Pi * radius * radius;
	printf ("\nDien tich hinh tron la %.2f", Acreage);
	
	return 0;
}
