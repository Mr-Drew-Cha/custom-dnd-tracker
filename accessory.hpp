#ifndef ACCESSORY_HPP
#define ACCESSORY_HPP

enum class AccessoryFit {Head, Neck, Hand};

class Accessory : public Item
{
public:
  Accessory();
  // Initializes members to default/base values

  Accessory(int in_bonus, AccessoryFit in_accessory_fit);
  // Initializes bonus and fit type to specified stat



private:
  int m_bonus;
  AccessoryFit m_accessory_fit;
};

#endif // ACCESSORY_HPP
