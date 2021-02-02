#include <string>

class person
{
public:
    person(std::string Name);

    std::string GetName();
    int Attack();

protected:
    std::string Name;
    int Health;
    int Damage;
};