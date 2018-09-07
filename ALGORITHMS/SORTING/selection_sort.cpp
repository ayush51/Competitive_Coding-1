#include <iostream>
using namespace std ;
// in selection sort first we find the minimum element
// then this element becomes our first element
// now we take the sub array which doesn't has the firest element then we repeat our process
//  we find min ele in remaining sub array


// definately swapping is must in the selection sort
void swap(int *xp,int *yp ){
  int temp=*xp;
  *xp=*yp;
  *yp=temp;
}

// function for the print purpose
void print_array(int arr[],int n ){
  int i;
  for (i=0;i<n;i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
}
