#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, Resize) {
  Stack* s = new Stack(2);
  s->push(1);
  s->push(2);
  s->push(3);

  EXPECT_EQ(3, s->peek());
  s->push(4);
  s->push(5);
  EXPECT_EQ(5, s->peek());
  delete s;
}
