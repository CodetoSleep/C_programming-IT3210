#include <stdio.h>
void inbang(int add){
    int mul = 1;
	for (int i = 1; i <= 9; i++){
		for (int j = add; j <= add + 2; j++){
			printf("| %d x %d = %-2d ", j, mul, j * mul);
		}
		printf("|\n");
		mul++;	
	}
    printf("----------------------------------------\n");
}
int main(){
    printf("-------------BANG CUU CHUONG-------------\n");
	printf("========================================\n");
	int add = 1;
	int mul = 1;
	inbang(1);
    inbang(4);
    inbang(7);
    printf("========================================\n");
	return 0;
}
