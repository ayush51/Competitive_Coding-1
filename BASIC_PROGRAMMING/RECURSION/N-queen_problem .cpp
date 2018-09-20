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

bool recurion_nqueen(int board[N][N],col){
// if all queens are placed with proper
// poistions
  if (col>= N)   {
    return true;
  }

// loop iterating on the rows for a specific column
for (int i=0;i<N;i++){
  // if the position is a valid poistion
  if (isSafe(board,i,col)){
 // place the queen here
 board[i][col]=1;
 // recursion to next column and
 // starts the for loop from 0 row to next row till we get a safe poisition for our new queen
     if(recursion_nqueen(board,col+1)){
       return true;
}


// in the next column, if we don't get any row valid to poistion our queen
// we simply backtrack  to the previous placed queen in previous column
// and we make that value from 1 to zero 0
board[i][ col]=0;
  }
}
return false ;
}
