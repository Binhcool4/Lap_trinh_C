#include <stdio.h>
int main(){
	int answer;
	int password = 2006;
	do{
		printf("Moi ban nhap mat khau : ");
		scanf("%d", &answer);
		if(answer == 2006){
			printf("Mat khau chinh xac ! ");
			
		}else{
			printf("Sai mat khau ! \n");
			printf("\n");
		}
		
	}while(answer != 2006);
	
	
	return 0;
}
