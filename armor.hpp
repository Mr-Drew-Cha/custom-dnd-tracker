#ifndef ARMOR_HPP
#define ARMOR_HPP


#include "battlestyle.hpp"
#include "item.hpp"

#include <vector>

enum class ArmorType {LIGHT, MEDIUM, HEAVY};

class Armor : public Item
{
public:
  Armor();
  // Post: Initializeds members to default/base values

  Armor(int in_health_bonus);
  // Post: Initializes health bonus to a specified value, and to default/base for the rest

  Armor(std::string in_name, std::string in_description, int in_cost,
        int in_health_bonus, ArmorType in_armor_type, std::vector<BattleStyle> in_resistances);
  // Post: Initializes name, description, cost, health bonus, armor type, and armor resistances

  ~Armor();
  // Post: Default Destructor

  // Mutators
  void setHealthBonus(int in_health_bonus);
  // Post: Sets m_health_bonus

  void setArmorType(ArmorType in_armor_type);
  // Post: Sets m_armor_type

  void setResistances(std::vector<BattleStyle> in_resistances);
  // Post: Sets m_resistances

  // Accessors
  int getHealthBonus() const;
  // Post: Returns armor's health bonus

  ArmorType getArmorType() const;
  // Post: Returns armor's type

  std::vector<BattleStyle> getResistances() const;
  // Post: Returns armor's resistances

private:
  int m_health_bonus;
  ArmorType m_armor_type;
  std::vector<BattleStyle> m_resistances;
};

#endif // ARMOR_HPP
