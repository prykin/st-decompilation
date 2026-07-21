
void __thiscall FUN_005501d0(void *this,STControlCommand *command)

{
  undefined1 local_24 [16];
  undefined4 local_14;
  STControlCommand *local_10;

  command->payload = (STControlCommandPayload *)(command + 1);
  if (command->commandType == 5) {
    local_14 = 0x43ff;
  }
  else {
    if (command->commandType != 0x32) {
      STAllPlayersC::CmdToPlsObj(g_sTAllPlayers_007FA174,command);
      return;
    }
    local_14 = 0x4400;
  }
  local_10 = command;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(local_24);
  return;
}

