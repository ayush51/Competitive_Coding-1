//c++ program to solve N-queen backtracking problem
#include<iostream>
using namespace std ;
// function to print solution
void print_solution(int board[N][N]){
for(int i=0;i<N;i++){
                for (int j=0;j<N;j++){
cout<< board[i][j];
                                   }
cout << endl;
}

}

// a utility function to check if a queen ca be placed on board[row][col]
//note this function is called when the "col" queens are already placed from 0 to col-1
//so we need to check only left side for attacking queens

bool isSafe(int board[N][N],int row ,int col){
  int i,j;
  // check this row for left side
  for (int i =0;i<col;i++)
       if (board[row][i])
             return false;

// check the upper diagonal for the left side
   for (i=row,j=col;i>=0 && j>=0;i--,j--){
        if (board[i][j]){
          return false;
        }

// check lower diagonal on left side
for (i=row,j=col;i<N && j>=0;i++,j--){
   if (board[i][j]){
     return false ;
   }
}
// if none of the above cases satisfies thier respective condition then
// we say putting the queen here in this specific row and col is isSafe
// that's why the name of the funcion is bool isSafe
return true;
   }

   



}
