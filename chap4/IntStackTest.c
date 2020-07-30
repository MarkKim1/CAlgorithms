#include<stdio.h>
#include "intstack.h"

int main(){
  IntStack s;
  if(Initialize(&s, 64) == -1){
    puts("failed to excute stack.");
    return 1;
  }

  while(1){
    int menu,x;
    printf("data space: %d/%d\n",Size(&s),Capacity(&s));
    printf("(1)Push (2)Pop (3)Peek (4)Print (0)Exit: ");
    scanf("%d",&menu);

    if(menu == 0)
    {
      break;
    }
    switch(menu)
    {
      case 1: 
      printf("data: ");
      scanf("%d",&x);
      if(Push(&s,x) == -1)
      {
        puts("\aerror : failed to Push.");
      }
      break;

      case 2:
      if(Pop(&s,&x) == -1)
        printf("\aError : failed to Pop");
      else
        printf("popped data is %d.\n",x);
        break;

      case 3:
      if(Peek(&s,&x) == -1)
        printf("\aError : failed to Peek %d.\n",x);
      else
        printf("Peeked data is %d.\n",x);
      break;

      case 4:
      Print(&s);
      break;
    }
  }
  Terminate(&s);
  return 0;
}