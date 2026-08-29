#include "../../pseudocode_runtime.h"


int __thiscall STAllPlayersC::FUN_005ec850(STAllPlayersC *this,int *param_1)

{
  int iVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;

  this->field_0318 = 0;
  this->field_02D6 = 0xffffffff;
  this->field_0316 = 0;
  iVar1 = *param_1;
  local_8 = iVar1;

  local_24 = Library::DKW::LIB::MemAlloc(0x44);
  iVar3 = 0;
  do {
    *(int **)(iVar3 + (int)local_24) = PTR_00806774;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x44);
  STField<int *>(local_24,0x24) = PTR_00806764;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x10;
  local_c = 0;
  /* ST_CALLSITE[005EC8CE]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)&this->field_0x1d5,(int *)&local_24,
             (RecoveredRecordView_004AD790_D4DB5A31 *)(param_1 + 1));

  iVar2 = thunk_FUN_004ad650((STT3DSprC *)&this->field_0x1d5);
  this->field_02D6 = iVar2;
  FreeAndNull(&local_24);
  if ((((this->field_023A == 8) && (this->field_02B9 != '\0')) &&
      (uVar4 = (g_playSystem_00802A38->field_00E4 - this->field_028F) + 0x15, 0 < (int)uVar4)) &&
     ((int)uVar4 < 0x15)) {
    iVar3 = *(int *)&this->field_0x2c6;
    iVar8 = *(int *)&this->field_0x2be;
    iVar9 = *(int *)&this->field_0x2c2;
    iVar7 = 1;

    uVar5 = thunk_FUN_004ad650((STT3DSprC *)&this->field_0x1d5);
    thunk_FUN_006377b0(uVar5,iVar7,iVar8,iVar9,iVar3,uVar4);
  }
  piVar6 = (int *)(&((RecoveredRecordView_004AD790_D4DB5A31 *)(param_1 + 1))->field_0x0 + iVar1);
  iVar1 = *piVar6;
  /* ST_CALLSITE[005EC957]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
  RestoreGObjData(this,piVar6 + 1);
  return iVar1 + local_8;
}

