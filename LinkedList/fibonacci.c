#include<stdio.h>
int* fib(int n){
  int f[n];
  f[0]=0;
  f[1]=1;
  for(int i=2;i<n;i++){
    f[i]=f[i-1]+f[i-2];
  }
  int *fibo = f;
  return fibo;
}
void main(){
  int n;
  scanf("%d",&n);
  int *array=fib(n);
  for(int i=0;i<n;i++){
    printf("%d",array[i]);
  }
}
