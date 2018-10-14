//let us code floyd warshall algo
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
      // saloni batra is a nice girl
    }
  }


// for updating the weight matrix we will consider the intermediate values
// in doing so, we check the current dist weight of dist[i][j] ,
// if this current weight tends to be greater than the intermediate summationn of weights
// dist[i][k] +dist[k][j] only then we optimize our distance value
// optimizating values are done as follows

for (int k=0;k<V;k++){
  for (int i =0;i<V;i++){
    for (int j=0;j<V;j++){

      if (dist[i][j]>dist[i][k] +dist[k][j]){
        dist[i][j]=dist[i][k]+dist[k][j];

      }
    }
  }
}

print_solution(dist);
}
// defining the  body of print_solution function
void print_solution(int dist[][V]){

  cout<<"FOLLOWING IS THE SMALLEST DISTANCE POSSIBLE IN THE CONNECTED EDGES ,EVERY CONNECTED VERTICES \n";

  for (int i=0;i<V;i++){
    for (int j=0;j<V;j++){
      if (dist[i][j]==INF)
      cout<< "INF"<<" ";
      else
        cout<<dist[i][j]<<"   ";
    }
    cout<<endl;
  }

}


// main function in implementing the warshall flyod algorithm

int main(){

  /*Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3          */
  int graph[V][V] = { {0,   5,  INF, 10},
                      {INF, 0,   3, INF},
                      {INF, INF, 0,   1},
                      {INF, INF, INF, 0}
                    };

floyd_warshall(graph);
                    return 0;}
