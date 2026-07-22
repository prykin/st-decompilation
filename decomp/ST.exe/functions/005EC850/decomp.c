
int __thiscall STAllPlayersC::FUN_005ec850(STAllPlayersC *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  this->field_0318 = 0;
  this->field_02D6 = 0xffffffff;
  this->field_0316 = 0;
  iVar1 = *param_1;
  local_8 = iVar1;
  local_24 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
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
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)&this->field_0x1d5,(int *)&local_24,
             (AnonShape_004AD790_77673787 *)(param_1 + 1));
  iVar2 = thunk_FUN_004ad650((int)&this->field_0x1d5);
  this->field_02D6 = iVar2;
  FreeAndNull(&local_24);
  if ((((this->field_023A == 8) && (this->field_02B9 != '\0')) &&
      (uVar3 = (g_playSystem_00802A38->field_00E4 - this->field_028F) + 0x15, 0 < (int)uVar3)) &&
     ((int)uVar3 < 0x15)) {
    iVar2 = *(int *)&this->field_0x2c6;
    iVar7 = *(int *)&this->field_0x2be;
    iVar8 = *(int *)&this->field_0x2c2;
    iVar6 = 1;
    uVar4 = thunk_FUN_004ad650((int)&this->field_0x1d5);
    thunk_FUN_006377b0(uVar4,iVar6,iVar7,iVar8,iVar2,uVar3);
  }
  piVar5 = (int *)(&((AnonShape_004AD790_77673787 *)(param_1 + 1))->field_0x0 + iVar1);
  iVar1 = *piVar5;
  RestoreGObjData(this,piVar5 + 1);
  return iVar1 + local_8;
}

