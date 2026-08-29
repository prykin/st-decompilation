#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 0040200E
   Slots: 0xF4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1846/2106; unique_owner_for_target

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_05C0 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05C0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

bool __thiscall STBoatC::vfunc_F4(STBoatC *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = 1;
  if (((this->field_0732 != 1) || (7 < param_1)) ||
     ((g_playSystem_00802A38 != nullptr &&
      (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)))) goto cf_common_exit_00494A35;
  bVar1 = (byte)this->field_0024;
  if (DAT_00808a8f == '\0') {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((byte)param_1 == bVar1) {
LAB_0049495d:
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
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar5] != 1)) goto LAB_0049495d;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
            g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
  }
  if (!bVar6) {
    if (DAT_00808a8f == '\0') {
      if (bVar1 == (byte)param_1) {
LAB_00494a19:
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
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_00494a19;
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
      uVar3 = 0;
      goto cf_common_exit_00494A35;
    }
  }
  iVar4 = thunk_FUN_0041d350(this,param_1);
  uVar3 = (undefined1)iVar4;
cf_common_exit_00494A35:
  if ((this->field_045D == CASE_14) && (this->field_05C0 == CASE_3)) {
    uVar3 = 0;
  }
  return (bool)uVar3;
}

