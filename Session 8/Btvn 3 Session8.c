#include <stdio.h>
int main() {
    int number;
    int i;
    int j;
    
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &number);
    
    int array[number][number];
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", number, number);
    for( i = 0; i < number; i++){
        for ( j = 0; j < number; j++){
            printf("Nhap phan tu tai [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Ma tran vuong:\n");
    for( i = 0; i < number; i++){
        for ( j = 0; j < number; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

