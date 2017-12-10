#include "item.hpp"

Item::Item()
  : m_name("None"), m_description("None"), m_cost(0)
{
  // Intentionally blank
}

Item::Item(std::string in_name, std::string in_description, int in_cost)
  : m_name(in_name), m_description(in_description), m_cost(in_cost)
{
  // Intentionally blank
}


// Mutators
void Item::setName(std::string in_name)
{
  m_name = in_name;
}

void Item::setDescription(std::string in_description)
{
  m_description = in_description;
}

void Item::setCost(int in_cost)
{
  m_cost = in_cost;
}


// Accessors
std::string Item::getName() const
{
  return m_name;
}

std::string Item::getDescription() const
{
  return m_description;
}

int Item::getCost() const
{
  return m_cost;
}
