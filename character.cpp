// Character class file

/* Prospective
	Add age int
	Add money/gold integer
	Have constructor print attributes
	Add Armor object
	Add Main, Side Arm, and Backup
	Add Spells/Abilities
	Add Inventory
	Add traits, languages, and other proficiencies
*/

#include "character.hpp"

#include <iostream>
#include <string>

Character::Character(std::string name, std::string race, std::string class_set)
  : m_level(1), m_xp(0),
m_health(1.00), m_armor(1.00), m_speed(5.00),
m_strength(1.00), m_dexterity(1.00), m_constitution(1.00), m_intelligence(1.00), m_wisdom(1.00), m_charisma(1.00)
{
	setName(name);
	setRace(race);
	setClass(class_set);

	std::cout << "Welcome to the party!";
}

Character::~Character()
{
	std::cout << "\n\nFarewell!";
}


// Mutators Attributes 1
void Character::setName(std::string in_name)
{
	m_name = in_name;
}

void Character::setRace(std::string in_race)
{
	m_race = in_race;
}

void Character::setClass(std::string in_class_set)
{
	m_class_set = in_class_set;
}


// Mutators Attributes 2
void Character::setLevel(int in_level)
{
	m_level = in_level;
}

void Character::setXp(int in_xp)
{
	m_xp = in_xp;
}

void Character::setHealth(float in_health)
{
	m_health = in_health;
}

void Character::setArmor(float in_armor)
{
	m_armor = in_armor;
}

void Character::setSpeed(float in_speed)
{
	m_speed = in_speed;
}


// Mutators Attributes 3
void Character::setStrength(float in_strength)
{
	m_strength = in_strength;
}

void Character::setDexterity(float in_dexterity)
{
	m_dexterity = in_dexterity;
}

void Character::setConstitution(float in_constitution)
{
	m_constitution = in_constitution;
}

void Character::setIntelligence(float in_intelligence)
{
	m_intelligence = in_intelligence;
}

void Character::setWisdom(float in_wisdom)
{
	m_wisdom = in_wisdom;
}

void Character::setCharisma(float in_charisma)
{
	m_charisma = in_charisma;
}


// Accessors Attributes 1
std::string Character::getName()
{
	return m_name;
}

std::string Character::getRace()
{
	return m_race;
}

std::string Character::getClass()
{
	return m_class_set;
}


// Accessors Attributes 2
int Character::getLevel()
{
	return m_level;
}

int Character::getXp()
{
	return m_xp;
}

float Character::getHealth()
{
	return m_health;
}

float Character::getArmor()
{
	return m_armor;
}

float Character::getSpeed()
{
	return m_speed;
}


// Accessors Attributes 3
float Character::getStrength()
{
	return m_strength;
}

float Character::getDexterity()
{
	return m_dexterity;
}

float Character::getConstitution()
{
	return m_constitution;
}

float Character::getIntelligence()
{
	return m_intelligence;
}

float Character::getWisdom()
{
	return m_wisdom;
}

float Character::getCharisma()
{
	return m_charisma;
}
