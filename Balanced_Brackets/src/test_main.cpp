#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "Balanced_Brackets.h"

TEST_CASE("Balanced Brackets Test", "[brackets]") 
{
    SECTION("Single pair of brackets") 
    {
        REQUIRE(checkBracketsBalanced("()"));
        REQUIRE(checkBracketsBalanced("[]"));
        REQUIRE(checkBracketsBalanced("{}"));
    }

    SECTION("Multiple pairs of balanced brackets") 
    {
        REQUIRE(checkBracketsBalanced("()[]{}"));
        REQUIRE(checkBracketsBalanced("{[()()]}"));
        REQUIRE(checkBracketsBalanced("({[]})"));
    }

    SECTION("Nested balanced brackets") 
    {
        REQUIRE(checkBracketsBalanced("{[()]}"));
        REQUIRE(checkBracketsBalanced("((()))"));
        REQUIRE(checkBracketsBalanced("[{()}]"));
    }

    SECTION("Unbalanced brackets") 
    {
        REQUIRE_FALSE(checkBracketsBalanced("("));
        REQUIRE_FALSE(checkBracketsBalanced("]"));
        REQUIRE_FALSE(checkBracketsBalanced("{]"));
        REQUIRE_FALSE(checkBracketsBalanced("{[}]"));
        REQUIRE_FALSE(checkBracketsBalanced("([)]"));
    }

    SECTION("Mixed characters with balanced brackets") 
    {
        REQUIRE(checkBracketsBalanced("a(b)c[d]e{f}g"));
        REQUIRE(checkBracketsBalanced("abc"));
    }

    SECTION("Empty string") 
    {
        REQUIRE(checkBracketsBalanced(""));
    }
}