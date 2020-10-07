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

  // PriorityQueue
  Queue<int> colas[2];

  // enqueue( dato, prioridad)
  // colas[prioridad].enqueue(dato)

  return 0;
}
