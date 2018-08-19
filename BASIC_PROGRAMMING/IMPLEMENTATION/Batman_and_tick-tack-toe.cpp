#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n;


bool row(string &p,string &q,string &r,string &s){
    string a=".00";
     string b="00.";
     string c="0.0";
    string x1_a=p.substr(0,3);
      string x1_b=p.substr(1,3);
      string x2_a=q.substr(0,3);
    string x2_b=q.substr(1,3);
      string x3_a=r.substr(0,3);
    string x3_b=r.substr(1,3);
      string x4_a=s.substr(0,3);
    string x4_b=s.substr(1,3);
    
    if (x1_a.compare(a)==0||x1_a.compare(b)==0||x1_a.compare(c)==0||
        x1_b.compare(a)==0||x1_b.compare(b)==0||x1_b.compare(c)==0){
        return true;
    }
    
    else if( x2_a.compare(a)==0||x2_a.compare(b)==0||x2_a.compare(c)==0||
        x2_b.compare(a)==0||x2_b.compare(b)==0||x2_b.compare(c)==0)
    {
        return true;
    }
else if( x3_a.compare(a)==0||x3_a.compare(b)==0||x3_a.compare(c)==0||
        x3_b.compare(a)==0||x3_b.compare(b)==0||x3_b.compare(c)==0)
    {
    return true;
        
    }
    else if( x4_a.compare(a)==0||x4_a.compare(b)==0||x4_a.compare(c)==0||
        x4_b.compare(a)==0||x4_b.compare(b)==0||x4_b.compare(c)==0)
    {
        return true;
    }
}

int main (){ 
    int t;
            cin>>t;
    for (int i=0;i<t;i++){
    string x1;
     string x2;
     string x3;
     string x4;
    getline(cin,x1);
    getline(cin,x2);
    getline(cin,x3);
    getline(cin,x4);
    

       int plan1=row(x1,x2,x3,x4);
    if (plan1){
           cout<<"YES"<<endl;
       }
    else{
        cout<<"NO"<<endl;
    }
    
    }
    return 0;
}