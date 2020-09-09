#include "Queue.h"
#include <iostream>

using namespace std;

int main() {
  Queue<int> queue;

  queue.enqueue(5);
  queue.enqueue(7);
  queue.enqueue(9);
  queue.enqueue(635127);
  queue.enqueue(-237);

  try {
    while (true) {
      cout << queue.dequeue() << endl;
    }
  } catch (int e) {
    cout << "no hay mas valores para desencolar" << e << endl;
  }
  return 0;
}
