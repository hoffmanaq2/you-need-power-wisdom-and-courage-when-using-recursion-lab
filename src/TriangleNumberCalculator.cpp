#include "TriangleNumberCalculator.hpp"

// Triangular number formula: n(n + 1) / 2
int TriangleNumberCalculator::value(int n) const {
   return n * (n + 1) / 2;
}

int TriangleNumberCalculator::add(int n, int m) const {
   return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) const {
   return value(n) - value(m);
}