#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int mystrlen(char s[]){
  int res = 0;
  int count = 0;
  for (count ; *(s+count) ; count++){
    res+=1;
  }
  return res;
}

char* mystrcpy(char d[], char s[]){ //What to do when dest shorter than source? Assumes the destination is large enough for now.
  /*  if (strlen(s) > sizeof(d)){ //Return -1 if dest not large enough to contain the source
    return -1;
  }
  */
  int count = 0;
  while (*(s+count)){
    printf("%d\n",count);
    printf("%s\n",(s+count));
    *(d+count) = *(s+count);
    printf("%s\n",(d+count));
    count+=1;
    
  }
  return d;
}

int main(){
  printf("Testing mystrlen\n");
  char s[10] = "Hello";
  char d[] = "";
  printf("\nmystrlen of Hello: %d\n", mystrlen(s));
  printf("strlen of Hello: %d\n", strlen(s));
  printf("mystrlen of empty string: %d\n", mystrlen(d));
  printf("strlen of empty string: %d\n", strlen(d));
  printf("mystrlen of literal string: %d\n", mystrlen("Hello"));
  printf("strlen of literal string: %d\n", strlen("Hello"));

  printf("\nTesting mystrcpy\n");
  char x[100];
  printf("after cpy x is: %s", mystrcpy(x, "Hello"));

}
