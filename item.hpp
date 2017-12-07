#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
public:
  Item();
  // Post: Initializes item's members to defualt values

  Item(std::string in_name, std::string in_description, int in_cost);
  // Post: Initializes item's to specified values

  ~Item();
  // Post: Destroys item object

  // Mutators
  void setName(std::string in_name);
  // Post: Sets m_name

  void setDescription(std::string in_description);
  // Post: Sets m_description

  void setCost(int in_cost);
  // Post: Sets m_cost;

  // Accessors
  std::string getName() const;
  // Post: Returns item's name

  std::string getDescription() const;
  // Post: Returns item's description

  int getCost() const;
  // Post: Returns item's cost in gold

private:
  std::string m_name;
  std::string m_description;
  int m_cost;
};

#endif // ITEM_HPP
