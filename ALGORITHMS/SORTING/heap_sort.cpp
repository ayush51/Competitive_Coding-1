#include <iostream >
using namespace std;

// to heapify a subtree rooted with node i which is an index in arr[], n is the size of heap
void heapify(int arr[],int n,int i ){
  int largest = i;// initialize largest as the root
  int left= 2*i+1;// left index
  int right =2*i+2; // right index to a root

  // if left child is larger than root
  if (arr[left]>arr[largest] && left<n)
    largest= left;
    // if right  child is larger than root
    if (arr[right ]>arr[largest] && right<n)
      largest= right;

  // if largest is not root
  if (largest!=i){
    swap(arr[i],arr[largest]);

    // most important step is to recursively heapify the affected the sub-tree

  heapify(arr,n,largest);
  }
}

void print_array(int  arr[],int n){
  int i ;
  for (i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout << endl ;

}
