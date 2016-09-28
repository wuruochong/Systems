#include <stdlib.h>
#include <stdio.h>
int main(){
  int x = sizeof(int);
  int y = sizeof(short);
  int z = sizeof(long);
  int a = sizeof(float);
  int b = sizeof(double);
  int c = sizeof(long long);
  int d = sizeof(unsigned long);
  printf("int is: %d ",x);
  printf("short is: %d ",y);
  printf("long is: %d ",z);
  printf("float is: %d ",a);
  printf("double is: %d ",b);
  printf("long long is: %d ",c);
  printf("unsigned long is: %d ",d);
}
