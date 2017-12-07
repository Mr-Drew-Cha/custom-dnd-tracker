// DnD Game

/*
	* Not all includes needed in main, just for debugging
	*
	* Consider giving Character only a name and making the race and class
	* a sub class
	*
	* Update armor for area (e.g. head)
	* Add shield objects
	*
	* Convert enums and vectors to string for cout
	* Consider enum for all item names (b/c select number)
	* Add insert and delete functions for vectors (weapon.hpp, armor.hpp)
	*
	* Dungeon master bipass
*/

#include "armor.hpp"
#include "character.hpp"
#include "item.hpp"
#include "weapon.hpp"

#include <iostream>
#include <string>

int main()
{
  Character Jim("Lin", "Human/Gnome", "Cleric");

  std::cout << "\n";

  std::cout << Jim.getName() << "\n\n";

  Weapon sword("Long Sword", "A good, solid sword", 50,
               10, true, {BattleStyle::SLASH});

  std::cout << sword.getName() << "\n";
  std::cout << sword.getDamage() << "\n\n";
  // std::cout << sword.getDamageTypes() << "\n"; // CONVERT TO STRING

  Armor armor("Helm", "Head protector", 10,
              4, ArmorType::MEDIUM, {BattleStyle::BLUNT});

  std::cout << armor.getName() << "\n";
  std::cout << armor.getHealthBonus() << "\n\n";
  // std::cout << armor.getArmorType() << "\t" << armor.getResistances() << "\n"; // CONVERT TO STRING

  return 0;
}
