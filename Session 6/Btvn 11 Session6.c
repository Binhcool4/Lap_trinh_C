#include<stdio.h>
int main(){
	int i; 
	int number = 0;
	int n;
	int count = 0;
	int prime = 2;
	printf("Moi ban nhap so n nguyen to can in ra: ");
	scanf("%d",&n); 
	while(number<n){
		count = 0;
		for(i=1;i<=prime;i++){
			if(prime%i==0){
				count++; 
				}
			} 

		
		if(count==2){
			printf("So nguyen to la %d \n",prime); 
			number++; 
		} 
		 prime ++;
}
	
}
