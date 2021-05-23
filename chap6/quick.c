#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{ type t = x; x = y; y = t;}while(0)

void quick(int a[], int n)
{
	int left = 0;
	int right = n-1;
	int pl = left;
	int pr = right;
	int x = a[(pl+pr) / 2];
	
	int i;
	printf("a[%d] ~ a[%d]: {", left, right);
	for(i = left; i < right; i++)
	{
		printf("%d", a[i]);
	}
	printf("%d}\n", a[right]);
	
	do{
		while(a[pl] < x) pl++;
		while(a[pr] > x) pr--;
		if(pl <= pr){
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	}while(pl <= pr);
	if(left < pr) quick(a,n-1-pr);
	if(pl < right) quick(a,n-1-pl);
}

	int main (){
	int i,nx;
	int *x;
	puts("퀵 정렬");
	printf("요소 개수");
	scanf("%d", &nx);
	x = calloc(nx,sizeof(int));
	for(i = 0; i < nx; i++)
	{
		printf("x[%d]", i);
		scanf("%d",&x[i]);
	}
	quick(x,nx);
	puts("오름차순으로 정렬했습니다.");
	for(i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);


return 0;
}