#pragma once

class TriangleNumberCalculator {
public:
    // Returns the nth triangular number
    int value(int n) const;

    // Adds the nth and mth triangular numbers
    int add(int n, int m) const;

    // Subtracts the mth triangular number from the nth
    int subtract(int n, int m) const;
};
