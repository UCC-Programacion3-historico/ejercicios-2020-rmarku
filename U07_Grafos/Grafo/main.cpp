#include "Graph.h"
#include <iostream>
using namespace std;

const int A = 0;
const int B = 1;
const int C = 2;
const int D = 3;

int main() {
  Graph miGrafo(4);
  miGrafo.setEdge(A, C, 4);
  miGrafo.setEdge(B, A, 5);
  miGrafo.setEdge(C, B, 3);
  miGrafo.setEdge(B, D, 10);
  miGrafo.setEdge(D, B, 10);

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      int peso = miGrafo.getEdge(i, j);
      if (peso > 0) {
        cout << "enlace " << i << " --> " << j;
        cout << " peso " << peso << endl;
      }
    }
  }
}
