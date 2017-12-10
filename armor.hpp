#ifndef ARMOR_HPP
#define ARMOR_HPP


#include "battlestyle.hpp"
#include "item.hpp"

#include <vector>

// MOVE?
enum class ArmorType {LIGHT, MEDIUM, HEAVY};
enum class ArmorFit {HEAD, BODY, HAND, LEG};

class Armor : public Item
{
public:
  Armor();
  // Post: Initializeds members to default/base values

  Armor(int in_health_bonus);
  // Post: Initializes health bonus to a specified value, and to default/base for the rest

  Armor(std::string in_name, std::string in_description, int in_cost, ArmorType in_armor_type);
  // Post: Initializes name, description, and armor type to specified values, used for shields

  Armor(std::string in_name, std::string in_description, int in_cost,
        int in_health_bonus, ArmorType in_armor_type, ArmorFit in_armor_fit, std::vector<BattleStyle> in_resistances);
  // Post: Initializes name, description, cost, health bonus, armor type, armor fit, and armor resistances to specified values

  ~Armor();
  // Post: Default Destructor

  // Mutators
  void setHealthBonus(int in_health_bonus);
  // Post: Sets m_health_bonus

  void setArmorType(ArmorType in_armor_type);
  // Post: Sets m_armor_type

  void setArmorFit(ArmorFit in_armor_fit);
  // Post: Sets m_armor_fit

  void setResistances(std::vector<BattleStyle> in_resistances);
  // Post: Sets m_resistances

  // Accessors
  int getHealthBonus() const;
  // Post: Returns armor's health bonus

  ArmorType getArmorType() const;
  // Post: Returns armor's type

  ArmorFit getArmorFit() const;
  // Post: Returns where armor fitss

  std::vector<BattleStyle> getResistances() const;
  // Post: Returns armor's resistances

private:
  int m_health_bonus;
  ArmorType m_armor_type;
  ArmorFit m_armor_fit;
  std::vector<BattleStyle> m_resistances;
};

#endif // ARMOR_HPP
