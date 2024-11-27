#include <stdio.h>
int main() {
    int array[] = {10, 20, 30, 40, 50}; 
    int length = sizeof(array) / sizeof(array[0]); 
    int i;
    
    printf("Cac phan tu trong mang : \n");
    for ( i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("Do dai cua mang la : %d\n", length);

    return 0;
}
