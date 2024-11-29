#include <stdio.h>
int main() {
    int array[3][3] = {{1, 2, 5}, {2, 4, 7}, {6, 8, 9}};
    int n = 3;
    int sum = 0;
    int i;
    
    printf("Cac phan tu tren duong cheo phu la: ");
    
    for(i = 0; i < n; i++){
        printf("%d ", array[i][n-1-i]);
        sum += array[i][n-1-i];
    }
    printf("\n");
    printf("Tong cua cac phan tu tren duong cheo phu la: %d", sum);
    
    return 0;
}

