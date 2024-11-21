#include <stdio.h>
int main(){
	//Nhap do dai canh va chieu cao tam giac
	
	//Nhap canh
	float length;
	printf ("Moi ban nhap do dai canh tam giac : ");
	scanf ("%f", &length);
	
	//Nhap chieu cao
	float height;
	printf ("Moi ban nhap chieu cao tam giac : ");
	scanf ("%f", &height);
	
	//Tinh dien tich tam giac
	float acreage;
	acreage = (length * height) / 2;
	printf ("Dien tich tam giac la : %.2f", acreage);
	
	
	return 0;
}
