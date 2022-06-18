#include <iostream>
#include <string>
#include "Team.cpp"

using namespace std;

class Game
{
private:
    Team home;
    Team away;
    int home_points;
    int away_points;

public:
    Game(Team &home, Team &away);
    void match();
    Team winner();
};

Game::Game(Team &home, Team &away) : home(home), away(away), home_points(0), away_points(0) {}

void Game::match()
{
    this->away_points = (rand() % 51) + 50 + this->away.get_talent() * 10;
    this->home_points = (rand() % 51) + 55 + this->home.get_talent() * 10;
}

Team Game::winner(){
    if (home_points > away_points)
    {
        return home;
    }
    else if (away_points > home_points)
    {
        return away;
    }
    else{
        return home;
    }
    
    
}

