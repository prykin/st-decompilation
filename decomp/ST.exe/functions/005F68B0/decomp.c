
int __thiscall FUN_005f68b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  LPVOID local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  if (this == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)((int)this + 0x231);
  }
  puVar1 = param_1;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar1;
  *(undefined4 *)((int)this + 0x2b7) = 0xffffffff;
  local_28 = (LPVOID)Library::DKW::LIB::FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)local_28) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0x10;
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)((int)this + 0x1d5),(int *)&local_28,
             (AnonShape_004ADBA0_E7CEFF88 *)((int)param_1 + 0xc6));
  thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x2c1),*(undefined2 *)((int)this + 0x2c5),
                     *(undefined2 *)((int)this + 0x2c9));
  FUN_006ab060(&local_28);
  iVar2 = *(int *)((int)param_1 + 0xc2);
  piVar5 = (int *)(&((AnonShape_004ADBA0_E7CEFF88 *)((int)param_1 + 0xc6))->field_0x0 + iVar2);
  STAllPlayersC::RestoreGObjData(this,piVar5 + 1);
  puVar6 = (undefined4 *)((int)(piVar5 + 1) + *piVar5);
  iVar2 = iVar2 + 0xca + *piVar5;
  if (*(int *)((int)this + 0x2e6) == 0) {
    return iVar2;
  }
  local_8 = puVar6;
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x6c);
  *(undefined4 **)((int)this + 0x2e6) = puVar1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar2 = iVar2 + 0x6c;
  **(undefined4 **)((int)this + 0x2e6) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x2e6) + 4) = 0xffffffff;
  if (*(int *)(*(int *)((int)this + 0x2e6) + 0x58) != 0) {
    uVar4 = *(uint *)(*(int *)((int)this + 0x2e6) + 0x5c);
    iVar7 = uVar4 * 4;
    local_c = iVar7;
    iVar3 = Library::DKW::LIB::FUN_006aac70(iVar7);
    *(int *)(*(int *)((int)this + 0x2e6) + 0x58) = iVar3;
    puVar6 = *(undefined4 **)(*(int *)((int)this + 0x2e6) + 0x58);
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *local_8;
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)local_8;
      local_8 = (undefined4 *)((int)local_8 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    return iVar2 + iVar7;
  }
  return iVar2;
}

