#include <iostream>
#include <string>
#include <vector>
#include "Team.cpp"

using namespace std;

class Schedule
{

public:
    vector<int> luz;
    Schedule(vector<Team> team);
};

Schedule::Schedule(vector<Team> team)
{
    for (size_t i = 0; i < team.size(); i++)
    {
        luz.at(i) = team.at(i).get_talent();
    }
    
}

