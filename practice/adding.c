#include<stdio.h>
int reverse(int n){
  int r=0,num=0;
  while(n!=0){
    r=n%10;
    num=(num*10)+r;
    n=n/10;
  }
  return num;
}
void add(int n,int digit){
  int r=0;
  while(n!=0){
    r=n%10;
    printf("%d",r+digit);
    n=n/10;
  }
}
void main(){
  int n,digit;
  printf("enter the number\n");
  scanf("%d",&n);
  printf("enter the digit to be added to all the digits of number\n");
  scanf("%d",&digit);
  n=reverse(n);
  add(n,digit);
}
