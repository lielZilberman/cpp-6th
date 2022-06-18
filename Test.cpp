#include <iostream>
#include "Game.cpp"
#include "League.cpp"
#include "Schedule.cpp"
#include "Team.cpp"
#include "doctest.h"

using namespace std;

TEST_CASE("should be working"){
    vector<Team> h;
    Team one("brokers", 0.2);
    Team two("sasd", 0.34);
    h.push_back(one);
    h.push_back(two);
    League k();
    CHECK_NOTHROW(one.get_talent());
    CHECK(one.get_talent() == 0.2);

}

TEST_CASE("should not be working"){
     vector<Team> h;
    Team one("brokers", 0.2);
    Team two("sasd", 0.34);
    h.push_back(one);
    h.push_back(two);
    League k();
    CHECK_THROWS(Team one("brokers", 39));
    CHECK_THROWS(Team one("", -341));
}