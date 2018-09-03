
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    int num=0;
    cin>>t;
    for (int k=0;k<t;k++){
    string a;
    string b;
    cin>>a;
    cin>>b;
    int l=a.length();
    for (int i=0;i<l;i++){
        for (int j=0;j<l;j++){

if(a[i]==b[j]){

    num++;
    b[j]=0;
  
  a[i]=0;
break;
}

}
        
    }
    if (num==a.length()){
        cout<<"YES\n";

    }
    else {
        cout<<"NO\n";
    }


   
 num=0;
    }
 return 0;
}