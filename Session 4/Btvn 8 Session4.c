#include <stdio.h>
int main(){
	//Nhap cac canh cua tam giac
	int canh1;
	printf("Moi ban nhap canh dau tien : ");
	scanf("%d", &canh1);
	
	int canh2;
	printf("Moi ban nhap canh thu hai : ");
	scanf("%d", &canh2);
	
	int canh3;
	printf("Moi ban nhap canh thu ba : ");
	scanf("%d", &canh3);
	
	//Tao dieu kien de kiem tra co phai 3 canh tam giac khong
	if(canh1 + canh2 > canh3 && canh1 + canh3 > canh2 && canh2 + canh3 > canh1){
		printf("Day la 3 canh cua tam giac");
		
	}else{
		printf("Day khong phai 3 canh cua tam giac");
		
	}
	
	return 0;
}
