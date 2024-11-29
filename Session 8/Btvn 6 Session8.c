#include <stdio.h>
int main(){
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum = 0;
	int i; 
	for(i = 0;i<3;i++){
		printf("%d",array[i][i]);
		sum+=array[i][i]; 
	}
	
	printf("\nTong cua cac so trong duong cheo chinh la %d",sum); 
	
	return 0; 
} 
