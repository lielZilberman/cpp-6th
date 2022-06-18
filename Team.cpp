#include <iostream>
#include <string>

using namespace std;

class Team
{
private:
    string name;
    int talent;
public:
    int points;
    Team(string name, int talent);
    int get_talent();
    string get_name();
};

Team::Team(string name, int talent): name(name), talent(talent){}
int Team::get_talent(){
    return this->talent;
}
string Team::get_name(){
    return this->name;
}

