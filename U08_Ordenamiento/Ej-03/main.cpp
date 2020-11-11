#include <fstream>
#include <iostream>

template <class K, class V> class Par {
public:
  K clave;
  V valor;
  bool operator<(const Par &rhs) const { return clave < rhs.clave; }
  bool operator>(const Par &rhs) const { return rhs < *this; }
  bool operator<=(const Par &rhs) const { return !(rhs < *this); }
  bool operator>=(const Par &rhs) const { return !(*this < rhs); }
};

class Auto {
public:
  int anios;
  int color;
  std::string patente;

  bool operator<(const Auto &rhs) const { return patente < rhs.patente; }
  bool operator>(const Auto &rhs) const { return rhs < *this; }
  bool operator<=(const Auto &rhs) const { return !(rhs < *this); }
  bool operator>=(const Auto &rhs) const { return !(*this < rhs); }

  friend std::ostream &operator<<(std::ostream &os, const Auto &anAuto) {
    os << "anios: " << anAuto.anios << " color: " << anAuto.color
       << " patente: " << anAuto.patente << "\n";
    return os;
  }
};

template <typename T> void quicksort(T *arr, int start, int end) {
  T pivote = arr[start];
  int izq = start;
  int der = end;
  T temp;

  while (izq <= der) {
    while (arr[der] > pivote)
      der--;

    while (arr[izq] < pivote)
      izq++;

    if (izq <= der) {
      temp = arr[izq];
      arr[izq] = arr[der];
      arr[der] = temp;

      der--;
      izq++;
    }
  }

  if (der > start)
    quicksort(arr, start, der);
  if (izq < end)
    quicksort(arr, izq, end);
}

int main(int argc, char **argv) {
  Auto autos[] = {
      {1999, 1, "ABC123"}, {2000, 2, "QWE987"}, {3000, 4, "ZZZZZZ"},
      {2001, 1, "ABC323"}, {1234, 2, "ZBC123"}, {2345, 4, "AZC123"},
      {1999, 1, "AQC123"},
  };

  quicksort<Auto>(autos, 0, 6);

  for (auto &a : autos) {
    std::cout << a << std::endl;
  }

  std::cout << std::endl;

  std::cout << "Ejercicio 05/03\n" << std::endl;
  return 0;
}
