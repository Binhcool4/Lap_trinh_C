#include <stdio.h>
int main(){
	int i ;
	int b;
	printf("Moi ban nhap so cua b : ");
	scanf("%d", &b);
	
    if (b < 44) {
        printf("Gia tri nhap vao phai lon hon hoac bang 44.\n");
        return 1; 
    }

    for (i = b; i > 0; i--) {
        if (i == 44) {
            break;
        }
        printf("%d \n", i);
    }

    return 0;
}

