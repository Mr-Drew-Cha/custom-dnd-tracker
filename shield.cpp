#include "shield.hpp"

Shield::Shield()
  : m_block_types({BlockType::PHYSICAL}), m_die_type(DieType::D4)
{
  // Intentionally blank
}

Shield::Shield(std::vector<BlockType> in_block_types)
  : m_block_types(in_block_types), m_die_type(DieType::D4)
{
  // Intentionally blank
}

Shield::Shield(std::string in_name, std::string in_description, int in_cost,
               ArmorType in_armor_type, std::vector<BlockType> in_block_types, DieType in_die_type)
  : Armor(in_name, in_description, in_cost, in_armor_type), m_block_types(in_block_types), m_die_type(in_die_type)
{
  // Intentionally blank
}

// Mutators
void Shield::setBlockTypes(std::vector<BlockType> in_block_types)
{
  m_block_types = in_block_types;
}

void Shield::setDieType(DieType in_die_type)
{
  m_die_type = in_die_type;
}

// Accessors
std::vector<BlockType> Shield::getBlockTypes() const
{
  return m_block_types;
}

DieType Shield::getDieType() const
{
  return m_die_type;
}
