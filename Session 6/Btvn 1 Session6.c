#include<stdio.h>
int main(){
    int a, b, c, d, e;
    int i;
    int sum = 0;  
    
    printf("Moi ban nhap vao so a:");
    scanf("%d", &a); 
    printf("Moi ban nhap vao so b:");
    scanf("%d", &b); 
    printf("Moi ban nhap vao so c:");
    scanf("%d", &c); 
    printf("Moi ban nhap vao so d:");
    scanf("%d", &d); 
    printf("Moi ban nhap vao so e:");
    scanf("%d", &e);

    if(a % 2 != 0){  
        sum += a; 
    }
    if(b % 2 != 0){  
        sum += b; 
    }
    if(c % 2 != 0){  
        sum += c;
    }
    if(d % 2 != 0){  
        sum += d; 
    }
    if(e % 2 != 0){  
        sum += e; 
    }

    printf("Tong cua cac so le la %d", sum); 
    return 0; 
}

