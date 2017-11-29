#pragma once

class MaNGOSBotAdapter {
private:
  // Bot initialization strategies
  void LoadRandomBots(); // Used to generate random X bots.
  void AddExistingCharacterAsBot(string name); // Used for adding an existing character as a bot

  // Chat command methods
  void Revive(MaNGOSBot* bot);

  // Special flags
  bool IsConfigValid();
  bool AnyBotsLoggedIn();

public:
  MaNGOSBotAdapter();
  ~MaNGOSBotAdapter();

  // Main initialization sequence
  void Init();

  // Update Loop
  void Update(float fDelta);

  // Chat Command Handler
  static bool HandleConsoleCommand(char const* args);
};
