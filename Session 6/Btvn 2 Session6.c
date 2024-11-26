#include <stdio.h>
int main(){
	int a,b,c,d,e;
	int even = 0; //Chan
	int odd = 0; //Le
	
	printf("Moi ban nhap thu nhat : ");
	scanf("%d", &a);
	printf("Moi ban nhap thu hai : ");
	scanf("%d", &b);
	printf("Moi ban nhap thu ba : ");
	scanf("%d", &c);
	printf("Moi ban nhap thu tu : ");
	scanf("%d", &d);
	printf("Moi ban nhap thu nam : ");
	scanf("%d", &e);
	
	if(a % 2 == 0){
		even++;
	}else{
		odd++;
	}
	
	if(b % 2 == 0){
		even++;
	}else{
		odd++;
	}
	
	if(c % 2 == 0){
		even++;
	}else{
		odd++;
	}
	
	if(d % 2 == 0){
		even++;
	}else{
		odd++;
	}
	
	if(e % 2 == 0){
		even++;
	}else{
		odd++;
	}
	
	printf("So luong chan trong day la : %d \n", even);
	printf("So luong le trong day la : %d", odd);
	
	
	return 0;
}
