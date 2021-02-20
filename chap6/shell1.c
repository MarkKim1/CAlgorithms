#include<stdio.h>
#include<stdlib.h>
// Best-case -> nlogn //Avg -> nlog^2n //worst -> n^2
//not stable 
void shell(int a[],int n)
{
  int i,j,h;
  int count = 0;
  for(h=n/2; h > 0; h/=2)
  {
    for(i = h; i < n; i++)
    {
     int tmp = a[i];
     //int count = 0;
     printf("tmp = %d\n", tmp);
     for(j = i-h; j>= 0 && a[j] > tmp; j-=h)
     {
       a[j+h] = a[j];
       printf("a[%d+%d] = a[%d]\n",j,h,j);
       count++;
       printf("count = %d\n",count);
     }
     a[j+h] = tmp;
     printf("a[%d+%d] = %d\n",j,h,tmp); 
    }
  }
}

int main (){

int i,nx;
int *x;
puts("셸 정렬");
printf("요수 갯수: ");
scanf("%d", &nx);
x = calloc(nx,sizeof(int));

for(i = 0; i < nx; i++)
{
  printf("x[%d]",i);
  scanf("%d",&x[i]);
}
shell(x,nx);
puts("오름차순으로 정렬했습니다.");
for(i = 0; i < nx; i++)
{
  printf("x[%d] = %d\n",i,x[i]);
}
free(x);
return 0;
}