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

Character::Character(std::string in_name, Race in_race, ClassSet in_class_set)
  : m_name(in_name), m_race(in_race), m_class_set(in_class_set),
    m_level(1), m_xp(0),
m_health(1.00), m_armor(1.00), m_speed(5.00),
m_strength(1.00), m_dexterity(1.00), m_constitution(1.00), m_intelligence(1.00), m_wisdom(1.00), m_charisma(1.00)
{
  // Intentionally blank
}


// Mutators Attributes 1
void Character::setName(std::string in_name)
{
	m_name = in_name;
}

void Character::setRace(Race in_race)
{
	m_race = in_race;
}

void Character::setClass(ClassSet in_class_set)
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
std::string Character::getName() const
{
	return m_name;
}

Race Character::getRace() const
{
	return m_race;
}

ClassSet Character::getClass() const
{
	return m_class_set;
}


// Accessors Attributes 2
int Character::getLevel() const
{
	return m_level;
}

int Character::getXp() const
{
	return m_xp;
}

float Character::getHealth() const
{
	return m_health;
}

float Character::getArmor() const
{
	return m_armor;
}

float Character::getSpeed() const
{
	return m_speed;
}


// Accessors Attributes 3
float Character::getStrength() const
{
	return m_strength;
}

float Character::getDexterity() const
{
	return m_dexterity;
}

float Character::getConstitution() const
{
	return m_constitution;
}

float Character::getIntelligence() const
{
	return m_intelligence;
}

float Character::getWisdom() const
{
	return m_wisdom;
}

float Character::getCharisma() const
{
	return m_charisma;
}
