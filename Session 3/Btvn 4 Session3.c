#include <stdio.h>
int main(){
	//Nhap diem toan. van. anh
	float Math;
	printf (" Moi ban nhap diem Toan : ");
	scanf ("%f", &Math);
	
	float Literature;
	printf (" Moi ban nhap diem mon Van : ");
	scanf ("%f", &Literature);
	
	float English;
	printf (" Moi ban nhap diem mon Anh : ");
	scanf ("%f", &English);
	
	//Tinh diem cong
	float total;
	total = Math + Literature + English;
	printf (" Tong diem cua ba mon la : %.2f \n", total);
	
	//Tinh diem trung binh
	float average;
	average = (Math + Literature + English) / 3;
	printf (" Diem trung binh cua ba mon la : %.2f", average);
	
	return 0;
}
