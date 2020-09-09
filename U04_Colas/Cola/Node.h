#ifndef U04_COLAS_COLA_NODE_H_
#define U04_COLAS_COLA_NODE_H_

template <class T> class Node {
private:
  T data;
  Node<T> *next;

public:
  Node(T data, Node<T> *next) : data(data), next(next) {}
  Node() { next = nullptr; }

  T getData() const { return data; }
  void setData(T data) { Node::data = data; }
  Node<T> *getNext() const { return next; }
  void setNext(Node<T> *next) { Node::next = next; }
};

#endif // U04_COLAS_COLA_NODE_H_
