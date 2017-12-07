#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "battlestyle.hpp"
#include "item.hpp"

#include <vector>

class Weapon : public Item
{
public:
  Weapon();
  // Post: Initializes members to default/base values

  Weapon(int in_damage);
  // Post: Initializes damage to a specified value, martial = false

  Weapon(std::string in_name, std::string in_description, int in_cost,
         int in_damage, bool in_martial, std::vector<BattleStyle> in_damage_types);
  // Post: Initializes damage, martial, & damage_type toa specified value

  ~Weapon();
  // Post: Default Destructor

  // Mutators
  void setDamage(int in_damage);
  // Post: Sets m_damage

  void setMartial(bool in_martial);
  // Post: Sets m_martial

  void setDamageTypes(std::vector<BattleStyle> in_damage_types);
  // Post: Sets m_damage_types

  // Accessors
  int getDamage() const;
  // Post: Returns weapon's damage

  bool getMartial() const;
  // Post: Returns weapon's martial status

  std::vector<BattleStyle> getDamageTypes() const;
  // Post: Returns weapon's damage types

private:
  int m_damage;
  bool m_martial;
  std::vector<BattleStyle> m_damage_types;
};

#endif // WEAPON_HPP
