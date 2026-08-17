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
      /* ST_CALLSITE[005501F3]: CALL 0x00404ebc; direct=00404EBC STAllPlayersC::CmdToPlsObj */
      STAllPlayersC::CmdToPlsObj(g_allPlayers_007FA174,command);
      return;
    }
    local_14 = 0x4400;
  }
  local_10 = command;
  /* ST_CALLSITE[0055021A]: CALL dword ptr [EAX + 0x20] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0x1c) + 0x20))(local_24);
  return;
}

