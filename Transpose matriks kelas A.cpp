#include<iostream>
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
   
