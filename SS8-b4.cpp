#include <stdio.h>
int main(){
	int array[3][5]={
	{35, 51, 2, 7, 13},
	{1, 16, 11, 46, 5},
	{27, 12, 8, 17, 6}
	};
	int max=array[0][0];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			if(max<array[i][j]){
				max=array[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d", max);
	return 0;
}
