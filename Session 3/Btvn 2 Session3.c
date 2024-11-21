#include <stdio.h>
int main(){
	//Tao bien Celsius
	int Celsius;
	printf ("Moi ban nhap nhiet do C : ");
	scanf ("%d", &Celsius);
	printf ("Nhiet do C la : %d C \n", Celsius);
	
	//Tao bien Fahrenheit
	int Fahrenheit;
	Fahrenheit = Celsius * 9/5 + 32;
	printf ("Nhiet do F la : %d F \n", Fahrenheit);
	
	
	return 0;
}
