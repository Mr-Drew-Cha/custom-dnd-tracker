// Character class header

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character
{
public:

    // Constructor and destructor
    Character(std::string name = "None", std::string race = "None", std::string class_set = "None");
    // Post: Instantized Character object with name, race, class_set, level, and xp

    ~Character();
    // Post: Gives resources back and gives a farewell to player


    // Setters Attributes 1
    void setName(std::string in_name);
    // Post: Sets name to input string

    void setRace(std::string in_race);
    // Post: Sets race to input string

    void setClass(std::string in_class_set);
    // Post: Sets class_set to input string


    // Setters Attributes 2
    void setLevel(int in_level);
    // Post: Sets level to input

    void setXp(float in_xp);
    // Post: Sets xp to input

    void setHealth(float in_health);
    // Post: Sets health to input

    void setArmor(float in_armor);
    // Post: Sets armor to input

    void setSpeed(float in_speed);
    // Post: Sets speed to input


    // Setters Attributes 3
    void setStrength(float in_strength);
    // Post: Sets strength to input

    void setDexterity(float in_dexterity);
    // Post: Sets dexterity to input

    void setConstitution(float in_constitution);
    // Post: Sets constitution to input

    void setIntelligence(float in_intelligence);
    // Post: Sets intelligence to input

    void setWisdom(float in_wisdom);
    // Post: Sets wisdom to input

    void setCharisma(float in_charisma);
    // Post: Sets charisma to input


    // Getters Attributes 1
    std::string getName();
    // Post: Returns character name

    std::string getRace();
    // Post: Returns character race

    std::string getClass();
    // Post: Returns character class_set


    // Getters Attributes 2
    int getLevel();
    // Post: Returns character level

    float getXp();
    // Post: Returns character xp points


    // Getters Attributes 3
    float getHealth();
    // Post: Returns character health

    float getArmor();
    // Post: Returns character armor

    float getSpeed();
    // Post: Returns character speed

    float getStrength();
    // Post: Sets strength to input

    float getDexterity();
    // Post: Sets dexterity to input

    float getConstitution();
    // Post: Sets constitution to input

    float getIntelligence();
    // Post: Sets intelligence to input

    float getWisdom();
    // Post: Sets wisdom to input

    float getCharisma();
    // Post: Sets charisma to input


private:

    std::string name;
    std::string race;
    std::string class_set;

    // Attributes Group 1
    int level;
    float xp;

    // Attributes Group 2
    float health;
    float armor;
    float speed;

    // Attributes Group 3
    float strength;
    float dexterity;
    float constitution;
    float intelligence;
    float wisdom;
    float charisma;



};

#endif
