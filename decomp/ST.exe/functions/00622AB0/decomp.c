
int __thiscall FUN_00622ab0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_20 [7];
  
  puVar3 = param_1;
  puVar5 = (undefined4 *)((int)this + 0x25e);
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
  *(undefined4 *)((int)this + 0x2ba) = 0xffffffff;
  iVar2 = *(int *)((int)param_1 + 0x109);
  local_20[0] = Library::DKW::LIB::FUN_006aac70(0x44);
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 + local_20[0]) = DAT_00806774;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x44);
  *(undefined4 *)(local_20[0] + 0x24) = DAT_00806764;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0x10;
  local_20[6] = 0;
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)((int)this + 0x1d5),local_20,(undefined4 *)((int)param_1 + 0x10d));
  FUN_006ab060(local_20);
  piVar4 = (int *)((int)param_1 + 0x10d + iVar2);
  iVar1 = *piVar4;
  STAllPlayersC::RestoreGObjData(this,piVar4 + 1);
  return iVar1 + iVar2 + 0x109;
}

