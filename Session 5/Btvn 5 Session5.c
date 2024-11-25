#include <stdio.h>

int main() {
	int i;
	int b;
    
    for ( i = 1; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
        
        for ( b = 1; b <= 10; b++) {
            int total;
    	    total = i * b;
            printf("%d x %d = %d\n", i, b, total);
        }
        
        printf("\n");
    }

    return 0;
}

