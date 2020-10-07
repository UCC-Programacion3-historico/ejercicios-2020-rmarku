#include "../Pila/Stack.h"
#include <iostream>

/*
 * Implementar con una pila una calculadora con notación polaca inversa.
 *
 * Notacion Polaca Inversa (RPN)
 * infija normal  3 + 5
 * polaca inversa 3 5 +
 *
 * inf ( 3 + 5 ) * ( 7 - 9)
 * RPN  3 5 + 7 9 -   *
 *          8    -2   -16
 */

using namespace std;

int main() {
  string lectura;
  Stack<int> pila;
  int a, b;

  do {
    cin >> lectura;
    switch (lectura[0]) {
    case '+':
      a = pila.pop();
      b = pila.pop();
      pila.push(a + b);
      cout << a + b << endl;
      break;
    case '*':
      a = pila.pop();
      b = pila.pop();
      pila.push(a * b);
      cout << a * b << endl;
      break;
    case '/':
      a = pila.pop();
      b = pila.pop();
      pila.push(a / b);
      cout << a / b << endl;
      break;
    case '-':
      if (lectura.length() == 1) {
        a = pila.pop();
        b = pila.pop();
        pila.push(a - b);
        cout << a - b << endl;
        break;
      }
    default: // suponemos numeros
      pila.push(stoi(lectura));
    }
  } while (!pila.isEmpty());

  return 0;
}
