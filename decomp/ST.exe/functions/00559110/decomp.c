#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=52; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
VisibleClassTy::sub_00559110
          (VisibleClassTy *this,int param_1,undefined *param_2,int param_3,uint param_4,int param_5,
          int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *local_c;

  iVar8 = param_5;
  uVar5 = param_4;
  bVar6 = false;
  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      sub_0055BBC0(this,0,(short)param_1,(short)param_2,(char)param_3,param_4,(byte)param_5,param_6);
    }
    if (this->field_00FC[uVar5] != 0) {
      iVar9 = iVar8 * 2 + 1;
      auto param_4_after_write = param_1 - iVar8; /* compiler stack-slot lifetime split */
      auto param_6_after_write = (int)param_2 - iVar8; /* compiler stack-slot lifetime split */
      pbVar7 = thunk_FUN_005532f0(iVar8);
      if (pbVar7 != nullptr) {
        iVar10 = iVar8;
        if (((this->field_0038 != nullptr) && ((param_7 & 1) != 0)) &&
           (iVar11 = 0, iVar10 = param_5, local_c = pbVar7, 0 < iVar9)) {
          do {
            iVar12 = 0;
            do {
              if (local_c[iVar12] != 0) {
                iVar1 = iVar11 + param_6_after_write;
                iVar2 = iVar12 + param_4_after_write;
                if ((((-1 < iVar2) && (iVar2 < this->field_0020)) && (-1 < iVar1)) &&
                   (iVar1 < this->field_0024)) {
                  bVar3 = this->field_0038[(this->field_0020 * iVar1 + iVar2) * 2];
                  if (bVar3 != 0) {
                    this->field_0038[(this->field_0020 * iVar1 + iVar2) * 2] = bVar3 - 1;
                  }
                }
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar9);
            iVar11 = iVar11 + 1;
            local_c = local_c + iVar9;
          } while (iVar11 < iVar9);
        }
        if (((this->field_004C != nullptr) && (this->field_0050 != nullptr)) &&
           ((param_7 & 0x4000) != 0)) {
          sub_00558C00(this,this->field_010C,param_1,(int)param_2,(int *)&param_4_after_write,&param_6_after_write);
          auto param_5_after_write = 0; /* compiler stack-slot lifetime split */
          param_4_after_write = param_4_after_write - iVar10;
          param_6_after_write = param_6_after_write + (g_centeredOffsets5[param_3] - iVar10);
          auto param_2_after_write = pbVar7; /* compiler stack-slot lifetime split */
          if (0 < iVar9) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_7 = 0;
              do {
                if (param_2_after_write[param_7] != '\0') {
                  iVar10 = param_7 + param_4_after_write;
                  iVar11 = param_5_after_write + param_6_after_write;
                  if (((-1 < iVar10) && (uVar5 = this->field_0030, iVar10 < (int)uVar5)) &&
                     ((-1 < iVar11 &&
                      ((iVar11 < this->field_0034 && (iVar12 = uVar5 * iVar11 + iVar10, -1 < iVar12)
                       ))))) {
                    if (this->field_0050[iVar12] == 1) {
                      thunk_FUN_00553a70(iVar10,iVar11,this->field_004C,uVar5,this->field_0034);
                      bVar6 = true;
                    }
                    uVar4 = this->field_0050[iVar12];
                    if (uVar4 != 0) {
                      this->field_0050[iVar12] = uVar4 - 1;
                    }
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar9);
              param_5_after_write = param_5_after_write + 1;
              param_2_after_write = param_2_after_write + iVar9;
            } while (param_5_after_write < iVar9);
            if (bVar6) {
              param_4_after_write = param_4_after_write - 1;
              iVar8 = iVar8 * 2 + 3;
              param_6_after_write = param_6_after_write + -1;
              param_5_after_write = 0;
              if (0 < iVar8) {
                do {
                  param_7 = 0;
                  do {
                    iVar9 = param_7 + param_4_after_write;
                    iVar10 = param_5_after_write + param_6_after_write;
                    if ((((-1 < iVar9) && (uVar5 = this->field_0030, iVar9 < (int)uVar5)) &&
                        (-1 < iVar10)) &&
                       (((iVar10 < this->field_0034 &&
                         (iVar11 = uVar5 * iVar10 + iVar9, -1 < iVar11)) &&
                        (this->field_0050[iVar11] != 0)))) {
                      thunk_FUN_00553990(iVar9,iVar10,this->field_004C,uVar5,this->field_0034);
                    }
                    param_7 = param_7 + 1;
                  } while ((int)param_7 < iVar8);
                  param_5_after_write = param_5_after_write + 1;
                } while (param_5_after_write < iVar8);
              }
            }
          }
        }
      }
    }
  }
  return;
}

