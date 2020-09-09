#include "../../U04_Colas/Cola/Queue.h"
#include "gtest/gtest.h"

Queue<int> *colaTest;

TEST(U04_Colas, nuevaColaVacia) {
  colaTest = new Queue<int>();
  EXPECT_EQ(colaTest->isEmpty(), true);
}

TEST(U04_Colas, agregoTres_noVacia) {
  colaTest->enqueue(3);
  colaTest->enqueue(2);
  colaTest->enqueue(1);
  EXPECT_EQ(colaTest->isEmpty(), false);
}

TEST(U04_Colas, dequeueMiesmoSentido) {
  EXPECT_EQ(colaTest->dequeue(), 3);
  EXPECT_EQ(colaTest->dequeue(), 2);
  EXPECT_EQ(colaTest->dequeue(), 1);
  EXPECT_EQ(colaTest->isEmpty(), true);
}

TEST(U04_Colas, otroPopException) { EXPECT_ANY_THROW(colaTest->dequeue()); }
