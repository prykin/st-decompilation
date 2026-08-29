#include "../../pseudocode_runtime.h"


void __thiscall FUN_005501d0(void *this,void *command)

{
  byte local_24 [16];
  uint local_14;
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
  /* ST_CALLSITE[0055021A]: CALL dword ptr [EAX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
  STStructuralVirtualCall<undefined4>(STField<int *>(this,0x1c), 0x20, local_24);
  return;
}

