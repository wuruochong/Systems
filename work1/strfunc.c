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


char *mystrcpy(char d[], char s[]){ //What to do when dest shorter than source? Assumes the destination is large enough for now.
  /*  if (strlen(s) > sizeof(d)){ //Return -1 if dest not large enough to contain the source
    return -1;
  }
  */
  int count = 0;
  // printf("%s\n",d);
  while (s[count]){
    //    printf("%s\n",d);
    //     printf("%d\n",d[count]);
     // printf("%d\n",s[count]);
    d[count] = s[count];
    //     printf("%d\n",d[count]);
    count+=1;
    
  }
  d[count]=0;
  return d;
}

char *mystrncat(char d[], char s[], int n){
  int off = mystrlen(d);
  int count = 0;
  while (n){
    d[count+off] = s[count];
    n-=1;
    count+=1;
  }
  return d;
}

int mystrcmp(char a[], char b[]){
  int count = 0;
  while (count<mystrlen(a)){
    if ((a[count] - b[count])!=0){
      return a[count] - b[count];
    }
    count+=1;
  }
  return 0;
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
  char y[50] = "Hello";
  printf("after cpy x is: %s\n", mystrcpy(x, y));

  printf("\nTesting mystrncat\n");
  char a[100] = "Hello";
  char b[100] = " to you!";
  mystrncat(a, b, 5);
  a[mystrlen(a)+1]=0;
  printf("\nafter ncat a is: %s\n",a);

  printf("\nTesting mystrcmp\n");
  char c[100] = "Hello";
  char e[101] = "Hello";
  printf("compare: %d", mystrcmp(c,d));
}
