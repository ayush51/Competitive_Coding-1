#include <iostream>
#include<math.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;




void input(int N,int M ,int (&temp)[2000][2000]){

    for (int i=1;i<=N;i++){

        for(int j=1;j<=M;j++){
            cin>>temp[i][j];

        }
    }

}


void show(int N,int M ,int (&temp)[2000][2000]){


    for (int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){

            cout<<temp[i][j]<<" ";
        }
        cout<<endl;

    }

}

void mech(int N,int M ,int (&temp)[2000][2000]){
    int r,c,s,d;
    cin>>r>>c>>s>>d;
     int uk1=r+s-1;
    int uk2=c+s-1;

    for (int i=r;i<=uk1;i++)
{


        for (int j=c;j<=uk2;j++){
            temp[i][j]=temp[i][j]+d;


        }
    }
}
int main(){int N,M,K;
    cin>>N>>M>>K;
    int arr[2000][2000];


    input(N,M,arr);


    for (int p=1;p<=K;p++){

    mech(N,M,arr);



 }
show(N,M,arr);
    return 0;

}