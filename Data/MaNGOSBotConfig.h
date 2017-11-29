#pragma once

class MaNGOSBotConfig {
private:
  // Singleton Implementation
  // No object instantiation && disable copying of object
  MaNGOSBotConfig() {}
  MaNGOSBotConfig(const MaNGOSBotConfig&) = delete;
  MaNGOSBotConfig& operator= (const MaNGOSBotConfig&) = delete;

public:
  static MaNGOSBotConfig& GetInstance();
};

// Define the global variable for access in application
#define sMaNOSBotConfig = MaNGOSBotConfig::GetInstance()
