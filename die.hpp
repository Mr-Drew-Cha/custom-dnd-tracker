#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP


class Die
{
public:
  Die();
  // Post: Seeds random number generator for subsequent rolls

  // Roll Functions
  int d4Roll();
  // Post: Returns an int randomly between 1 and 4

  int d6Roll();
  // Post: Returns an int randomly between 1 and 6

  int d8Roll();
  // Post: Returns an int randomly between 1 and 8

  int d10Roll();
  // Post: Returns an int randomly between 1 and 10

  int d12Roll();
  // Post: Returns an int randomly between 1 and 12

  int d20Roll();
  // Post: Returns an int randomly between 1 and 20
};

#endif // FUNCTIONS_HPP
