#include <stdio.h>
int main(){
	int array[3][5]={
	{35, 51, 2, 7, 13},
	{1, 16, 11, 46, 5},
	{27, 12, 8, 17, 6}
	};
	int tong=0;
	//bien trai + bien phai
	for(int i = 0; i < 3; i++){
		tong += array[i][0];//trai
		tong += array[i][4];//phai
	}
	//bien tren + bien duoi
	for(int i = 1; i < 4; i++){
		tong += array[0][i];//tren
		tong += array[2][i];//duoi
	}
	
	printf("%d", tong);
	return 0;
}
