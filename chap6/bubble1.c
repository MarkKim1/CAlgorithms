#include<stdio.h>
#include<stdlib.h>
//#define swap (int,int x,int y) do { arr = x; x = y; y = t; } while(0) 
// type 은 int,string 등을 얘기 하는것이다.

void change(int* x, int* y)
{
   int temp = *x;
    *x = *y; 
    *y = temp;
}

void bubble(int a[], int n)
{
  int i,j,k=0;
  for(i = 0; i < n-1; i++)
  {
    for(j = i; j < n-1; j++)
    {
      if(a[j] >= a[j+1])
      {
        //printf("%d -- %d",a[j])
        change(&a[j],&a[j+1]);
        k++;
      }
    }
     k = 0;
  }
}

int main ()
{
  int i,nx;
  int *x;

  puts("버블 정렬");
  printf("요소 개수 : ");
  scanf("%d", &nx);
  x = calloc(nx,sizeof(int));

  for(i = 0; i < nx; i++)
  {
    printf("x[%d] : ", i);
    scanf("%d", &x[i]);

  }

  bubble(x,nx);

  puts("오름차순으로 정렬했습니다.");
  for(i = 0; i < nx; i++)
    printf("x[%d] = %d\n", i,x[i]);

    free(x);

    return 0;


}