#include "../../pseudocode_runtime.h"


bool __thiscall FUN_00627aa0(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar3 = STField<int>(this,0x2ae);
  if (iVar3 == 2) {
    return false;
  }
  if (iVar3 == 3) {
    return false;
  }
  if (iVar3 == 4) {
    return false;
  }
  if (iVar3 == 5) {
    return false;
  }
  if (7 < param_1) {
    return false;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)) {
    return false;
  }
  bVar1 = STField<byte>(this,0x24);
  if (DAT_00808a8f == '\0') {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((byte)param_1 == bVar1) {
LAB_00627bb8:
      iVar3 = 0;
    }
    else {
      uVar4 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar4][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_00627bb8;
        iVar3 = 2;
      }
    }
    bVar5 = iVar3 < 0;
  }
  else {
    bVar5 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
            g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
  }
  if (bVar5) goto LAB_00627c8a;
  if (DAT_00808a8f == '\0') {
    if (bVar1 == (byte)param_1) {
LAB_00627c7a:
      iVar3 = 0;
    }
    else {
      uVar4 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[bVar1][uVar4];
      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1)) goto LAB_00627c7a;
        iVar3 = 2;
      }
    }
    bVar5 = iVar3 < 0;
  }
  else {
    bVar5 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar5) {
switchD_00627c97_default:
    return false;
  }
LAB_00627c8a:
  switch(STField<undefined1>(this,0x2ad)) {
  case 0:
  case 2:
    iVar3 = STMineSetC::sub_0041D6C0(this,param_1);
    return SUB41(iVar3,0);
  case 1:
    iVar3 = thunk_FUN_0041d620(this,param_1);
    return SUB41(iVar3,0);
  case 3:
    goto switchD_00627c97_default;
  default:
    return true;
  }
}

