#pragma once

class CustomizationFactory {
public:
  vector<uint8> SkinColors;
  vector<uint8> FacialHairTypes;
  vector<pair<uint8, uint8>> Faces;
  vector<pair<uint8, uint8>> Hairs;

  CustomizationFactory(uint8 race, uint8 gender);  
};
