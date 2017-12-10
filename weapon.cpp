#include "battlestyle.hpp"
#include "weapon.hpp"

Weapon::Weapon()
  : m_damage(1), m_martial(false), m_damage_types({BattleStyle::NONE})
{
  // Intentionally blank
}

Weapon::Weapon(int in_damage)
  : m_damage(in_damage), m_martial(false), m_damage_types({BattleStyle::NONE})
{
  // Intentionally blank
}

Weapon::Weapon(std::string in_name, std::string in_description, int in_cost,
               int in_damage, bool in_martial, std::vector<BattleStyle> in_damage_types)
  : Item(in_name, in_description, in_cost), m_damage(in_damage), m_martial(in_martial), m_damage_types({in_damage_types})
{
  // Intentionally blank
}


// Mutators
void Weapon::setDamage(int in_damage)
{
  m_damage = in_damage;
}

void Weapon::setMartial(bool in_martial)
{
  m_martial = in_martial;
}

void Weapon::setDamageTypes(std::vector<BattleStyle> in_damage_types)
{
  m_damage_types = in_damage_types;
}


// Accessors
int Weapon::getDamage() const
{
  return m_damage;
}

bool Weapon::getMartial() const
{
  return m_martial;
}

std::vector<BattleStyle> Weapon::getDamageTypes() const
{
  return m_damage_types;
}
