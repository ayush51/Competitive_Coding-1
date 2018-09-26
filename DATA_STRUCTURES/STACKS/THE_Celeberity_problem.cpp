#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
// question :
/*In a party of N people, only one person is known to everyone.
 Such a person may be present in the party, if yes, (s)he doesn’t know anyone in the party.
  We can only ask questions like “does A know B?
 “. Find the stranger (celebrity) in minimum number of questions.*/

 // lets us try to solve it using stack
 // steps taken in solving the problem
/*Push all the celebrities into a stack.
Pop off top two persons from the stack, discard one person based on return status of HaveAcquaintance(A, B).
Push the remained person onto stack.
Repeat step 2 and 3 until only one person remains in the stack.
Check the remained person in stack doesn’t have acquaintance with anyone else.*/

// code:

#define N 8 // no of maximum people in the party
bool matrix[N][N]={{0,0,1,0},
{0,0,1,0},
{0,0,0,0},
{0,0,1,0}};


bool knows(int a,int b){
  return matrix[a][b];
}

// return -1 if celebrity is not present in the party
// if present then return the id [0...n-1]
int find_celebrity(int n){
  stack<int> s;
  int C;// celebrity

  // push every body to stack
  for (int i =0;i<n;i++){
    s.push(i);
  }

  // extract top 2 element
  int A=s.top();
  s.pop();
  int B= s.top();
  s.pop();

  // find a potential celebrity

  while(s.size()>1){

    if (knows(A,B)){
      A=s.top();
      s.pop();
    }

    else{
      B=s.top();
      s.pop();

    }


  }


  // potential candidate
  C=s.top();
  s.pop();

  // last candidate was not examined
  //it leads one acess comparison (optimize)
  if(knows(C,B)){
    C=B;
  }

  if (knows(C,A){
    C=A;
  }

  // CHECK IF C IS ACTUALLY A CANDIDATE
  for (int i=0;i<n;i++){
    // If any person doesn't
       // know 'a' or 'a' doesn't
       // know any person, return -1

       if ( (i != C) &&
            (knows(C, i) ||
             !knows(i, C)) )
        return -1;
}
return C;
  }


  int main(){
  int n=4;
  int id =find_celebrity(n);
  id == -1 ?cout<<" no celebrity " :
  cout<< "celeberity ID " << id;
  return 0;  
  }
}
