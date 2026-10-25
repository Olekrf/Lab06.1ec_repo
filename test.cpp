
#include <gtest/gtest.h>

#define main h_main
#include "lab06_1_rec.cpp"
#undef main

int Count(int* r, const int size);
int Sum(int* r, const int size);


TEST(CountTest, CountValidElementsRecursive) {
    int r[] = {12, 8};
    EXPECT_EQ(Count(r, 1, 0), 1);
}

TEST(SumTest, SumValidElementsRecursive) {
    int r[] = {12, 8};
    EXPECT_EQ(Sum(r, 1, 0), 12);
}
