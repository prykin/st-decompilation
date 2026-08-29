

void FUN_00440750(int param_1)

{
  byte local_24 [12];
  uint local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = 0x120 - (uint)(param_1 != 0);
  /* ST_CALLSITE[00440778]: CALL dword ptr [EDX + 0x18] */
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

