// DnD Game

/*
	Consider giving Character only a name and making the race and class
	a sub class
	*
	* Add armor and weapon objects
	* Dungeon master bipass
*/

#include "character.hpp"
#include <iostream>
#include <string>

int main()
{
	Character Joseph("Lin", "Human/Gnome", "Cleric");

	std::cout << std::endl; // formatting

	std::cout << Joseph.getName();

	return 0;
}
