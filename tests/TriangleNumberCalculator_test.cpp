#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/TriangleNumberCalculator.hpp"

TEST_CASE("value() calculates triangular numbers correctly") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.value(1) == 1);
    REQUIRE(calc.value(2) == 3);
    REQUIRE(calc.value(3) == 6);
    REQUIRE(calc.value(4) == 10);
    REQUIRE(calc.value(5) == 15);
    REQUIRE(calc.value(10) == 55);
}

TEST_CASE("add() correctly adds triangular numbers") {
    TriangleNumberCalculator calc;

    // T(3) = 6, T(4) = 10
    REQUIRE(calc.add(3, 4) == 16);

    // T(1) = 1, T(5) = 15
    REQUIRE(calc.add(1, 5) == 16);

    // T(6) = 21, T(6) = 21
    REQUIRE(calc.add(6, 6) == 42);
}

TEST_CASE("subtract() correctly subtracts triangular numbers") {
    TriangleNumberCalculator calc;

    // T(5) = 15, T(3) = 6
    REQUIRE(calc.subtract(5, 3) == 9);

    // T(4) = 10, T(1) = 1
    REQUIRE(calc.subtract(4, 1) == 9);

    // subtracting equal triangular numbers = 0
    REQUIRE(calc.subtract(7, 7) == 0);
}
