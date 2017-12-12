#include<stdio.h>
void sort(int *arr,int n,int m ,int flag){
  int i,j;
  if(flag==1){
    for(i=n;i<m;i++){
      for(j=i+1;j<=m;j++){
        if(arr[i]>arr[j]){
          arr[i]=arr[i]+arr[j];
          arr[j]=arr[i]-arr[j];
          arr[i]=arr[i]-arr[j];
        }
      }
    }
  }else{
    for(i=n;i<m;i++){
      for(j=i+1;j<=m;j++){
        if(arr[i]<arr[j]){
          arr[i]=arr[i]+arr[j];
          arr[j]=arr[i]-arr[j];
          arr[i]=arr[i]-arr[j];
        }
      }
    }
  }

  for(i=n;i<=m;i++){
    printf("%d\t",arr[i]);
  }
}
void sortDescending(int *arr,int n,int m){
  int i,j;
  for(i=n;i<m;i++){
    for(j=i+1;j<=m;j++){
      if(arr[i]<arr[j]){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
      }
    }
  }
  for(i=n;i<=m;i++){
    printf("%d\t",arr[i]);
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
}
