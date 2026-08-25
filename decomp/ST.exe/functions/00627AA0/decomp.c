#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 00405A83
   Slots: 0xF4
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:61 calls=7
   caller_families=4 receiver_extent=690/1456; unique_owner_for_target

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

bool __thiscall STMineSetC::sub_00627AA0(STMineSetC *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  STMineSetC_field_02AEState SVar3;
  int local_EAX_513;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  SVar3 = this->field_02AE;
  if (SVar3 == CASE_2) {
    return false;
  }
  if (SVar3 == CASE_3) {
    return false;
  }
  if (SVar3 == CASE_4) {
    return false;
  }
  if (SVar3 == CASE_5) {
    return false;
  }
  if (7 < param_1) {
    return false;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)) {
    return false;
  }
  bVar1 = (byte)this->field_0024;
  if (DAT_00808a8f == '\0') {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((byte)param_1 == bVar1) {
LAB_00627bb8:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar5][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar5] != 1)) goto LAB_00627bb8;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
            g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
  }
  if (bVar6) goto LAB_00627c8a;
  if (DAT_00808a8f == '\0') {
    if (bVar1 == (byte)param_1) {
LAB_00627c7a:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[bVar1][uVar5];
      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_00627c7a;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar6) {
switchD_00627c97_default:
    return false;
  }
LAB_00627c8a:
  switch(this->field_02AD) {
  case CASE_0:
  case CASE_2:
    /* ST_CALLSITE[00627CA1]: CALL 0x00402865; direct=00402865 STMineSetC::sub_0041D6C0 */
    local_EAX_513 = sub_0041D6C0(this,param_1);
    return SUB41(local_EAX_513,0);
  case CASE_1:
    iVar3 = thunk_FUN_0041d620(this,param_1);
    return SUB41(iVar3,0);
  case CASE_3:
    goto switchD_00627c97_default;
  default:
    return true;
  }
}

