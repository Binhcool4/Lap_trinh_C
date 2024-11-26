#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c; 
    float delta, X1, X2;


	printf("Nhap so thu nhat: ");
	scanf("%f", &a); 
	printf("Nhap so thu hai: ");
	scanf("%f", &b);	
	printf("Nhap so thu ba: ");
	scanf("%f", &c);
	
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo nghiem\n");
		}else{
			X1= -c / b;
			printf("Phuong trinh co nghiem: %f\n", X1);
		}
	}else{
		delta=b * b - 4 * a * c;
		if(delta < 0){
			printf("Phuong trinh vo nghiem\n");
		}else{
			X1=(-b+sqrt(delta)) / (2*a);
			X2=(-b-sqrt(delta)) / (2*a);
			printf("Phuong trinh co hai nghiem\n");
			printf("%.2f\n", X1);
			printf("%.2f\n", X2);	
		}
	}
}
