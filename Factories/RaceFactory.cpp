#include "RaceFactory.h"

RaceFactory::RaceFactory() {
  // Warrior
  Races[CLASS_WARRIOR].push_back(RACE_HUMAN);
  Races[CLASS_WARRIOR].push_back(RACE_NIGHTELF);
  Races[CLASS_WARRIOR].push_back(RACE_GNOME);
  Races[CLASS_WARRIOR].push_back(RACE_DWARF);
  Races[CLASS_WARRIOR].push_back(RACE_DRAENEI);
  Races[CLASS_WARRIOR].push_back(RACE_ORC);
  Races[CLASS_WARRIOR].push_back(RACE_UNDEAD);
  Races[CLASS_WARRIOR].push_back(RACE_TAUREN);
  Races[CLASS_WARRIOR].push_back(RACE_TROLL);

  // Paladin
  Races[CLASS_PALADIN].push_back(RACE_HUMAN);
  Races[CLASS_PALADIN].push_back(RACE_DWARF);
  Races[CLASS_PALADIN].push_back(RACE_DRAENEI);
  Races[CLASS_PALADIN].push_back(RACE_BLOODELF);

  // Rogue
  Races[CLASS_ROGUE].push_back(RACE_HUMAN);
  Races[CLASS_ROGUE].push_back(RACE_DWARF);
  Races[CLASS_ROGUE].push_back(RACE_NIGHTELF);
  Races[CLASS_ROGUE].push_back(RACE_GNOME);
  Races[CLASS_ROGUE].push_back(RACE_ORC);
  Races[CLASS_ROGUE].push_back(RACE_TROLL);
  Races[CLASS_ROGUE].push_back(RACE_BLOODELF);

  // Priest
  Races[CLASS_PRIEST].push_back(RACE_HUMAN);
  Races[CLASS_PRIEST].push_back(RACE_DWARF);
  Races[CLASS_PRIEST].push_back(RACE_NIGHTELF);
  Races[CLASS_PRIEST].push_back(RACE_DRAENEI);
  Races[CLASS_PRIEST].push_back(RACE_TROLL);
  Races[CLASS_PRIEST].push_back(RACE_UNDEAD);
  Races[CLASS_PRIEST].push_back(RACE_BLOODELF);

  // Mage
  Races[CLASS_MAGE].push_back(RACE_HUMAN);
  Races[CLASS_MAGE].push_back(RACE_GNOME);
  Races[CLASS_MAGE].push_back(RACE_DRAENEI);
  Races[CLASS_MAGE].push_back(RACE_UNDEAD);
  Races[CLASS_MAGE].push_back(RACE_TROLL);
  Races[CLASS_MAGE].push_back(RACE_BLOODELF);

  // Warlock
  Races[CLASS_WARLOCK].push_back(RACE_HUMAN);
  Races[CLASS_WARLOCK].push_back(RACE_GNOME);
  Races[CLASS_WARLOCK].push_back(RACE_UNDEAD);
  Races[CLASS_WARLOCK].push_back(RACE_ORC);
  Races[CLASS_WARLOCK].push_back(RACE_BLOODELF);

  // Shaman
  Races[CLASS_SHAMAN].push_back(RACE_DRAENEI);
  Races[CLASS_SHAMAN].push_back(RACE_ORC);
  Races[CLASS_SHAMAN].push_back(RACE_TAUREN);
  Races[CLASS_SHAMAN].push_back(RACE_TROLL);

  // Dwarf
  Races[CLASS_HUNTER].push_back(RACE_DWARF);
  Races[CLASS_HUNTER].push_back(RACE_NIGHTELF);
  Races[CLASS_HUNTER].push_back(RACE_DRAENEI);
  Races[CLASS_HUNTER].push_back(RACE_ORC);
  Races[CLASS_HUNTER].push_back(RACE_TAUREN);
  Races[CLASS_HUNTER].push_back(RACE_TROLL);
  Races[CLASS_HUNTER].push_back(RACE_BLOODELF);

  // Druid
  Races[CLASS_DRUID].push_back(RACE_NIGHTELF);
  Races[CLASS_DRUID].push_back(RACE_TAUREN);
}


uint8 RaceFactory::RandomRace(uint8 cls) {
  return Races[cls][urand(0, Races.size() - 1)];
}

RaceFactory& RaceFactory::GetInstance() {
  static RaceFactory instance;
  return instance;
}
