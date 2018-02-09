#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > clockWise(vector< vector<int> > &matrix){
  int n = matrix.size();
  vector<vector<int> > mat(n,vector<int>(n));
  int col=0,row=0;
  for(int c=0;c<n;c++){
    for(int r=n-1;r>=0;r--){
        mat[col][row]=matrix[r][c];
        row++;
    }
    col++;row=0;
  }
return mat;
}
vector< vector<int> > antiClockWise(vector< vector<int> > &matrix){
  int row=0,col=0;
  int n = matrix.size();
  vector< vector<int> > mat(n,vector<int> (n));
  for(int c=n-1;c>=0;c--){
    for(int r=0;r<n;r++){
      mat[col][row]=matrix[r][c];
      row++;
    }
    col++;
    row=0;
  }
  return mat;
}
int main() {
  int n,r,c,flag=0,ch;
  char f;
  cout<<"enter the number of rows/columns"<<endl;
  cin>>n;
  vector< vector<int> > matrix (n,vector<int> (n));
  cout<<"enter the matrix"<<endl;
  for(r=0;r<n;r++){
    for(c=0;c<n;c++){
      cin>>matrix[r][c];
    }
  }
  do{
    cout<<"1.ClockWise\n2.Anti-ClockWise\n";
    cin>>ch;
    switch(ch){
      case 1:
        cout<<"Rotated Clockwise :"<<endl;
        matrix=clockWise(matrix);
        for(r=0;r<n;r++){
          for(c=0;c<n;c++){
            cout<<matrix[r][c]<<"\t";
          }cout<<"\n";
        }
        break;
      case 2:
        cout<<"Rotated Anti-Clockwise :"<<endl;
        matrix=antiClockWise(matrix);
        for(r=0;r<n;r++){
          for(c=0;c<n;c++){
            cout<<matrix[r][c]<<"\t";
          }cout<<"\n";
        }
        break;
      default:
        cout<<"enter valid choice"<<endl;
        break;
    }
    cout<<"do you want to continue(y or n) ?"<<endl;
    cin>>f;
    if(f=='y'){
      flag=1;
    }else{
      flag=0;
    }
  }while(flag==1);
  cout<<"Bye Bye!"<<endl;
  return 0;
}
