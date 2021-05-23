void quick(int a[], int left, int right)
{
	IntStack lstack;
	IntStack rstack;
	
	Initialize(&lstack, right-left+1);
	Initialize(&rstack, right - left+1);
	
	Push(&lstack, left);
	Push(&rstack, right);
	
	while(!isEmpty(&lstack))
	{
		int pl = (Pop(&lstack,&left), left);
		int pr = (Pop(&rstack, &right), right);
		int x = a[(left + right) / 2];
		do{
		while(a[pl] < x) pl++;
		while(a[pr] > x) pr--;
		if(pl <= pr)
		{
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
			}
		}while(pl <= pr);
		
		if(left < pr) {
			Push(&lstack, left);
			Push(&rstack, pr);
		}
		if(pl < right){
			Push(&lstack, pl);
			Push(&rstack, right);
		}
		Terminate(&lstack);
		Terminate(&rstack);
	}
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