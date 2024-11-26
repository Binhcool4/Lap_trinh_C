#include<stdio.h>
int main(){
	int number;
	int i;
	printf("Moi ban nhap vao so nguyen bat ki: ");
	scanf("%d", &number);
	for(i = 1;i <= number;i++){
		if(number % i == 0){
			printf("Tat ca uoc cua so %d la %d\n",number,i);
	}
		}
		return 0;
	}
	

