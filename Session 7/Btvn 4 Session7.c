#include <stdio.h>
int main(){
	int n;
	int i;
	
	printf("Nhap so phan tu cua mang : ");
	scanf("%d", &n);
	
	int array[n];
	
	for(i = 0; i<n; i++){
		printf("Moi ban nhap phan tu thu %d : ",i+1);
		scanf("%d", &array[i]);
		
	}
	
	printf("\n");
	printf("Cac phan tu trong mang la:\n");
    for ( i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
	return 0;
}
