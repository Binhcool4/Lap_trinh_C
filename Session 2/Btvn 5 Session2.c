#include <stdio.h>
int main(){
	//Chieu dai, chieu rong hinh chu nhat
	int length = 4;
	int width = 3;
	
	//Tinh chu vi hinh chu nhat
	int Perimeter;
	Perimeter = 2 * (length + width); 
	printf ("Chu vi hinh chu nhat la %d", Perimeter);
	
	//Tinh dien tich hinh chu nhat 
	int Acreage;
	Acreage = length * width;
	printf ("\nDien tich hinh chu nhat la %d", Acreage);
	
	return 0;
}
