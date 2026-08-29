#include "../../pseudocode_runtime.h"


int __thiscall
STAllPlayersC::FUN_00622ab0(STAllPlayersC *this,RecoveredRecord_00622AB0_330E12AF *param_1)

{
  int iVar1;
  int iVar2;
  RecoveredRecord_00622AB0_330E12AF *pRVar3;
  int *piVar4;
  byte *puVar5;
  void *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  pRVar3 = param_1;
  puVar5 = (byte *)&this->field_0x25e;
  memmove(puVar5, pRVar3, 0x109); /* compiler REP MOVS byte copy */
  this->field_02BA = 0xffffffff;
  iVar2 = param_1->field_0109;

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
  /* ST_CALLSITE[00622B3B]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)&this->field_0x1d5,(int *)&local_20,
             (RecoveredRecordView_004AD790_D4DB5A31 *)(param_1 + 1));
  FreeAndNull(&local_20);
  piVar4 = (int *)(&param_1[1].field_0x0 + iVar2);
  iVar1 = *piVar4;
  /* ST_CALLSITE[00622B53]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
  RestoreGObjData(this,piVar4 + 1);
  return iVar1 + iVar2 + 0x109;
}

