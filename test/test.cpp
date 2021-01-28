#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>
#include <string>
#include "helloWorld.h"

TEST_CASE("Test heloWorld", "[test]") {
    HelloWorld helloWorld;

    REQUIRE("Hello World!" == helloWorld.helloWorld());
}

TEST_CASE("Test fffffff", "[fffffff]") {
    HelloWorld helloWorld;

    REQUIRE("Hello World!" == helloWorld.helloWorld());
}
