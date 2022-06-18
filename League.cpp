#include <iostream>
#include <string>
#include <vector>
#include "Team.cpp"

using namespace std;

class League
{
public:
    vector<Team> theTeams;
    League();
    void table();
};

League::League()
{
    
}

void bubbleSort(vector<Team> t)
{
    int i, j;
    for (i = 0; i < t.size() - 1; i++)
        // Last i elements are already
        // in place
        for (j = 0; j < t.size() - i - 1; j++)
            if (t[j].points > t[j + 1].points)
                swap(t[j], t[j + 1]);
}

void League::table()
{
    bubbleSort(this->theTeams);
    for (size_t i = 0; i < this->theTeams.size(); i++)
    {
        cout << i << ": " << theTeams.at(i).get_name() << endl;
    }
}
