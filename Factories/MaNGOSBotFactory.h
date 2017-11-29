#pragma once

#include "../Structures/MaNGOSBot.h"
#include "../Templates/OutfitTemplate.h"
#include "../Templates/StatPriorityTemplate.h"
#include "../Templates/CharacterCreateTemplate.h"


enum BOT_ROLE : int = {
	BOT_ROLE_TANK = 1,
	BOT_ROLE_HEALER = 2,
	BOT_ROLE_DAMAGE = 3
};

class MaNGOSBotFactory {
private:
	uint32 TotalBotCount = 0;

	// Load/Create bots 
	void LoadExistingBots();
	void GenerateBots();

	// Character Generation
	CharacterCreateTemplate* RandomCharacter();
public:
	MaNGOSBotFactory(int botCount);
	~MaNGOSBotFactory();
};
