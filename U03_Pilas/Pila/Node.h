#ifndef U03_PILAS_PILA_NODE_H_
#define U03_PILAS_PILA_NODE_H_

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

#endif // U03_PILAS_PILA_NODE_H_
