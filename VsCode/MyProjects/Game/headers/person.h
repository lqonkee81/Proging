#include <string>

using namespace std;

class person
{
public:
    person(string Name);

    void SetHealth(int Health);

    int Attack(); //Get gamage value
    int GetHealth();
    string GetName();

protected:
    string Name;
    int Health;
    int Damage;
};