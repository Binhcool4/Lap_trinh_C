#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		printf("%d\n",i);
		if(i % 3 == 0 && i % 5 !=0){
			printf("Fizz\n"); 
		}		
		if(i % 5 == 0 && i % 3 !=0){
			printf("Buzz\n"); 
		} 

		if(i % 3 == 0 && i % 5 == 0){
			printf("FizzBuzz\n"); 
		
	} 
}
	return 0; 
} 
