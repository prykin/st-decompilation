#include "../../pseudocode_runtime.h"


int __thiscall STAllPlayersC::FUN_00622ab0(STAllPlayersC *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int *piVar4;
  byte *puVar5;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar3 = (byte *)(param_1);
  puVar5 = (byte *)&this->field_0x25e;
  memmove(puVar5, puVar3, 0x109); /* compiler REP MOVS byte copy */
  this->field_02BA = 0xffffffff;
  iVar2 = STField<int>(param_1,0x109);
  local_20 = Library::DKW::LIB::MemAlloc(0x44);
  iVar1 = 0;
  do {
    *(int **)(iVar1 + (int)local_20) = PTR_00806774;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x44);
  STField<int *>(local_20,0x24) = PTR_00806764;
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

