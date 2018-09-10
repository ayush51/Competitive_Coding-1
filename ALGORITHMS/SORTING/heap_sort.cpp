#include <iostream >
using namespace std;

// to heapify or to make a max heap  a subtree rooted with node i which is an index in arr[], n is the size of heap
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
void swap(int *xp,int *yp){
  int temp=*xp;
  *xp=*yp;
  *yp=temp;


}

void print_array(int  arr[],int n){
  int i ;
  for (i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout << endl ;

}

// main function to do the heap sort
void heap_sort(int arr[],int n){

  // build heap (rearrange array )
  for (int i=n/2 -1 ; i>=0;i--){
    heapify(arr,n,i);
  }
    // one by one extract an element from heap
  for (int i=n-1;i>=0;i--){
// move current root to an end
swap(arr[0],arr[i]);
// call max heapify on reduced heap
heapify(arr,i,0);  }

}

// now we will try to implemen 
