#include <stdio.h>
#include <stdlib.h>
int main () {
	int test_case;
	int n,k;
	int count  = 0, j = 0, i = 0, all_moved = 0,result = 0,row = 0,col = 0,max = 0;                                                               
	scanf("%d", &test_case);
	scanf("%d %d", &n,&k);
	//int *c = (int*)malloc(n*n*sizeof(int));
	int c[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &c[i][j]);
		}
	}
			
	while(1){
		all_moved++;
		printf("c[%d][%d] %d ",i,j,row);
		if(c[i][j] == '1'){
			count++;
		}
		
		j++;
		row++;
		
		if(all_moved == k*k){
			printf("\n");
			i = 0;
			all_moved = 0;
			row = 0;
			result++;
			if(count > max){
				max = count;
			}
			if(j == n-1){
				
				printf("asdfasdfasf");
				col++;
				i = col;
				result = 0;
				break;
			}
			
		}
		if(row == k){
			i++;
			j = result;
			row = 0;
			printf("\n");
		}
		if(i == n-1 && j == n-1){
			break;
		}
		
	}
	
}