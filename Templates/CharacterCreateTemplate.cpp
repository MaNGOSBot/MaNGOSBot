#include "CharacterCreateTemplate.h"

CharacterCreateTemplate::CharacterCreateTemplate(string name, uint8 cls) {
  Name = name;
  CharacterClass = cls;
  Gender = rand() % 2 ? GENDER_MALE : GENDER_FEMALE;
  Race = RaceFactory::RandomRace(cls);
  // Fill in the rest
  Randomize();
}

CharacterCreateTemplate::CharacterCreateTemplate(string name, uint8 cls, uint8 race, uint8 gender, uint8 skinColor, pair<uint8, uint8> face, pair<uint8, uint8> hair, uint8 facialHair = 0) {
  Name = name;
  CharacterClass = cls;
  Gender = gender;
  Race = race;
  SkinColor = skinColor;
  Face = face;
  Hair = hair;
  FacialHair = facialHair;
}

CharacterCreateTemplate::Randomize() {
  CustomizationFactory cf(Race, Gender);

  SkinColor = cf.SkinColors[urand(0, cf.SkinColors.size() -1)];
  Face = cf.Faces[urand(0, cf.Faces.size() - 1)];
  Hair = cf.Hairs[urand(0, cf.Hairs.size() - 1)];

  bool excludeFacialHair = (
    Race == RACE_TAUREN || (Gender == GENDER_FEMALE && Race != RACE_NIGHTELF && Race != RACE_UNDEAD)
  );
  FacialHair = (excludeFacialHair) ? 0 : cf.FacialHairTypes[urand(0, cf.FacialHairTypes.size() - 1)];
}
