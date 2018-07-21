
#include <iostream>

#include <string>


using namespace std;



int main() {

	
		string uk;
		
int count=0;

	cin>>uk;

	int n=uk.length();

	for (int i=0;i<n/2;i++){

	    if (uk[i]!=uk[n-1-i]){

	    count=1;    
	 
   break;}

	}
		
		if(count){

		    cout<<"NO"<<endl;

		}
	
	else {

		    cout<<"YES";

		}
		
return 0;

}

