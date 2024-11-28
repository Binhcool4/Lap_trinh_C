#include <stdio.h>
int main(){
    int n;
    int i;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int array[n];
    
    printf("Nhap cac phan tu cua mang (chi nhap so le):\n");
    for ( i = 0; i < n; i++){
        do {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &array[i]);
            
            if(array[i] % 2 == 0){
                printf("Gia tri khong hop le! Vui long nhap lai so le.\n");
            }
        }while(array[i] % 2 == 0);
    }
    
    printf("\n");
    printf("Cac phan tu trong mang la:\n");
    for (i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    return 0;
}

