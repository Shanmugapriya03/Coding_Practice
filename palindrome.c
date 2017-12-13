#include<stdio.h>
int checkingPalindrome(int *array,int n){
  int i,flag=0;
  for(i=0;i<n/2;i++){
    if(array[i]==array[n-1-i]){
      flag=1;
    }else{
      return 0;
    }
  }
  return flag;
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
  if(checkingPalindrome(arrPtr,n)){
    printf("Given Array is a Palindrome");
  }else{
    printf("Given Array is not a Palindrome");
  }

}
