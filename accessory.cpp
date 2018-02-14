#include "accessory.hpp"

Accessory::Accessory()
 : m_bonus(0), m_accessory_fit(AccessoryFit::Head)
{
  // Intentionally blank
}

Accessory::Accessory(int in_bonus, AccessoryFit in_accessory_fit)
 : m_bonus(in_bonus), m_accessory_fit(in_accessory_fit)
{
  // Intentionally blank
}

// Mutators
