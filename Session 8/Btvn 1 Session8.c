#include <stdio.h>
int main(){
	int i;
    int array[5] = {10, 20, 30, 40, 50};
    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    
    for( i = sizeof(array) / sizeof(int) - 1; i >= 0; i--){
        printf("%d ", array[i]);
    }
}

