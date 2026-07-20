
void __fastcall FUN_00490f60(void *param_1)

{
  uint *groupContent;
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 local_c;
  undefined2 local_8;
  
  if (((*(int *)((int)param_1 + 0x45d) != 0x14) || (*(int *)((int)param_1 + 0x7c2) != 0)) &&
     (*(int *)((int)param_1 + 0x459) != 0x78)) {
    iVar1 = *(int *)((int)param_1 + 0x7c2);
    if (*(int *)((int)param_1 + 0x45d) != 0x14) {
      if (iVar1 == 0) {
        local_8 = *(undefined2 *)((int)param_1 + 0x30);
        local_c = *(undefined4 *)(DAT_00802a38 + 0xe4);
        groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(groupContent,(undefined4 *)((int)param_1 + 0x32));
        STAllPlayersC::AddObjsToGroup
                  (g_sTAllPlayers_007FA174,
                   CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)param_1 + 0x24)),
                   0xfffe,groupContent,(undefined2 *)0x0);
        FUN_006ae110((byte *)groupContent);
        STBoatC::CmdToObj(param_1,CASE_14,&local_c);
      }
      iVar1 = *(int *)((int)param_1 + 0x7c2);
    }
    *(int *)((int)param_1 + 0x7c2) = iVar1 + 1;
    return;
  }
  local_8 = *(undefined2 *)((int)param_1 + 0x30);
  local_c = *(undefined4 *)(DAT_00802a38 + 0xe4);
  STBoatC::CmdToObj(param_1,CASE_14,&local_c);
  return;
}

