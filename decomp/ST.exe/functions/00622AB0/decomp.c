
int __thiscall STAllPlayersC::FUN_00622ab0(STAllPlayersC *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar3 = param_1;
  puVar5 = (undefined4 *)&this->field_0x25e;
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
  this->field_02BA = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)((int)param_1 + 0x109);
  local_20 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 + (int)local_20) = DAT_00806774;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x44);
  *(undefined4 *)((int)local_20 + 0x24) = DAT_00806764;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)&this->field_0x1d5,(int *)&local_20,
             (AnonShape_004AD790_77673787 *)((int)param_1 + 0x10d));
  FreeAndNull(&local_20);
  piVar4 = (int *)(&((AnonShape_004AD790_77673787 *)((int)param_1 + 0x10d))->field_0x0 + iVar2);
  iVar1 = *piVar4;
  RestoreGObjData(this,piVar4 + 1);
  return iVar1 + iVar2 + 0x109;
}

