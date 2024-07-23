#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "Single_Number.h"

TEST_CASE("getSingleNumber test cases", "[getSingleNumber]")
{
    SECTION("Single number in a single-element array")
    {
        REQUIRE(getSingleNumber({7}) == 7);
    }

    SECTION("Basic case with small array")
    {
        REQUIRE(getSingleNumber({1, 2, 1}) == 2);  // 2 is the single number
    }

    SECTION("Another basic case with small array")
    {
        REQUIRE(getSingleNumber({4, 5, 4}) == 5);  // 5 is the single number
    }

    SECTION("Case with larger array")
    {
        REQUIRE(getSingleNumber({10, 15, 10, 20, 15}) == 20);  // 20 is the single number
    }

    SECTION("Case with negative numbers")
    {
        REQUIRE(getSingleNumber({-1, -2, -1}) == -2);  // -2 is the single number
    }

    SECTION("Case with mixed positive and negative numbers")
    {
        REQUIRE(getSingleNumber({100, -100, 100, 0, 0}) == -100);  // -100 is the single number
    }

    SECTION("Case with multiple pairs")
    {
        REQUIRE(getSingleNumber({2, 2, 3, 3, 4, 4, 5}) == 5);  // 5 is the single number
    }
}