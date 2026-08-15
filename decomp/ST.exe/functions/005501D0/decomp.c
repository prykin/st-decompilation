#include "../../pseudocode_runtime.h"


void __thiscall FUN_005501d0(void *this,void *command)

{
  undefined1 local_24 [16];
  undefined4 local_14;
  void *local_10;

  STField<int>(command,0x17) = (int)command + 0x1b;
  if (STField<char>(command,0xe) == '\x05') {
    local_14 = 0x43ff;
  }
  else {
    if (STField<char>(command,0xe) != '2') {
      STAllPlayersC::CmdToPlsObj(g_allPlayers_007FA174,command);
      return;
    }
    local_14 = 0x4400;
  }
  local_10 = command;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0x1c) + 0x20))(local_24);
  return;
}

