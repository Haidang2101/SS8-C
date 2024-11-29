#include <stdio.h>
int main(){
	int array[3][3]={
	{23, 6, 1},
	{45, 13, 25},
	{35, 17, 2}
	};
	int tong=0;
	printf("cac phan tu tren duong cheo la: ");
	for(int i = 0; i < 3; i++){
			printf("%d ", array[i][i]);
			tong += array[i][i];
	}
	printf("\ntong: %d", tong);
	return 0;
}
