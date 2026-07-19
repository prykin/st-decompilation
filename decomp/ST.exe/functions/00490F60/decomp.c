
void __fastcall FUN_00490f60(void *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 local_c;
  undefined2 local_8;
  
  if (((*(int *)((int)param_1 + 0x45d) != 0x14) || (*(int *)((int)param_1 + 0x7c2) != 0)) &&
     (*(int *)((int)param_1 + 0x459) != 0x78)) {
    iVar2 = *(int *)((int)param_1 + 0x7c2);
    if (*(int *)((int)param_1 + 0x45d) != 0x14) {
      if (iVar2 == 0) {
        local_8 = *(undefined2 *)((int)param_1 + 0x30);
        local_c = *(undefined4 *)(DAT_00802a38 + 0xe4);
        puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar1,(undefined4 *)((int)param_1 + 0x32));
        STAllPlayersC::AddObjsToGroup
                  (DAT_007fa174,
                   CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)param_1 + 0x24)),
                   0xfffe,(int)puVar1,(undefined2 *)0x0);
        FUN_006ae110((byte *)puVar1);
        STBoatC::CmdToObj(param_1,CASE_14,&local_c);
      }
      iVar2 = *(int *)((int)param_1 + 0x7c2);
    }
    *(int *)((int)param_1 + 0x7c2) = iVar2 + 1;
    return;
  }
  local_8 = *(undefined2 *)((int)param_1 + 0x30);
  local_c = *(undefined4 *)(DAT_00802a38 + 0xe4);
  STBoatC::CmdToObj(param_1,CASE_14,&local_c);
  return;
}

