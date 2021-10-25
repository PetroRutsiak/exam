#include <iostream>
#include <string>
enum MonsterType
{
    Goblin,
    Orc,
    Dragon,
    Ogre,
    Skeleton,
    Troll,
    Vempire,
    Zombie,
    Vlad_creep,
    MAX_MONSTER_TYPES
};
std::string getTypeString(MonsterType m_type)
{
    switch (m_type)
    {
    case Goblin:return "Goblin";
    case Orc: return "Orc";
    case Dragon: return "Dragon";
    case Ogre: return "Ogre";
    case Skeleton: return "Skeleton";
    case Troll: return "Troll";
    case Vempire: return "Vempire";
    case Zombie: return "Zombie";
    case Vlad_creep: return "Vlad_creep";
    case MAX_MONSTER_TYPES: return "MAX_MONSTER_TYPES";
    }
    return"Error!";
}
class Monster
{
private:
    MonsterType m_type;
    std::string m_name;
    int m_health;
public:
    void setHealth(int newhealth)
    {
        m_health = newhealth;
    }
    Monster(MonsterType type, std::string name, int health)
        :m_type(type), m_name(name), m_health(health)
    {
    }
    void print()
    {
        std::cout << m_name << " is the " << getTypeString(m_type) << " that has " << m_health << " health points." << '\n';
    }
};
class MonsterGenerator
{
public:
    static int getRandomNumber(int min, int max)
    {
        static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
        return static_cast<int>(rand() * fraction * (max - min + 1) + min);
    }
    static Monster generateMonster()
    {
        return Monster(MonsterType::Orc, "Jack", 90);
    }
};
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    rand();
    Monster m = MonsterGenerator::generateMonster();
    int x = MonsterGenerator::getRandomNumber(1, 100);
    m.setHealth(x);
    m.print();
    return 0;
}