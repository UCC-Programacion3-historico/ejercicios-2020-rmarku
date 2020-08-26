#include "../../U02_Listas/Lista/List.h"

#include "gtest/gtest.h"

List<int> *l1;

TEST(U02_Lista, nuevaListaTamanioCero) {
  l1 = new List<int>();
  EXPECT_EQ(l1->getSize(), 0);
  EXPECT_EQ(l1->isEmpty(), true);
}

TEST(U02_Lista, agregoTres_getTamanio) {
  l1->push_front(3);
  EXPECT_EQ(l1->getSize(), 1);
  l1->push_front(2);
  EXPECT_EQ(l1->getSize(), 2);
  l1->push_front(1);
  EXPECT_EQ(l1->getSize(), 3);
}

TEST(U02_Lista, getDato) {
  EXPECT_EQ(l1->get(0), 1);
  EXPECT_EQ(l1->get(1), 2);
  EXPECT_EQ(l1->get(2), 3);
}

TEST(U02_Lista, insertarUltimo) {
  l1->push_back(200);
  EXPECT_EQ(l1->get(3), 200);
  l1->push_back(300);
  EXPECT_EQ(l1->get(4), 300);
}

TEST(U02_Lista, insertar) {
  l1->insert(1, 321);
  EXPECT_EQ(l1->get(1), 321);
  l1->insert(1, 123);
  EXPECT_EQ(l1->get(1), 123);
  EXPECT_EQ(l1->get(2), 321);
}

TEST(U02_Lista, remover) {
  l1->remove(1);
  EXPECT_EQ(l1->get(1), 321);
  l1->remove(1);
  EXPECT_EQ(l1->get(1), 2);
}

TEST(U02_Lista, reemplazar) {
  l1->replace(1, 300);
  EXPECT_EQ(l1->get(1), 300);
  l1->replace(1, 456);
  EXPECT_EQ(l1->get(1), 456);
}

TEST(U02_Lista, vaciar) {
  l1->clear();
  EXPECT_EQ(l1->isEmpty(), true);
  EXPECT_EQ(l1->getSize(), 0);
}

TEST(U02_Lista, getDato_fueraDeRango) {
  l1->push_front(3);
  EXPECT_ANY_THROW(l1->get(10));
}

TEST(U02_Lista, remover_fueraDeRango) {
  l1->push_front(3);
  EXPECT_ANY_THROW(l1->remove(10));
}
