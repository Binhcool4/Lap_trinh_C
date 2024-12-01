#include<stdio.h>
int main(){
    int array[100];
    int n;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    int i;
    
    for (i = 0; i < n; i++) {
        printf("Vi tri cua phan tu %d la: ", i);
        scanf("%d", &array[i]);
	}
	
    int deleteIndex;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &deleteIndex);
    for ( i = deleteIndex; i < n - 1; i++) {
        array[i] = array[i + 1]; 
    }
    n--;
    printf("Mang sau khi xoa phan tu la:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

