#include "../../U02_Listas/Ej-04/union.h"
#include "../../U02_Listas/Lista/List.h"
#include "gtest/gtest.h"

TEST(U02_Ej04_test, unirDosListas) {
  List<int> l1, l2;
  int i;
  for (i = 0; i < 10; i++)
    l1.push_back(i);

  for (; i < 20; i++)
    l2.push_back(i);

  List<int> *lf = unir(l1, l2);

  EXPECT_EQ(lf->get(13), 13);
}
