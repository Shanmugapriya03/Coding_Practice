#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m,x1,y1,x2,y2,sum=0;
  cout<<"Enter no of ros and cols"<<endl;
  cin>>n>>m;
  cout<<"enter the matrix"<<endl;
  vector<vector<int>> mat(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>mat[i][j];
    }
  }
  cout<<"enter starting index x & y"<<endl;
  cin>>x1>>y1;
  cout<<"enter ending index x & y"<<endl;
  cin>>x2>>y2;

  cout<<"Rectangle Obtained"<<endl;
  for(int i=x1;i<=x2;i++){
    for(int j=y1;j<=y2;j++){
      sum+=mat[i][j];
      cout<<mat[i][j]<<"\t";
    }cout<<"\n";
  }cout<<"\n";

  cout<<"Sum is "<<sum<<endl;
  return 0;
}
