#include<stdio.h>
#include<stdlib.h>
int counter = 0;
int i,nx,ky,idy;


int bin_search( int a[],int n, int key,int idx[])
{
  int pl = 0;
  int pr = n-1;
  int pc;
  int flag = 0;

    for(int i = 0; i <nx; i++)
    {
      if(a[i] == key)
      {
        idx[counter] = i;
        counter++;
      }
      else if(i == nx-1 && counter == 0)
      {
        flag = -1;
        return flag;
      }
    }
  return *idx;

}

int main (){
int *x,*y;

puts("Binary search");

printf("how many: ");

scanf("%d",&nx);

x = calloc(nx,sizeof(int));
y = calloc(counter,sizeof(int));

printf("put numbers in assending order.\n");

printf("x[0] = ");

scanf("%d",&x[0]);

for(i = 1; i < nx; i++)

{

    printf("x[%d] = ",i);

    scanf("%d",&x[i]);

}

printf("fiding number: ");

scanf("%d",&ky);

idy = bin_search(x,nx,ky,y);
//printf("%d\n",idx);

if(idy == -1){

  printf("binary search has been failed\n");

}

else{
  printf("%d is located at ",ky);
  for(int i = 0; i < counter ;i++){
    printf("x[%d], ",y[i]);
  }

}
free(x);
free(y);

return 0;

}