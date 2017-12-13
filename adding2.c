#include<stdio.h>
void add(int *array,int n){
  int i;
  for(i=0;i<n-1;i++){
    array[i]=array[i]+array[i+1];
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
  for(i=0;i<n-1;i++){
    printf("%d\t",a[i]);
  }
}
