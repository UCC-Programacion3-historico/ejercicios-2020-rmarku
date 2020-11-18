//#include "BinaryTree.h"
#include "AVLTree.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
//#include "../../ArbolBinarioAVL.h"

using namespace std;

unsigned int seed;

int main() {
  seed = time(nullptr);

  AVLTree<int> miArbol;

  for (int i = 10; i > 0; --i) {
    miArbol.put(i);
  }
  miArbol.print();
  miArbol.remove(7);
  miArbol.print();

  return 0;
  for (int i = 0; i < 100; ++i) {
    try {
      miArbol.put(rand_r(&seed) % 100);
    } catch (...) {
    }
  }
  for (int i = 0; i < 100; ++i) {
    try {
      int n = rand_r(&seed) % 100;
      miArbol.remove(n);
      cout << "Eliminé el " << n << endl;
    } catch (...) {
    }
  }

  miArbol.print();

  return 0;
}
