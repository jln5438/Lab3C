#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>

// Author: Jacob Noethiger jln5438@psu.edu
// Collaborator: Samantha Glenn sag5863@psu.edu
// Collaborator: Heonyrong Ha hzh5274@psu.edu
// Collaborator:Kelly Wole
// Section:2
// Breakout:4
int sum_n(int n){
  if(n==0){
    return n;
  }
  else{
    return sum_n(n-1)+n;
  }
}
void print_n(int n, const char *s){
  if(n==1){
    printf("%s",s);
  }
  else if(n!=0){
    printf("%s",s);
    print_n(n-1,s);
  }
}

int main(void){
  int n=(int)readline("Enter an int: ");
  int i=sum_n(n);
  printf("sum is %d.",i);
  const char *s=readline("Enter a string: ");
  print_n(n,s);
}
