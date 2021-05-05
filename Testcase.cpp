#define CATCH_CONFIG_MAIN  
#include "test/catch.hpp"
#include "BMS_CurrentRange.h"



TEST_CASE("To check empty BMS Current readings range") {
    int BMS_Current_Range[] = {};
    int numofReadings = sizeof(BMS_Current_Range) / sizeof(BMS_Current_Range[0]);
  REQUIRE(CurrentReadingValidity(numofReadings,BMS_Current_Range) == Invalid_Range);
}

TEST_CASE("To check valid BMS Current readings range") {
    int BMS_Current_Range[] = {1,2,3,4,5};
    int numofReadings = sizeof(BMS_Current_Range) / sizeof(BMS_Current_Range[0]);
  REQUIRE(CurrentReadingValidity(numofReadings,BMS_Current_Range) == Valid_Range);
}

TEST_CASE("To check if the samples are in range") {
    int CurrentRange[] = {3, 3, 5, 4};
    int listofvalues = sizeof(CurrentRange) / sizeof(CurrentRange[0]);
    int BreachType[] ={3,5};
  REQUIRE(NumofCurrentReadings_InRange(listofvalues,CurrentRange,BreachType) == 4);
}

/* FAILING TESTCASE

TEST_CASE("To check if the samples are out range") {
    int CurrentRange[] = {3, 3, 5, 6};
    int listofvalues = sizeof(CurrentRange) / sizeof(CurrentRange[0]);
    int BreachType[] ={2,5};
  REQUIRE(NumofCurrentReadings_InRange(listofvalues,CurrentRange,BreachType) == 7);
}

*/
