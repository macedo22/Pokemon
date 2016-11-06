/*Alex Macedo
Project 6
email: macedo22@ucla.edu*/

/*Declaration of base class Pokemon and its derived
classes: Fire, Water, and Grass. The pokemon class
sets base stats that are modified in pokemon.h depending
on Pokemon type. Derived classes have no unique functions
other than their constructors. Also declared is the 
make_pokemon function that is a friend to the Pokemon 
class. It is used to make a pokemon of a certain type.*/

#include <string>

using namespace std;

enum element {FIRE, WATER, GRASS};

class Pokemon {

	protected:

		string name;
		int level=1;
		int hp=20;
		int hpMax=20;
		int attack=10;
		int defense=10;
		int specialAttack=10;
		int specialDefense=10;
		int speed=10;
		element elem;

	public:

		string get_name();
		int get_level();
		int get_hpMax();
		int get_hp();

		friend Pokemon* make_pokemon(element e, string n);

};

Pokemon* make_pokemon(element& e, string& n);

class Fire : public Pokemon{
public:
	Fire(int index);
};

class Water : public Pokemon{
public:
	Water(int index);
};

class Grass : public Pokemon{
public:
	Grass(int index);
};
