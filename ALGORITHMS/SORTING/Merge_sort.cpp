#include <iostream >
using namespace std ;
// merge sort is divide and conquer algo, it divide the input array in two halves
// all itself for two halves and then merges the two sorted halves
// the merge function is used for merging two halves
// the merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r]
// are sorted and merges the two sorted sub-arrays into one
void print_array(int arr[],n){

  int i;
  for (i=0;i<n;i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
}

int main(){
  int arr={12,34,56,3,2,13,1,100,45,77};
  int n=sizeof(arr)/sizeof(arr[0]);
  //before merge sort
  cout<< "BEFORE MERGE SORT :";
  print_array(arr,n);
  // sorting the given array by merge sort method

  merge_sort(arr, 0,n-1);
  cout<< "AFTER MERGE SORT :";
  print_array(arr,n);
  return 0;
}
