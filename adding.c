#include<stdio.h>
int check(int i,int n){
  if(n%2==0){
    return i < n;
  }else{
    return i < n-1;
  }
}
void add(int *array,int n){
  int i;
  for(i=0;check(i,n);i++){
    if(i%2==0){
      array[i]=array[i]+array[i+1];
      array[i+1]=0;
    }
  }
}
void main(){
  int n,i;
  printf("enter the number of elements in array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements in the array");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int *arrPtr = a;
  add(arrPtr,n);
  for(i=0;i<n;i++){
    if(a[i]!=0)
      printf("%d\t",a[i]);
  }
}
