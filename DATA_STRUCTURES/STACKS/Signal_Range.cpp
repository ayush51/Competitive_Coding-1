



#include<iostream>
using namespace std;


int main(){
  int tst_cases;// number of test cases
  cin>>tst_cases;
  for (int t=0;t<tst_cases;t++){
int n;// no of towers user want to build
cin>>n;
int tower[n];
// to collect the height of each tower by user manually
for (int j=0;j<n;j++){
  cin>> tower[j];

}
int count=1;//  to have a track of  TOWER MESSAGE FLOW
if (count == 1)
cout<<count<<" ";

for (int i=1;i<n;i++){
        count=1;
  for (int j=i;j>=0;j--){

    if (tower[i]>=tower[j-1]){
      count+=1;
    }

    else if (tower[i]<tower[j-1]){
      cout<<count<<" ";
      break;

    }

  else
    {
    cout<<count<< " ";
  }
  }
}







  }
return 0;
}
