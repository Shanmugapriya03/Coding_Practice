#include<stdio.h>
int checkCondition(int elm1, int elm2, int flag){
    if (flag == 1)
        return elm1 > elm2;
    return elm1 < elm2;
}
void sort(int *arr,int n,int m ,int flag){
  int i,j;
  for(i=n;i<m;i++){
    for(j=i+1;j<=m;j++){
      if( checkCondition(arr[i], arr[j], flag) ){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
      }
    }
  }
}
void main(){
  int n,i;
  printf("Enter The Number Of Elements In The Array\n");
  scanf("%d",&n);
  int array[n];
  printf("Enter THe Elements In The Array\n");
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  int *arrPtr = array;
  sort(arrPtr,0,(n/2)-1,1);
  sort(arrPtr,n/2,n-1,0);
  for(i=n;i<=m;i++){
    printf("%d\t",arr[i]);
  }
}
