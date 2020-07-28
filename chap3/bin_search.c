#include<stdio.h>
#include<stdlib.h>

int bin_search(const int a[],int n, int key)
{
  int pl = 0;
  int pr = n-1;
  int pc;
  int flag = 0;
  
    for(int i = 0; i < 7; i++)
    {
      pc = (pl+pr)/2;
      if(a[pc] == key)
      {
        break;
      }
      if(pl >= pr)
      {
        printf("it has flagged\n");
        flag = 1;
        break;
      }
      else if(a[pc] < key)
      {
        pl = pc+1;
      }
      else{
        pr = pc-1;
      }
      
      
      
    }
  if(flag == 1){
    return -1;
  }
  return pc;

}

int main (){
int i,nx,ky,idx;
int *x;

puts("Binary search");

printf("how many: ");

scanf("%d",&nx);

x = calloc(nx,sizeof(int));

printf("put numbers in assending order.\n");

printf("x[0] = ");

scanf("%d",&x[0]);
//printf("-----x[0] = %d\n",x[0]);

for(i = 1; i < nx; i++)

{

  do{

    printf("x[%d] = ",i);

    scanf("%d",&x[i]);
    //printf("-----x[%d] = %d\n",i,x[i]);

  }while(x[i] < x[i-1]);

}

printf("fiding number: ");

scanf("%d",&ky);

idx = bin_search(x,nx,ky);
//printf("%d\n",idx);

if(idx == -1){

  printf("binary search has been failed\n");

}

else{

  printf("%d is located at x[%d]\n",ky,idx);

}

free(x);

return 0;

}