
int __thiscall STAllPlayersC::FUN_005ec850(STAllPlayersC *this,int *param_1)

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
  uVar3 = thunk_FUN_004ad650((int)&this->field_0x1d5);
  this->field_02D6 = uVar3;
  FreeAndNull(&local_24);
  if ((((this->field_023A == 8) && (this->field_02B9 != '\0')) &&
      (uVar4 = (PTR_00802a38->field_00E4 - this->field_028F) + 0x15, 0 < (int)uVar4)) &&
     ((int)uVar4 < 0x15)) {
    iVar2 = this->field_02C6;
    iVar8 = this->field_02BE;
    iVar9 = this->field_02C2;
    iVar7 = 1;
    uVar5 = thunk_FUN_004ad650((int)&this->field_0x1d5);
    thunk_FUN_006377b0(uVar5,iVar7,iVar8,iVar9,iVar2,uVar4);
  }
  piVar6 = (int *)(&((AnonShape_004AD790_77673787 *)(param_1 + 1))->field_0x0 + iVar1);
  iVar1 = *piVar6;
  RestoreGObjData(this,piVar6 + 1);
  return iVar1 + local_8;
}

