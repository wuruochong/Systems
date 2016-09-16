#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum;
  int three = 3;
  int five = 5;
  int count3 = 0;
  int count5 = 0;

  while (three < 1000){
    sum+= three;
    printf("%d \n",three);
    three+=3;
  }

  while (five < 1000){
    sum+= five;
    printf("%d \n",five);
    five+=5;
  }
  printf("result: %d \n",sum);
  return sum;
}
