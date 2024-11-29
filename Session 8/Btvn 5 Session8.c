#include <stdio.h>
int main() {
	int i;
	int j;
	
    int array[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    
    int sum = 0;
    int a = 3;
    
    for (i = 0; i < a; i++) {
        sum += array[0][i];
        sum += array[a-1][i];
    }
    for (j = 1; j < a - 1; j++) {
        sum += array[j][0];
        sum += array[j][a-1];
    }
    
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    
    return 0;
}


