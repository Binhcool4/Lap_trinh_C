#include <stdio.h>
int main(){
	int array[5] = {2, 5, 4, 32, 6};
	int big = array[0];
	int small = array[0];
	int i;
	
	
	for(i = 1; i<5; i++){
		if(array[i] > big){
			big = array[i];
		}
		if(array[i] < small){
			small = array[i];
		}
	}
	
	printf("So lon nhat trong mang la : %d \n", big);
	printf("So nho nhat trong mang la : %d ", small);
	
	return 0;
}
