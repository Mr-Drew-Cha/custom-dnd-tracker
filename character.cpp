// Character class file

/* Prospective
	Add age string
	Add money/gold integer
	Have constructor print attributes
	Add Armor object
	Add Main, Side Arm, and Backup
	Add Spells/Abilities
	Add Inventory
	Add traits, languages, and other proficiencies
*/

#include "Character.hpp"
#include <iostream>
#include <string>

// Constructor
Character::Character(std::string name, std::string race, std::string class_set)
: level(1), xp(0.00),
health(1.00), armor(1.00), speed(5.00)
strength(1.00), dexterity(1.00), constitution(1.00), intelligence(1.00), wisdom(1.00), charisma(1.00)
{
	setName(name);
	setRace(race);
	setClass(class_set);

	std::cout << "Welcome to the party!";
}

Character::~Character()
{
	std::cout << "\n\nFarewell, sir!";
}


// Setters Attributes 1
void Character::setName(std::string in_name)
{
	name = in_name;
}

void Character::setRace(std::string in_race)
{
	race = in_race;
}

void Character::setClass(std::string in_class_set)
{
	class_set = in_class_set;
}


// Setters Attributes 2
void Character::setLevel(int in_level)
{
	level = in_level;
}

void Character::setXp(float in_xp)
{
	xp = 0.00;
}

void Character::setHealth(float in_health)
{
	health = in_health;
}

void Character::setArmor(float in_armor)
{
	armor = in_armor;
}

void Character::setSpeed(float in_speed)
{
	speed = in_speed;
}


// Setters Attributes 3
void Character::setStrength(float in_strength)
{
	strength = in_strength;
}

void Character::setDexterity(float in_dexterity)
{
	dexterity = in_dexterity;
}

void Character::setConstitution(float in_constitution)
{
	constitution = in_constitution;
}

void Character::setIntelligence(float in_intelligence)
{
	intelligence = in_intelligence;
}

void Character::setWisdom(float in_wisdom)
{
	wisdom = in_wisdom;
}

void Character::setCharisma(float in_charisma)
{
	charisma = in_charisma;
}


// Getters Attributes 1
std::string Character::getName()
{
	return name;
}

std::string Character::getRace()
{
	return race;
}

std::string Character::getClass()
{
	return class_set;
}


// Getters Attributes 2
int Character::getLevel()
{
	return level;
}

float Character::getXp()
{
	return xp;
}

float Character::getHealth()
{
	return health;
}

float Character::getArmor()
{
	return armor;
}

float Character::getSpeed()
{
	return speed;
}


// Getters Attributes 3
float Character::getStrength()
{
	return strength;
}

float Character::getDexterity()
{
	return dexterity;
}

float Character::getConstitution()
{
	return constitution;
}

float Character::getIntelligence()
{
	return intelligence:
}

float Character::getWisdom()
{
	return wisdom;
}

float Character::getCharisma()
{
	return charisma;
}
