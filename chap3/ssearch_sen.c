#include<stdio.h>
#include<stdlib.h>

int search(int a[],int n, int key){

  for(int i = 0; i <= n; i++){
    if(a[i] == key)
    {
      return i;
    }
    else if(i == n){
      return -1;
    }
  }
}

int main() {
int i,nx,ky,idx;
int *x;
puts("선형검색(초보법)");
printf("요새갯수: ");
scanf("%d",&nx);
x = calloc(nx+1,sizeof(int));
for(i = 0; i < nx; i++)
{
  printf("x[%d]: ",i);
  scanf("%d", &x[i]);
}

printf("검색값 : ");
scanf("%d",&ky);
idx = search(x,nx,ky);
if(idx == -1){
  printf("검색에 실패했습니다");
}
else{
  printf("%d은(는) x[%d]에 있습니다.\n",ky,idx);
}
free(x);
}