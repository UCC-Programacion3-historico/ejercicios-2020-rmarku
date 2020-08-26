#ifndef U02_LISTAS_LISTA_LISTA_H_
#define U02_LISTAS_LISTA_LISTA_H_

#include "Node.h"

/*
C    create
R    read
U    update
D    delete
*/

/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class List {
private:
  // 4 bytes  2^64 = 4.294.967.296   signed -2147483648 -> 2147483647
  unsigned int size;
  Node<T> *begin;
  Node<T> *getNode(unsigned int pos);

public:
  List();

  List(const List<T> &li);

  ~List();

  void insert(unsigned int pos, T data);

  void push_front(T dato);

  void push_back(T dato);

  void remove(int pos);

  T get(int pos);

  void replace(int pos, T dato);

  bool isEmpty();

  unsigned int getSize();

  void clear();
};

/**
 * Constructor de la clase Lista
 * @tparam T
 */
template <class T> List<T>::List() {
  size = 0;
  begin = nullptr;
}

/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */
template <class T> List<T>::List(const List<T> &li) {}

/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los
 * nodos utilizados en la lista
 * @tparam T
 */
template <class T> List<T>::~List() {}

/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template <class T> bool List<T>::isEmpty() { return (size == 0); }

/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */
template <class T> unsigned int List<T>::getSize() { return size; }

/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param data  dato a insertar
 */
template <class T> void List<T>::insert(unsigned int pos, T data) {
  if (pos == 0) {
    Node<T> *newNode = new Node<T>(data, begin);
    begin = newNode;
    size++;
    return;
  }

  Node<T> *aux = getNode(pos - 1);

  Node<T> *newNode = new Node<T>(data, aux->getNext());
  aux->setNext(newNode);
  size++;
}

/**
 * Inserta un nodo con el dato en la primera posicion
 * @tparam T
 * @param dato dato a insertar
 */
template <class T> void List<T>::push_front(T dato) {
  insert(0, dato);
}

/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template <class T> void List<T>::push_back(T dato) { insert(size, dato); }

/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template <class T> void List<T>::remove(int pos) {
  if (pos == 0) {
    Node<T> *toDelete = begin;
    begin = begin->getNext();
    delete toDelete;
    size--;
    return;
  }
  Node<T> *aux = getNode(pos - 1);
  Node<T> *toDelete = aux->getNext();

  if (toDelete == nullptr)
    throw 404;

  aux->setNext(toDelete->getNext());
  delete toDelete;
  size--;
}

/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template <class T> T List<T>::get(int pos) {
  Node<T> *aux = getNode(pos);
  return aux->getData();
}

template <class T> Node<T> *List<T>::getNode(unsigned int pos) {
  Node<T> *aux = begin;
  unsigned int p = 0;

  if (pos >= size)
    throw 404;

  while (p < pos && aux != nullptr) {
    aux = aux->getNext();
    p++;
  }

  if (aux == nullptr)
    throw 404;

  return aux;
}

/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */
template <class T> void List<T>::replace(int pos, T dato) {}

/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template <class T> void List<T>::clear() {}

#endif // U02_LISTAS_LISTA_LISTA_H_
