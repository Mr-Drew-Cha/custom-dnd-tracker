#ifndef SHIELD_HPP
#define SHIELD_HPP


#include "armor.hpp"

#include <vector>

class Shield : public Armor
{
public:
  Shield();
  // Post: Initializes members to default/base values

  Shield(std::vector<BlockType> in_block_types);
  // Post: Initializes block type to a specified value, and to default/base value for the rest

  Shield(std::string in_name, std::string in_description, std::string in_cost,
         DieType in_die_type, ArmorType in_armor_type, std::vector<BlockType> in_block_types);
  // Post: Initializes name, description, cost, die type, armor type, and block types to specified values

  // Mutators
  void setBlockTypes(std::vector<BlockType> in_block_types);
  // Post: Sets m_block_types

  void setDieType(DieType in_die_type);
  // Post: Sets m_die_type

  // Accessors
  std::vector<BlockType> getBlockTypes() const;
  // Post: Returns shield's block types

  DieType getDieType() const;
  // Post: Returns shield's die type

  // Public Variables
  enum class BlockType {PHYSICAL, MAGIC};
  enum class DieType {D4, D6, D8, D10, D12, D20};

private:
  const int m_health_bonus = 0;
  std::vector<BlockType> m_block_types;
  DieType m_die_type;
};

#endif // SHIELD_HPP
