#include <iostream>
using namespace std;
int main(){
   int matrix [10][10], transMatrix [10][10], row, col;
   cout << "Enter the number of rows: ";
   cin >> row;
   cout << "Enter the number of columns: ";
   cin >> col;
   
   cout << "Enter elements of matrix :" << endl;
   for(int i = 0; i < row; i++) {
      for(int j = 0; j < col; j++) {
         cin >> matrix [i][j];
     }
   }
   for(int i = 0; i < row; i++) {
      for(int j = 0; j < col; j++) {
         transMatrix [j][i] = matrix [i][j];
    }
  }
   cout << "Matrix :" << endl;
  for(int i = 0; i < col; i++) {
     for(int j = 0; j < row; j++){
        cout << matrix [i][j] << " ";
        if( j == row-1)
           cout << endl;
     }
  }
   
   cout<<"Transpose Matrix: "<<endl;
  for(int i=0;i<col;i++) {
    for(int j=0;j<row;j++) {
      cout<<*(*(transMatrix+ i)+j)<<" ";
      if(j==row-1)
        cout<<endl;
    }
  }
  cout<<"Lokasi Transpose Matrix: "<<endl;
  for(int i=0;i<col;i++) {
    for(int j=0;j<row;j++) {
      cout<<&(transMatrix[i][j])<<" ";
      if(j==row-1)
        cout<<endl;
    }
  }

  return 0;
}      
        
   
   
