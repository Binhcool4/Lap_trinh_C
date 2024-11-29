#include <stdio.h>
int main(){
	int i;
	int j;
    int array[4][4] = {{2, 4, 6, 8},{4, 6, 8, 10},{3, 7, 9, 5}};
    int big = array[0][0];

    for( i = 0; i < 4; i++){
    	for(j = 0; j<4; j++){
    		if(array[i][j] > big){
                big = array[i][j];
            }
		}
	}
    
    
    printf("Phan tu lon nhat trong mang la: %d\n", big);
    
    return 0;
}

