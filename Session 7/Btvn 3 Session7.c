#include <stdio.h>
int main(){
	int array[5];
	int i;
	int count = 0;
	printf("Moi ban nhap lan luot 5 phan tu trong mang\n");
	for(i = 0; i < 5;i++ ){
		printf("Moi ban nhap phan tu thu %d : ", i+1);
		scanf("%d", &array[i]);
		
	}
	printf("\n");
	printf("Ket qua\n");
	for(i = 0; i < 5;i++ ){
		if(array[i]%2==0){
			printf("%d la so chan\n", array[i]);
			count++;
		}
		
	}
	if(count == 0){
		printf("Khong co so chan !");
	}
	
	
	return 0;
}
