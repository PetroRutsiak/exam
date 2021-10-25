#include <iostream>
#include < list>
#include < iterator>

class Animal
{
public:
	std::string tipe;
	std::string name;
};
class Zoo
{
public:
	std::list <Animal> zoo;
	void addAnimal(Animal Animal)
	{
		zoo.push_back(Animal);
	}
	void Print()
	{
		for (auto animal : zoo)
		{
			std::cout << animal.tipe << " " << animal.name << "\n";
		}
	}
	void removeAnimal(int _index)
	{
		std::list<Animal>::iterator iterator = zoo.begin();
		std::advance(iterator, _index);
		zoo.erase(iterator);
	}
};
int main()
{
	Zoo Madagaskar{};
	Animal Simba{ "cats","Simba" };
	Animal Gloria{ "hippopotamus","Gloria" };

	Madagaskar.addAnimal(Simba);
	Madagaskar.addAnimal(Gloria);
	Madagaskar.removeAnimal(0);
	Madagaskar.Print();

	return 0;
}