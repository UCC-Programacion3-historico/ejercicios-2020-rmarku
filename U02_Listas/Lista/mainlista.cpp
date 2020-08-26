//
// Created by martin on 19/8/20.
//
#include "List.h"
#include <iostream>

using namespace std;

int main(){
  List<char> l;

  l.insert(0, 'a');
  l.insert(0, 'b');

  cout << l.get(0) << endl;
  cout << l.get(1) << endl;


  return 0;
}