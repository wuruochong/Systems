/*
Ruochong Wu
Systems Level Programming Pd5
Work0: Eul up your skills!
2016/09/17
*/
#include <stdio.h>
#include <stdlib.h>

int q1mult35(){
  int sum = 0;
  int count = 3;
  for (count;count <1000 ; count++){
    if ((count%3 == 0) || (count%5 == 0)){
      sum += count;
    }
  }
  //  printf("Question 1 answer: %d \n",sum);
  return sum;
}



int evenfibhelp(int a, int b, int count, int sum){
  int fib = a+b;
  //  printf("%d \n", fib);
  if (fib > 4000000){
    return sum;
  }
  if (count == 2){
    sum += fib;
    return evenfibhelp(b, fib, 0, sum);
  }
  return evenfibhelp(b, fib, count+1, sum);
}

int q2evenfib(){
  return evenfibhelp(0 , 1 , 1, 0);
}

int largestpfhelp(int curr, long long x){

  if (x%curr == 0){
    if (x/curr == 1){
      return curr;
    }
    return largestpfhelp(curr, x/curr);
  }
  return largestpfhelp(curr+1, x);
}


int q3largestpf(){
  return largestpfhelp(2, 600851475143);
}

/*char largestpalhelper(int x){
  int y = x;
  int res = 0;
  int h = 10;
  while( y > 10){
    res += (y%h)*(h/10);
    y = y/h;
    h*=10;
  }
  res+=y;
  printf("%d ", res);
  return x==res;
}
*/

char largestpalhelper(int x){
  int y = x;
  int res = 0;
  int z = y;
  while (z > 10){
    res *= 10;
    res += z%10;
    z /= 10;
  }
  res*=10;
  res+=z;
  // printf("%d", res);
  return res == x;
}

int q4largestpal(){
  int champ;
  int a = 100;
  int b = 100;
  for (a; a<999 ; a++){
    while (b<999){
      if (largestpalhelper(a*b)){
	champ = a*b;
	//	printf("%d", champ);
      }
      b+=1;
    }
    b = 100;
  }
  return champ;
}
  

int main(){
  printf("Q1 answer: %d \n", q1mult35());
  printf("Q2 answer: %d \n", q2evenfib());
  printf("Q3 answer: %d \n", q3largestpf());
  // printf("%d \n", largestpalhelper(1234));
  // printf("%d \n", largestpalhelper(9009));
  printf("Q4 answer: %d \n", q4largestpal());
}
