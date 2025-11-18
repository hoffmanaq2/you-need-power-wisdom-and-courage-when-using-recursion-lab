#include <iostream>
#include "src/TriangleNumberCalculator.hpp"
using namespace std;

int main() {
  TriangleNumberCalculator calc;

  int n, m;

  cout << "Enter value for n: ";
  cin >> n;

  cout << "Enter value for m: ";
  cin >> m;

  cout << "\nTriangular number of " << n << " = " << calc.value(n) << endl;
  cout << "Triangular number of " << m << " = " << calc.value(m) << endl;

  cout << "Add (" << n << ", " << m << ") = " << calc.add(n, m) << endl;
  cout << "Subtract (" << n << ", " << m << ") = " << calc.subtract(n, m) << endl;

  return 0;
}
