#include <stdio.h>
int main(){
	int i ;
	int b;
	printf("Moi ban nhap so cua b : ");
	scanf("%d", &b);
	for(i = b; i>0; i--){
		if(i == 44){
			break;
			
		}
		printf("%d \n", i);
	}

	
	return 0;
}
