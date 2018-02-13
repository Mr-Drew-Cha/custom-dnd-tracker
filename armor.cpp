#include "armor.hpp"

Armor::Armor()
  : m_health_bonus(0), m_armor_type(ArmorType::MEDIUM), m_armor_fit(ArmorFit::BODY), m_resistances({BattleStyle::NONE})
{
  // Intentionally blank
}

Armor::Armor(int in_health_bonus)
  : m_health_bonus(in_health_bonus), m_armor_type(ArmorType::MEDIUM), m_armor_fit(ArmorFit::BODY), m_resistances({BattleStyle::NONE})
{
  // Intentionally blank
}

Armor::Armor(std::string in_name, std::string in_description, int in_cost, ArmorType in_armor_type)
  : Item(in_name, in_description, in_cost), m_armor_type(in_armor_type)
{
  // Intentionally blank
}

Armor::Armor(std::string in_name, std::string in_description, int in_cost,
               int in_health_bonus, ArmorType in_armor_type, ArmorFit in_armor_fit, std::vector<BattleStyle> in_resistances)
  : Item(in_name, in_description, in_cost), m_health_bonus(in_health_bonus), m_armor_type(in_armor_type), m_armor_fit(in_armor_fit), m_resistances({in_resistances})
{
  // Intentionally blank
}


// Mutators
void Armor::setHealthBonus(int in_health_bonus)
{
  m_health_bonus = in_health_bonus;
}

void Armor::setArmorType(ArmorType in_armor_type)
{
  m_armor_type = in_armor_type;
}

void Armor::setArmorFit(ArmorFit in_armor_fit)
{
  m_armor_fit = in_armor_fit;
}

void Armor::setResistances(std::vector<BattleStyle> in_resistances)
{
  m_resistances = in_resistances;
}


// Accessors
int Armor::getHealthBonus() const
{
  return m_health_bonus;
}

ArmorType Armor::getArmorType() const
{
  return m_armor_type;
}

ArmorFit Armor::getArmorFit() const
{
  return m_armor_fit;
}

std::vector<BattleStyle> Armor::getResistances() const
{
  return m_resistances;
}
