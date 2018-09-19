#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand( time(NULL) );
  int ary[10];
  int i;
  for(i = 0; i < 9; i++){
    ary[i] = rand();
  }
  ary[9] = 0;
  for(i = 0; i < 10; i++){
    printf("ary[%d]: %d\n",i,ary[i]);
  }
  int * p = ary + 9;
  int ary2[10];
  int * q = ary2;
  for(i = 0; i < 10; i ++){
    *q = *p;
    p--;
    q++;
  }
  for(i = 0; i < 10; i++){
    printf("ary2[%d]: %d\n",i,ary2[i]);
  }
  return 0;
}
