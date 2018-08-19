#include <iostream>
using namespace std;
int n;
int i, j;


int main (){

long p=0;
    cin>>n;
    long ml[n];
    i=1;
    j=1;
    while (i<=n){
        cin>>ml[i];
        i++;
    }
    for (j=1;j<=n;j++){
        p=p+ml[j];
    }
    cout<<p;


return 0;
}