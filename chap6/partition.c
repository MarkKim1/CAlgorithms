#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
  int *temp;
  temp = x;
  x = y;
  y = temp;
}

void partition(int a[], int n)
{
  int i;
  int pl = 0; //왼쪽 커서 
  int pr = n -1; // 오른쪽 커서
  int x = a[n/2]; // 피벗은 가운데 요소를 선택합니다.

  do{
    while(a[pl] < x) pl++;
    while(a[pr] > x) pr++;
    if(pl <= pr)
    {
      swap(&a[pl],&a[pr]);
      pl++;
      pr--;
    }
  }while(pl <= pr);
  printf("피벗의 값은 %d입니다.\n", x);
  printf("피벗 이하의 그룹\n");
  for(int i = 0; i <= pl-1; i++)
  {
     printf("%d ", a[i]);
  }

}

int main ()
{
  int i,nx;
  int *x;
  puts("배열을 나눕니다. ");
  printf("요소의 개수 :");
  scanf("%d",&nx);
  x = calloc(nx,sizeof(int));
  for(int i = 0; i < nx; i++){
    printf("x[%d]", x[i]);
    scanf("%d", &x[i]);
  }

  partition(x,nx);
  free(x);
  
}