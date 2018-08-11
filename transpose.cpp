#include <iostream>
#include<math.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row;
    cin>>col;
    int arr[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){

            cin>>arr[i][j];
        }
    }


    int tran[col][row];
      for (int i=0;i<col;i++){
        for (int j=0;j<row;j++){

            tran[i][j]=arr[j][i];
        }
    }

     for (int i=0;i<col;i++){
        for (int j=0;j<row;j++){

            cout<<tran[i][j]<<" " ;
        }
         cout<<endl;
    }

    return 0;

}
