#include "CustomizationFactory.h"

CustomizationFactory::CustomizationFactory(uint8 race, uint8 gender) {
  for(CharSectionsMap::const_iterator itr = sCharSectionMap.begin(); itr != sCharSectionMap.end(); ++itr) {
    CharSectionEntry const* entry = itr->second;

    if(entry->Race != race || entry->Gender != gender)
      continue;

    switch(entry->GenType) {
    case SECTION_TYPE_SKIN:
        SkinColors.push_back(entry->Color);
        break;
    case SECTION_TYPE_FACE:
        Faces.push_back(pair<uint8, uint8>(entry->Type, entry->Color));
        break;
    case SECTION_TYPE_FACIAL_HAIR:
        FacialHairTypes.push_back(entry->Type)
        break;
    case SECTION_TYPE_HAIR:
        Hairs.push_back(pair<uint8, uint8>(entry->Type, entry->Color));
        break;
    }
  }
}
