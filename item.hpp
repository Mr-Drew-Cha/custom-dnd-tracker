#ifndef ITEM_HPP
#define ITEM_HPP

class Item
{
public:
  Item();
  // Post: Initializes item object with a name  description and a cost

  ~Item();
  // Post: Destroys item object

  // Mutators
  void setName(std::string in_name);
  // Post: Sets name

  void setDescription(std::string in_description);
  // Post: Sets description

  void setCost(int in_cost);
  // Post: Sets cost;

  // Accessors
  std::string getName();
  // Post: Returns item's name

  std::string getDescription();
  // Post: Returns item's description

  int getCost();
  // Post: Returns item's cost in gold

private:
  std::string m_name;
  std::string m_description;
  int m_cost;
};

#endif // ITEM_HPP
