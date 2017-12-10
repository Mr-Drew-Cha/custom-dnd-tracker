#include "die.hpp"

#include <cstdlib>
#include <ctime>

Die::Die()
{
  srand(time(0));
}

int Die::d4Roll()
{
  int die = (rand() % 4) + 1;

  return die;
}

int Die::d6Roll()
{
  int die = (rand() % 6) + 1;

  return die;
}

int Die::d8Roll()
{
  int die = (rand() % 8) + 1;

  return die;
}

int Die::d10Roll()
{
  int die = (rand() % 10) + 1;

  return die;
}

int Die::d12Roll()
{
  int die = (rand() % 12) + 1;

  return die;
}

int Die::d20Roll()
{
  int die = (rand() % 20) + 1;

  return die;
}
