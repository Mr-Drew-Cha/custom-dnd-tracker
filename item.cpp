#include "item.hpp"


Item::Item()
  : m_name("None"), m_description("None"), m_cost(0)
{
  // Intentionally blank
}

Item::~Item()
{
  // Intentionally blank
}


// Mutators
Item::setName(std::string in_name)
{
  m_name = in_name;
}

Item::setDescription(std::string in_description)
{
  m_description = in_description;
}

Item::setCost(int in_cost)
{
  m_cost = in_cost;
}


// Accessors
Item::getName()
{
  return m_name;
}

Item::getDescription()
{
  return m_description;
}

Item::getCost()
{
  return m_cost;
}
