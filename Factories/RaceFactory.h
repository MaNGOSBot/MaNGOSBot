#pragma once


class RaceFactory {
public:
  map<uint8, vector<uint8>> Races;

  // Singleton Implementation
  // No object instantiation && disable copying of object
  RaceFactory();
  RaceFactory(const RaceFactory&) = delete;
  RaceFactory& operator= (const RaceFactory&) = delete;


  uint8 RandomRace(uint8 cls);
};

#define sRaceFactory = RaceFactory::GetInstance()
