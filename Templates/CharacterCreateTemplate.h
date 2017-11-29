#pragma once

class CharacterCreateTemplate {
private:
	void Randomize();

public:
	string Name;
	uint8 Race;
	uint8 CharacterClass;
	uint8 Gender;
	uint8 SkinColor;
	pair<uint8, uint8> Face;
	pair<uint8, uint8> Hair;
	uint8 FacialHair;

	// Random Character Constructor
	CharacterCreateTemplate(string name, uint8 cls);
	// Specific Character Construction, might be useful at some point?
	CharacterCreateTemplate(string name, uint8 cls, uint8 race, uint8 gender, uint8 skinColor, pair<uint8, uint8> face, pair<uint8, uint8> hair);
	// General Destructor
	~CharacterCreateTemplate() {
		delete Name; // Need to delete Name because it's a char** basically
	}
};
