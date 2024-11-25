#include <stdio.h>
int main() {
    int i = 1;
    int b;
    int sum = 0; 

    printf("Nhap so nguyen duong b : ");
    scanf("%d", &b);
    
    if (b <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;  
    }

    //Vong lap
    do {
        sum = sum + i;  
        i++;        
    } while (i <= b);  
    
   
    printf("Tong cua cac so tu 1 den %d la: %d\n", b, sum);

    return 0;
}

