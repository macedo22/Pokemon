/*Implementation of the Pokemon base class, and its
derived classes: Fire, Water, and Grass. Contains
constructors for each pokemon type that modifies
their stats according to type. Also includes the 
implementation of the make_pokemon, which takes 
element type and name as input to create a new
pokemon.*/

#include <string>
#include <iostream>
#include "pokemon.h"

using namespace std;

//Getters for Pokemon base class

string Pokemon::get_name(){
	return name;
}

int Pokemon::get_level(){
	return level;
}

int Pokemon::get_hpMax(){
	return hpMax;
}

int Pokemon::get_hp(){
	return hp;
}

//stat modifications for the fire, water, and grass type pokemon

Fire:: Fire(int index){
			hp += 1;
			hpMax = hp;
			attack += 2;
			defense -= 2;
			specialAttack += 4;
			specialDefense -= 2;
			speed += 2;
			elem = FIRE;
		}

Water:: Water(int index){
			hp += 2;
			hpMax = hp;
			attack -= 2;
			defense += 2;
			specialAttack -= 1;
			specialDefense += 4;
			speed -= 1;
			elem = WATER;
		}


Grass::Grass(int index){
			hp -= 3;
			hpMax = hp;
			attack -= 2;
			defense += 0;
			specialAttack -= 3;
			specialDefense += 0;
			speed -= 2; 
			elem = GRASS;
		}

//friend function of the Pokemon class
/*Takes an element type and name to create a 
pointer to a new pokemon of the type passed,
which is returned.*/

Pokemon* make_pokemon(element e, string n){
	Pokemon* pokemon=new Pokemon;

	if (e == FIRE){
		static_cast<Fire*>(pokemon);
		cout << "Created a fire pokemon" << endl;//for test purposes
	}
	else if (e == WATER){
		static_cast<Water*>(pokemon);
	}

	else{
		static_cast<Grass*>(pokemon);
	}

	(*pokemon).name = n;
	(*pokemon).elem = e;

	return pokemon;
}

//sample main to test functions

/*
int main(){


	Pokemon* charmander=make_pokemon(FIRE, "Charmander");
	cout << "The new pokemon's name is: "<<(*charmander).get_name() << endl;//constructs fire object with default constructor and no stat modifications

	Water squirtle(123);
	int hp = squirtle.get_hp();

	cout << "Squirtle's hp is: " <<hp << endl;

	return 0;
}

*/