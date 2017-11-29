#pragma once

#include "../Structures/MaNGOSBot.h"

enum BOT_ROLE : int = {
	BOT_ROLE_TANK = 1,
	BOT_ROLE_HEALER = 2,
	BOT_ROLE_DAMAGE = 3
};

class MaNGOSBotFactory {
	//MaNGOSBot CreateBot(uint32 accountId, uint8 )
	void SetRole(MaNGOSBot* pBot, BOT_ROLE role);

	// Inventory Related
	void AddBags(MaNGOSBot* pBot);
	void AddFood(MaNGOSBot* pBot);
	void AddWater(MaNGOSBot* pBot);

	void SetTalents(MaNGOSBot* pBot, bool allTalents);


public:
	MaNGOSBotFactory();
	~MaNGOSBotFactory();
};
