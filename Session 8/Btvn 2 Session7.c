#include <stdio.h>
int main(){
	int arr[5];
	int i;
	printf("Moi ban nhap lan luot 5 phan tu trong mang\n");
	
	for(i = 0; i < 5;i++ ){
		printf("Moi ban nhap phan tu thu %d : ", i+1);
		scanf("%d", &arr[i]);
		
	}
	
	printf("Mang da duoc nhap la :  \n");
	for(i = 0; i < 5; i++){
		printf("arr[%d] %d\n", i, arr[i]);
	}
	
	return 0;
}
