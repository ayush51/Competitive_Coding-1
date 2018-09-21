let us code floyd warshall algo
#include <iostream>
using namespace std;


// V represent the no. of vertices in the graph
// if u want to change the vertices in a graph , write that number after the V
#define V 4

// INF is define as a large number basically to give the intution of
// infinity. This value is used for the unconnected vertices
#define INF 99999

// a function to print the solution matrix
void print_solution(int dist[][V]);

// this function solves the shortest path between the all pairs
//using floyd warshall algo

void floyd_warshall(int Graph[][V]){
  // dist will be the final shortest distance between the vertices after the algo
  int dist[V][V],i,j,k;

  // initialize the solution matrix as the input matrix
  // or we can also say that making the dist matrix as that matrix  which does not consider
  //the intermediate vertices based on shortest path

  for (int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      dist[i][j]=Graph[i][j];
    }
  }

}




}
