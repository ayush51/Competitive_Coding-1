#include <iostream>

#include <string>
using namespace std;


int main(){
    int n,q;
    int decision,x1,x2;
    cin>>n>>q;
    int sal[n-1];//array
    for (int i=0;i<n;i++){
        cin>>sal[i];
        cout<<" ";    }
for (int i=0;i<q;i++){

    cin>>decision;
    cin>>x1;
    cin>>x2;

    if (decision ==1){
        sal[x1]=x2;
    }
    else if (decision ==2)
{
            int sum=0 ;
            while (x1<=x2){
    sum = sum + sal[x1];
    x1+=1;

    }
    cout<<sum<<endl;
    }


    }
return 0;
}