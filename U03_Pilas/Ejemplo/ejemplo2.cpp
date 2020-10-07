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
  int a, b, r;

  do {
    cin >> lectura;
    try {
      pila.push(stoi(lectura));
    } catch (...) {
      if (lectura.length() == 1 && (lectura[0] == '+' || lectura[0] == '/' ||
                                    lectura[0] == '-' || lectura[0] == '*')) {
        b = pila.pop();
        a = pila.pop();
        switch (lectura[0]) {
        case '+':
          r = a + b;
          break;
        case '*':
          r = a * b;
          break;
        case '/':
          r = a / b;
          break;
        case '-':
          r = a - b;
          break;
        }
        pila.push(r);
        cout << r << endl;
      } else {
        if (lectura[0] == 'q')
          return 0;
        cout << "Valor invalido" << endl;
      }
    }

  } while (!pila.isEmpty());

  return 0;
}
