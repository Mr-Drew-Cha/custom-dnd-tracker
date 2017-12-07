// DnD Game

/*
	Consider giving Character only a name and making the race and class
	a sub class
	*
	* Add armor and weapon objects
	* Dungeon master bipass
*/

// Other Files:
// ADD ITEM PARAMETERS TO CONSTRUCTORS (weapon.hpp)
// CONSIDER enum for item names (weapon.hpp)
// CONSIDER adding an insert & delete BattleStyle functions (weapon.hpp)

#include "character.hpp"
#include "item.hpp"
#include "weapon.hpp"

#include <iostream>
#include <string>

int main()
{
  /*
  Character Jim("Lin", "Human/Gnome", "Cleric");

  std::cout << "\n"; // formatting

  std::cout << Jim.getName();
  */

  //Weapon sword();

  Weapon sword("Long Sword", "A good, solid sword", 50,
               10, true, {BattleStyle::SLASH});

  // sword.setName("Xcaliber");

  std::cout << sword.getName() << "\n";
  std::cout << sword.getDamage() << "\n";
  std::cout << sword.getDamageTypes() << "\n";

  return 0;
}
