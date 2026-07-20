
int __thiscall FUN_005ec850(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LPVOID local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x2d6) = 0xffffffff;
  *(undefined1 *)((int)this + 0x316) = 0;
  iVar1 = *param_1;
  local_8 = iVar1;
  local_24 = (LPVOID)Library::DKW::LIB::FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)local_24) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  *(undefined4 *)((int)local_24 + 0x24) = DAT_00806764;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x10;
  local_c = 0;
  STT3DSprC::RestoreSpr((STT3DSprC *)((int)this + 0x1d5),(int *)&local_24,param_1 + 1);
  uVar3 = thunk_FUN_004ad650((int)this + 0x1d5);
  *(undefined4 *)((int)this + 0x2d6) = uVar3;
  FUN_006ab060(&local_24);
  if ((((*(int *)((int)this + 0x23a) == 8) && (*(char *)((int)this + 0x2b9) != '\0')) &&
      (uVar4 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x28f)) + 0x15, 0 < (int)uVar4)
      ) && ((int)uVar4 < 0x15)) {
    iVar2 = *(int *)((int)this + 0x2c6);
    iVar8 = *(int *)((int)this + 0x2be);
    iVar9 = *(int *)((int)this + 0x2c2);
    iVar7 = 1;
    uVar5 = thunk_FUN_004ad650((int)this + 0x1d5);
    thunk_FUN_006377b0(uVar5,iVar7,iVar8,iVar9,iVar2,uVar4);
  }
  piVar6 = (int *)((int)(param_1 + 1) + iVar1);
  iVar1 = *piVar6;
  STAllPlayersC::RestoreGObjData(this,piVar6 + 1);
  return iVar1 + local_8;
}

