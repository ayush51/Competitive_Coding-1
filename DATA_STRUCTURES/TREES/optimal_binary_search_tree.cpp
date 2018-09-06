// naive recursive implementation of optimal
//binary search tree problem

# include <iostream>
#include <limits>
using namespace std ;

// a utility function to get sum of array elements
//freq[i] to freq[j]

int sum(int freq[], int i ,int j);
// A recursive function to calculate the cost of optimal
// binary search tree
int optCost(int freq[],int i ,int j)
{// BASE CLASS
  if (j<i) // no element in this subtree
  return 0;
  if (j==i) //  one element in yhis subtree
  return freq[i];


  // GET SUM OF freq[i],freq[i+1],......,freq[j]
  int fsum=sum(freq,i,j);

  // INITIALIZE MINIMUM VALUES
  int min= INT_MAX;
  // ONE BY ONE CONSIDER ALL ELEMENTS AS ROOT AND RECURSIVELY FIND THE COST OF BST
  // COMPARE THE COST WITH min AND UPDATE min IF needed
  for ( int r =i;r<=j;++r)
  {
    int cost =optCost(freq,i,r-1) +optCost(freq,r+1,j);
    if (cost<min){
      min=cost;
    }

  }
// RETURN minimum value
  return min + fsum;

}

// the main function which calculate minimum cost of
// a binary search tree .It mainly uses optCost() to
// find the optimal cost

 int optimalSearchTree(int keys[],int freq[],int n)
 {
  // here array   Keys[] is assumed to be sorted in
  // increasing order .if KEYS[] is not sorted ,then
  // add code to sort Keys, and rearrange freq[] accordingly
  return optCost(freq,0,n-1);
 }
 // a utility function to get a sum of array elements
 // freq[i] to freq[j]
int sum (int freq[],int i,int j )
{
  int s=0;
  for (int k=i;k<=j;k++)
  s+=freq[k];
  return s;

}

//DRIVER PROGRAM TO TEST ABOVE FUNCTON
int main()
{
  int Keys[]={10,12,20};
  int freq[]={38,8,50};
  int n = sizeof(Keys)/sizeof(Keys[0]);
  cout<<"COST OF OPTIMAL BST IS :"<<optimalSearchTree(Keys,freq,n);
  return 0;
}
