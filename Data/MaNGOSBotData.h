#pragma once

class MaNGOSBotData {
private:
	// Character Creation Templates
	void LoadTalentTemplates();
	void LoadGearTemplates();
	void LoadStatPriorityTemplates();
	void LoadWardrobeTemplates();

	// Random Bots Data
	void LoadRandomBots();
	void LoadGuildNames();
	void LoadBotNames();


public:
	// Construction/Destruction
	MaNGOSBotData();
	~MaNGOSBotData();

	// Single Method that calls the load templates and outputs
	void LoadCacheData();
};
