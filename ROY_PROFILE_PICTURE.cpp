#include <iostream>


using namespace std;


int main() {
	
int L,N,W,H,i;

	cin >> L;
	cin>>N;
	
for (i=0;i<N;i++){

	cin>> W ;
	cin >> H ;
	 
 if (W<L  ||  H<L){
	
cout<<"UPLOAD ANOTHER\n";
}
		else if (W==H){


	cout<<"ACCEPTED\n";
}
	
	else{

	cout<<"CROP IT\n";

}

 
}

return 0;

}
