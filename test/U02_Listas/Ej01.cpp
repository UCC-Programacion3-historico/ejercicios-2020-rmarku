#include <climits>

#include "../../U02_Listas/Ej-01/fnInvierte.h"
#include "../../U02_Listas/Lista/List.h"
#include "gtest/gtest.h"

TEST(U02_Ej01_test, Invertir50) {
  List<uint8_t> l;

  for (int i = 0; i < 50; i++)
    l.push_back(i);

  fnInvierte(&l);

  for (int i = 0; i < 50; i++) {
    EXPECT_EQ(l.get(i), 49 - i);
  }
}

TEST(U02_Ej01_test, InvertirVacia) {
  List<uint8_t> l;
  fnInvierte<uint8_t>(&l);
  EXPECT_EQ(l.isEmpty(), true);
}
