
#include <iostream>

#include <string>

using namespace std;


int main()
 {
    int t;

    cin>>t;

int count=0;
 
   for (int k=0;k<t;k++)
{
	string a;
	
string b;
	
cin>>a;

cin>>b;
int x1,x2;

	x1=a.length();

	x2=b.length();
	

	for(int i=0;i<x1;i++){

	    for (int j=0;j<x2;j++){

	        if (a[i]==b[j]){
	        b[j]=0;

	        count++;
	       break;    
             }
	                        }
	 
                        
	                      }
	
  count =(a.length())+(b.length())-2*(count);      
	  
                       
    cout<<count<<endl;
   
   count=0;                   
 
       
    }
      
        return 0;
   
         }
                