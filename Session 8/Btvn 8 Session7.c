#include <stdio.h>
int main(){
	int i, j;
	int m, n;
	printf("Moi ban nhap so mang va phan tu : ");
	scanf("%d %d", &m, &n);
	
	int array[m][n];
	
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("Nhap so phan tu trong hang thu %d va cot %d : ", i+1, j+1);
			scanf("%d", &array[i][j]);
		}
		
	}
	
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf(" %d ", array[i][j]);
		}
		
	}
	
	
	return 0;
}
