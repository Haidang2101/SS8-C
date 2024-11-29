#include <stdio.h>
int main(){
	int array[5]={52, 31, 84, 2, 21};
	
	for (int i = 4; i >= 0; i--){
		printf("%d ", array[i]);
	}
	return 0;
}
