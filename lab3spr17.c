// Driver to handle operations in 2320 Lab 3, Spr 2017
#include <stdlib.h>
#include <stdio.h>
#include "RB.h"

int main()
{
int op,key,rank;

STinit();  // Initialize red-black tree
verifyRBproperties();

scanf("%d",&op);
while (op)
{
  switch (op)
  {
    case 1:
      scanf("%d",&key);
      printf("1 %d\n",key);
      STinsert(key);
      break;
    case 2:
      scanf("%d",&key);
      printf("2 %d\n",key);
      //STdelete(key);
      break;
    case 3:
      scanf("%d",&key);
      printf("3 %d\n",key);
      rank=STinvSelect(key);
      if (rank==(-1))
        printf("Key %d is not in tree\n",key);
      else
        printf("Key %d has rank %d\n",key,rank);
      break;
    /*case 4:
      scanf("%d",&rank);
      printf("4 %d\n",rank);
      if (rank<1 || rank>getLive())
        printf("rank %d range error\n",rank);
      else
        printf("rank %d has key %d\n",rank,key(STselect(rank)));
      break;
    case 5:
      printf("5\n");
      printf("Live %d Dead %d Recycled %d\n",
        getLive(),getDead(),getRecycled());
      break;
    case 6:
      printf("6\n");
      if (getDead())
        removeDead();
      break;*/
    case 7:
      printf("7\n");
      STprintTree();
      break;
    case 8:/*
      printf("8\n");
      if (verifyRBproperties())
        printf("clean\n");
      else
        printf("corrupt\n");
      break;*/
    default:
      printf("Bad operation %d\n",op);
  }
  //fflush(stdout);  // In case output is going to a fifo
  scanf("%d",&op);
}
printf("0\n");
}
