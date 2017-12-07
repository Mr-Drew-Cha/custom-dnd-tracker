#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <string>

class Character
{
public:
    Character(std::string m_name = "None", std::string m_race = "None", std::string m_class_set = "None");
    // Post: Instantized Character object with name, race, class_set, level, and xp

    ~Character();
    // Post: Gives resources back and gives a farewell to the character


    // Mutators Attributes 1
    void setName(std::string in_name);
    // Post: Sets name to input string

    void setRace(std::string in_race);
    // Post: Sets race to input string

    void setClass(std::string in_class_set);
    // Post: Sets class_set to input string


    // Mutators Attributes 2
    void setLevel(int in_level);
    // Post: Sets level to input

    void setXp(int in_xp);
    // Post: Sets xp to input

    void setHealth(float in_health);
    // Post: Sets health to input

    void setArmor(float in_armor);
    // Post: Sets armor to input

    void setSpeed(float in_speed);
    // Post: Sets speed to input


    // Mutators Attributes 3
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


    // Accessors Attributes 1
    std::string getName();
    // Post: Returns character's name

    std::string getRace();
    // Post: Returns character's race

    std::string getClass();
    // Post: Returns character's class_set


    // Accessors Attributes 2
    int getLevel();
    // Post: Returns character's level

    int getXp();
    // Post: Returns character's xp points


    // Accessors Attributes 3
    float getHealth();
    // Post: Returns character's health

    float getArmor();
    // Post: Returns character's armor

    float getSpeed();
    // Post: Returns character's speed

    float getStrength();
    // Post: Returns character's strength

    float getDexterity();
    // Post: Returns character's dexterity

    float getConstitution();
    // Post: Returns character's constitution

    float getIntelligence();
    // Post: Returns character's intelligence

    float getWisdom();
    // Post: Returns character's wisdom

    float getCharisma();
    // Post: Return character's charisma


    // Accessors Unique Traits
    std::string getUniqueAbility();
    // Post: Returns character's unique ability

    std::string getUniqueWeakness();
    // Post: Returns characters's unique weakness

private:
    std::string m_name;
    std::string m_race;
    std::string m_class_set;

    // Attributes Group 1
    int m_level;
    float m_xp;

    // Attributes Group 2
    float m_health;
    float m_armor;
    float m_speed;

    // Attributes Group 3
    float m_strength;
    float m_dexterity;
    float m_constitution;
    float m_intelligence;
    float m_wisdom;
    float m_charisma;

    // Unique Attributes
    std::string m_unique_ability;
    std::string m_unique_weakness;
};

#endif
