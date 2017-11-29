#include "MaNGOSBotConfig.h"

MaNGOSBotConfig& MaNGOSBotConfig::GetInstance() {
  static MaNGOSBotConfig instance;
  return instance;
}
