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

// let us write, the main function for sorting in a selection way
void selection_sort(int arr[],int n){
  int i,j,min_idx;
  // one by one move in unsorted boundary
for (i=0;i<n;i++){
// find min ele in unsorted array
min_idx=i;
for (j=i+1;j<n;j++){
  if (arr[j]<arr[min_idx]){
    min_idx=j;
                           }
                  }
swap(arr[min_idx],arr[i]);
                  }


                                      }

      // main function to see whether program works or not
      int main(){

        int arr[]={22,13,4,2,1,56,100,34,13};
        int n=sizeof(arr)/sizeof(arr[0]);
        cout<<"ARRAY BEFORE SORTING :  ";
        print_array(arr,n);
        cout<<endl;
        // sorting
        selection_sort(arr,n);
        // print the print_array
        cout<< "ARRAY AFTER SORTING :  ";

        print_array(arr,n);
        return 0;
      }
