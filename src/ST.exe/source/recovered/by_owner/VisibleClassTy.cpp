#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/VisibleClassTy.cpp

// 0041CDA0 VisibleClassTy::sub_0041CDA0
#line 4 "decomp/ST.exe/functions/0041CDA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041CAF0 -> 0041CDA0 @ 0041CCEE; MOVSX at 0041CCE6 establishes signed source width 2 */

undefined4 __thiscall
st::fn_0041CDA0(VisibleClassTy *this,int param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;

  if ((DAT_0080874d == -1) || (this->field_00F8 == 0)) {
    return 1;
  }
  if (((-1 < param_1) &&
      (((param_1 < this->field_0020 && (-1 < param_2)) && (param_2 < this->field_0024)))) &&
     (this->field_0038 != nullptr)) {
    iVar2 = st::machine_word_boundary_cast<int>(this->field_0020 * param_2);
    pbVar1 = st::pointer_boundary_cast<byte *>(this->field_0038 + (iVar2 + param_1) * 2);
    if ((pbVar1 != nullptr) && (pbVar1[1] != 0)) {
      if (7 < param_4) {
        return 1;
      }
      if (this->field_003C[param_4 + 6] == nullptr) {
        return 1;
      }
      if (*(char *)((int)this->field_003C[param_4 + 6] + param_1 + iVar2) == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 005577C0 VisibleClassTy::VisibleClassTy
#line 4 "decomp/ST.exe/functions/005577C0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEEC (store 005577C9)
   Evidence: final_vptr=0079AEEC; returns_this=true; calls_before=1; field_writes_after=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

VisibleClassTy * __thiscall st::fn_005577C0(VisibleClassTy *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  byte **ppbVar4;

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079AEEC;
  g_visibleClass_00802A88 = this;
  this->field_0024 = 0;
  this->field_0020 = 0;
  this->field_002C = 0;
  this->field_0028 = 0;
  this->field_0034 = 0;
  this->field_0030 = 0;
  this->field_0104 = 1;
  this->field_0038 = nullptr;
  this->field_004C = nullptr;
  this->field_0050 = nullptr;
  ppvVar3 = &this->field_0054;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar3 = nullptr;
    ppvVar3 = ppvVar3 + 1;
  }
  ppbVar4 = this->field_0074;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppbVar4 = nullptr;
    ppbVar4 = ppbVar4 + 1;
  }
  ppbVar4 = this->field_0094;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppbVar4 = nullptr;
    ppbVar4 = ppbVar4 + 1;
  }
  this->field_003C[0] = nullptr;
  this->field_003C[1] = nullptr;
  this->field_003C[2] = nullptr;
  this->field_003C[3] = nullptr;
  this->field_00F4 = nullptr;
  this->field_0110 = nullptr;
  this->field_0114 = 0;
  this->field_00F8 = 1;
  memset(this->field_0118, 0, 0xc0); /* compiler bulk-zero initialization */
  iVar2 = 0;
  memset(&this->field_01D8, 0, 0xc0); /* compiler bulk-zero initialization */
  this->field_00FC[0] = 0;
  this->field_00FC[1] = 0;
  this->field_00FC[2] = 0;
  this->field_00FC[3] = 0;
  this->field_00FC[4] = 0;
  this->field_00FC[5] = 0;
  this->field_00FC[6] = 0;
  this->field_00FC[7] = 0;
  iVar1 = st::fn_0040581C();
  this->field_010C = iVar1;
  return this;
}

// 00558140 VisibleClassTy::sub_00558140
#line 4 "decomp/ST.exe/functions/00558140/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00558140(VisibleClassTy *this)

{
  int iVar1;
  byte **ppbVar2;
  void **ppvVar3;

  if (this->field_0038 != nullptr) {
    st::fn_006AB060(&this->field_0038);
  }
  if (this->field_004C != nullptr) {
    st::fn_006AB060(&this->field_004C);
  }
  if (this->field_0050 != nullptr) {
    st::fn_006AB060(&this->field_0050);
  }
  ppvVar3 = &this->field_0054;
  iVar1 = 8;
  do {
    if (*ppvVar3 != nullptr) {
      st::fn_006AB060(ppvVar3);
    }
    ppvVar3 = ppvVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_0074;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      st::fn_006AB060(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_0094;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      st::fn_006AB060(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_00B4;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      st::fn_006AB060(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_00D4;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      st::fn_006AB060(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar3 = this->field_003C;
  iVar1 = 4;
  do {
    if (*ppvVar3 != nullptr) {
      st::fn_006AB060(ppvVar3);
    }
    ppvVar3 = ppvVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (this->field_00F4 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_00F4);
    this->field_00F4 = nullptr;
  }
  if (this->field_0110 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_0110);
    this->field_0110 = nullptr;
  }
  return;
}

// 00558C00 VisibleClassTy::sub_00558C00
#line 4 "decomp/ST.exe/functions/00558C00/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00558C00_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/VisibleClassTy_sub_00558C00_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=42, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=8,
   ignored=81, unknown=0

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=8, ignored=81, unknown=0 */

VisibleClassTy_sub_00558C00_param_1Enum __thiscall
st::fn_00558C00
          (VisibleClassTy *this,VisibleClassTy_sub_00558C00_param_1Enum param_1,int param_2,
          int param_3,int *param_4,int *param_5)

{
  int iVar1;

  switch(param_1) {
  case CASE_0:
    *param_4 = (param_2 - param_3) * 0xb505 + this->field_0030 * 0x8000 >> 0x10;
    *param_5 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    return (param_2 + param_3) * 0x141d;
  case CASE_1:
    *param_4 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    iVar1 = param_3;
    param_3 = param_2;
    break;
  case CASE_2:
    *param_4 = (param_3 - param_2) * 0xb505 + this->field_0030 * 0x8000 >> 0x10;
    *param_5 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + this->field_0034;
    return (VisibleClassTy_sub_00558C00_param_1Enum)param_5;
  case CASE_3:
    *param_4 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + this->field_0030;
    iVar1 = param_2;
    break;
  default:
    goto switchD_00558c11_default;
  }
  param_1 = st::machine_word_boundary_cast<VisibleClassTy_sub_00558C00_param_1Enum>(this->field_0034 * 0x8000);
  *param_5 = (int)((iVar1 - param_3) * 0xb505 + param_1) >> 0x10;
switchD_00558c11_default:
  return param_1;
}

// 00558DC0 VisibleClassTy::sub_00558DC0
#line 4 "decomp/ST.exe/functions/00558DC0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00557C90 -> 00558DC0 @ 00557E59 | 00558840 -> 00558DC0 @ 00558A11 | 0055B7F0 ->
   00558DC0 @ 0055B921

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=4; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=50; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00558DC0
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,int *param_4,uint param_5
          ,int *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  VisibleClassTy_sub_00558C00_param_1Enum VVar7;
  int iVar8;
  void **ppvVar9;
  uint uVar10;
  int iVar11;
  byte *local_c;

  uVar10 = param_5;
  piVar4 = param_4;
  if ((((this->field_0114 != 0) && (-1 < (int)param_5)) && (param_4 < (int *)0x8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[(int)param_4].field_0022 < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      st::fn_00403B02(this,0,(short)param_1,(short)param_2,(char)param_3,(uint)param_4,(byte)param_5,
                   (uint)param_6);
    }
    if (*(char *)((int)(piVar4 + 0x3f) + (int)this) != '\0') {
      iVar2 = uVar10 * 2 + 1;
      param_6 = (int *)(param_1 - uVar10);
      param_4 = (int *)(param_2 - uVar10);
      pbVar5 = st::fn_004028BF(uVar10);
      if (((pbVar5 != nullptr) && (this->field_0038 != nullptr)) &&
         (((param_7 & 1) != 0 && (iVar8 = 0, uVar10 = param_5, local_c = pbVar5, 0 < iVar2)))) {
        do {
          iVar6 = 0;
          do {
            if (local_c[iVar6] != 0) {
              iVar11 = iVar8 + (int)param_4;
              iVar1 = iVar6 + (int)param_6;
              if ((((-1 < iVar1) && (iVar1 < this->field_0020)) && (-1 < iVar11)) &&
                 (iVar11 < this->field_0024)) {
                bVar3 = this->field_0038[(this->field_0020 * iVar11 + iVar1) * 2];
                if (bVar3 != 0xff) {
                  this->field_0038[(this->field_0020 * iVar11 + iVar1) * 2] = bVar3 + 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
          iVar8 = iVar8 + 1;
          local_c = local_c + iVar2;
        } while (iVar8 < iVar2);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < 5)) {
        if ((param_7 & 0x2008) != 0) {
          VVar7 = CASE_0;
          ppvVar9 = this->field_003C;
          do {
            if (*ppvVar9 != nullptr) {
              st::fn_00403F53(this,VVar7,param_1,param_2,(int *)&param_6,(int *)&param_4);
              param_4 = (int *)((int)param_4 + g_centeredOffsets5[(int)param_3]);
              st::fn_004059CA((int)param_6,(int)param_4,st::pointer_boundary_cast<byte *>(*ppvVar9),this->field_0028,
                                 this->field_002C,(undefined *)param_5);
            }
            VVar7 = VVar7 + CASE_1;
            ppvVar9 = ppvVar9 + 1;
            uVar10 = param_5;
          } while ((int)VVar7 < 4);
        }
        if (((pbVar5 != nullptr) && (this->field_004C != nullptr)) &&
           ((this->field_0050 != nullptr && ((param_7 & 0x4000) != 0)))) {
          st::fn_00403F53(this,this->field_010C,param_1,param_2,(int *)&param_6,(int *)&param_4);
          param_6 = (int *)((int)param_6 - uVar10);
          param_5 = 0;
          param_4 = (int *)((int)param_4 + (g_centeredOffsets5[(int)param_3] - uVar10));
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = st::pointer_boundary_cast<undefined *>(pbVar5);
          if (0 < iVar2) {
            do {
              param_7 = 0;
              do {
                if (param_3[param_7] != '\0') {
                  iVar8 = param_7 + (int)param_6;
                  iVar6 = param_5 + (int)param_4;
                  if ((((-1 < iVar8) && (uVar10 = this->field_0030, iVar8 < (int)uVar10)) &&
                      (-1 < iVar6)) &&
                     ((iVar6 < this->field_0034 && (iVar11 = uVar10 * iVar6 + iVar8, -1 < iVar11))))
                  {
                    if (this->field_0050[iVar11] == 0) {
                      st::fn_00402B76(iVar8,iVar6,this->field_004C,uVar10,this->field_0034);
                    }
                    this->field_0050[iVar11] = this->field_0050[iVar11] + 1;
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar2);
              param_5 = param_5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + iVar2;
            } while ((int)param_5 < iVar2);
          }
        }
      }
    }
  }
  return;
}

// 00559110 VisibleClassTy::sub_00559110
#line 4 "decomp/ST.exe/functions/00559110/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=52; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00559110
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
      st::fn_00401BE5(this,0,(short)param_1,(short)param_2,(char)param_3,param_4,(byte)param_5,param_6);
    }
    if (this->field_00FC[uVar5] != 0) {
      iVar9 = iVar8 * 2 + 1;
      param_4 = param_1 - iVar8;
      param_6 = (int)param_2 - iVar8;
      pbVar7 = st::fn_004028BF(iVar8);
      if (pbVar7 != nullptr) {
        iVar10 = iVar8;
        if (((this->field_0038 != nullptr) && ((param_7 & 1) != 0)) &&
           (iVar11 = 0, iVar10 = param_5, local_c = pbVar7, 0 < iVar9)) {
          do {
            iVar12 = 0;
            do {
              if (local_c[iVar12] != 0) {
                iVar1 = iVar11 + param_6;
                iVar2 = iVar12 + param_4;
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
          st::fn_00403F53(this,this->field_010C,param_1,(int)param_2,(int *)&param_4,&param_6);
          param_5 = 0;
          param_4 = param_4 - iVar10;
          param_6 = param_6 + (g_centeredOffsets5[param_3] - iVar10);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = st::pointer_boundary_cast<undefined *>(pbVar7);
          if (0 < iVar9) {
            do {
              param_7 = 0;
              do {
                if (param_2[param_7] != '\0') {
                  iVar10 = param_7 + param_4;
                  iVar11 = param_5 + param_6;
                  if (((-1 < iVar10) && (uVar5 = this->field_0030, iVar10 < (int)uVar5)) &&
                     ((-1 < iVar11 &&
                      ((iVar11 < this->field_0034 && (iVar12 = uVar5 * iVar11 + iVar10, -1 < iVar12)
                       ))))) {
                    if (this->field_0050[iVar12] == 1) {
                      st::fn_00404E35(iVar10,iVar11,this->field_004C,uVar5,this->field_0034);
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
              param_5 = param_5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_2 = param_2 + iVar9;
            } while (param_5 < iVar9);
            if (bVar6) {
              param_4 = param_4 - 1;
              iVar8 = iVar8 * 2 + 3;
              param_6 = param_6 + -1;
              param_5 = 0;
              if (0 < iVar8) {
                do {
                  param_7 = 0;
                  do {
                    iVar9 = param_7 + param_4;
                    iVar10 = param_5 + param_6;
                    if ((((-1 < iVar9) && (uVar5 = this->field_0030, iVar9 < (int)uVar5)) &&
                        (-1 < iVar10)) &&
                       (((iVar10 < this->field_0034 &&
                         (iVar11 = uVar5 * iVar10 + iVar9, -1 < iVar11)) &&
                        (this->field_0050[iVar11] != 0)))) {
                      st::fn_00402B76(iVar9,iVar10,this->field_004C,uVar5,this->field_0034);
                    }
                    param_7 = param_7 + 1;
                  } while ((int)param_7 < iVar8);
                  param_5 = param_5 + 1;
                } while (param_5 < iVar8);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// 005594A0 VisibleClassTy::sub_005594A0
#line 4 "decomp/ST.exe/functions/005594A0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00558C00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=15; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041C3F0 -> 005594A0 @ 0041C49E; /TLOEmbryoTy+0x5f; MOVSX at 0041C488 establishes
   signed source width 2 | 0041CE40 -> 005594A0 @ 0041CE73; MOVSX at 0041CE60 establishes signed
   source width 2 | 00557C90 -> 005594A0 @ 00557E86; MOVSX at 00557E6F establishes signed source
   width 1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005594A0 -> 0055BB00 @ 00559511 */

void __thiscall
st::fn_005594A0
          (VisibleClassTy *this,int param_1,int param_2,char param_3,undefined *param_4,int param_5,
          uint param_6,uint param_7)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (this->field_0038 != nullptr)) && (-1 < param_5)) &&
     ((param_4 < (undefined *)0x8 &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)param_4].field_0022 < 8)))))) {
    if ((param_7 & 0x1000) != 0) {
      st::fn_00403B02(this,1,(short)param_1,(short)param_2,param_3,(uint)param_4,(byte)param_5,param_6);
    }
    if (((param_4 + 0xfc)[(int)this] != '\0') && ((param_7 & 2) != 0)) {
      iVar1 = param_5 * 2 + 1;
      iVar5 = param_1 - param_5;
      iVar8 = param_2 - param_5;
      pbVar3 = st::fn_004028BF(param_5);
      param_4 = st::pointer_boundary_cast<undefined *>(pbVar3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = iVar1;
      if (0 < iVar1) {
        do {
          iVar4 = 0;
          iVar7 = iVar5;
          do {
            if (((((pbVar3 == nullptr) || (param_4[iVar4] != '\0')) && (-1 < iVar7)) &&
                ((iVar7 < this->field_0020 && (-1 < iVar8)))) && (iVar8 < this->field_0024)) {
              iVar6 = iVar8 * this->field_0020 + iVar7;
              bVar2 = this->field_0038[iVar6 * 2 + 1];
              if (bVar2 != 0xff) {
                this->field_0038[iVar6 * 2 + 1] = bVar2 + 1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar4 < iVar1);
          iVar8 = iVar8 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -1;
          param_4 = param_4 + iVar1;
        } while (param_5 != 0);
      }
    }
  }
  return;
}

// 00559620 VisibleClassTy::sub_00559620
#line 4 "decomp/ST.exe/functions/00559620/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00558C00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=15; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041C5A0 -> 00559620 @ 0041C60F; MOVSX at 0041C5F9 establishes signed source width 2 |
   0041CF50 -> 00559620 @ 0041CF7D; MOVSX at 0041CF6D establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00559620 -> 0055BBC0 @ 00559691 */

void __thiscall
st::fn_00559620
          (VisibleClassTy *this,int param_1,int param_2,char param_3,undefined *param_4,int param_5,
          int param_6,uint param_7)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (this->field_0038 != nullptr)) && (-1 < param_5)) &&
     ((param_4 < (undefined *)0x8 &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)param_4].field_0022 < 8)))))) {
    if ((param_7 & 0x1000) != 0) {
      st::fn_00401BE5(this,1,(short)param_1,(short)param_2,param_3,(uint)param_4,(byte)param_5,param_6);
    }
    if (((param_4 + 0xfc)[(int)this] != '\0') && ((param_7 & 2) != 0)) {
      iVar1 = param_5 * 2 + 1;
      iVar5 = param_1 - param_5;
      iVar8 = param_2 - param_5;
      pbVar3 = st::fn_004028BF(param_5);
      param_4 = st::pointer_boundary_cast<undefined *>(pbVar3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = iVar1;
      if (0 < iVar1) {
        do {
          iVar4 = 0;
          iVar7 = iVar5;
          do {
            if (((((pbVar3 == nullptr) || (param_4[iVar4] != '\0')) && (-1 < iVar7)) &&
                ((iVar7 < this->field_0020 && (-1 < iVar8)))) && (iVar8 < this->field_0024)) {
              iVar6 = iVar8 * this->field_0020 + iVar7;
              bVar2 = this->field_0038[iVar6 * 2 + 1];
              if (bVar2 != 0) {
                this->field_0038[iVar6 * 2 + 1] = bVar2 - 1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar4 < iVar1);
          iVar8 = iVar8 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -1;
          param_4 = param_4 + iVar1;
        } while (param_5 != 0);
      }
    }
  }
  return;
}

// 005599D0 VisibleClassTy::sub_005599D0
#line 4 "decomp/ST.exe/functions/005599D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=3, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=005599E8 incoming load: MOV ESI,dword ptr [EBP +
   0x18] | 00559A3F scalar operation: LEA ECX,[ESI + ESI*0x1 + 0x1] | 00559A43 scalar operation: SUB
   EBX,ESI | 00559A4C scalar operation: SUB EDI,ESI | 00559A62 first slot write: MOV dword ptr [EBP
   + 0x18],ECX

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041D100 -> 005599D0 @ 0041D12B; MOVSX at 0041D11C establishes signed source width 2 |
   005599D0 -> 0055BBC0 @ 00559A3A

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005599D0 -> 0055BBC0 @ 00559A3A | 00559A5E TEST EAX,EAX classifies dword parameter
   loaded at 00559A55 | 00559AB3 CMP EAX,ECX classifies dword parameter loaded at 00559AAE */

void __thiscall
st::fn_005599D0
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          int param_6)

{
  int _param_3 = static_cast<int>(param_3);

  int iVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)) &&
      (this->field_003C[param_4 + 6] != nullptr)))) {
    st::fn_00401BE5(this,2,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    iVar1 = param_5 * 2 + 1;
    iVar5 = param_1 - param_5;
    iVar8 = param_2 - param_5;
    pbVar3 = st::fn_004028BF(param_5);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_3 = iVar1;
    param_5 = (int)pbVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((pbVar3 == nullptr) || (*(char *)(param_5 + iVar4) != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020;
            cVar2 = *(char *)((int)this->field_003C[param_4 + 6] + iVar7 + iVar6);
            if (cVar2 != '\0') {
              *(char *)((int)this->field_003C[param_4 + 6] + iVar7 + iVar6) = cVar2 + -1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

// 00559D60 VisibleClassTy::sub_00559D60
#line 4 "decomp/ST.exe/functions/00559D60/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00558C00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[24];
   expected_stack=24; receiver_family_members=15; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=3, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=00559D78 incoming load: MOV ESI,dword ptr [EBP +
   0x18] | 00559DCF scalar operation: LEA ECX,[ESI + ESI*0x1 + 0x1] | 00559DD3 scalar operation: SUB
   EBX,ESI | 00559DDC scalar operation: SUB EDI,ESI | 00559DF2 first slot write: MOV dword ptr [EBP
   + 0x18],ECX

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041C5A0 -> 00559D60 @ 0041C656; MOVSX at 0041C63F establishes signed source width 2 |
   0041D2B0 -> 00559D60 @ 0041D2DB; /STMineSetC+0x5f; MOVSX at 0041D2CC establishes signed source
   width 2 | 00624920 -> 00559D60 @ 00624F94; /STMineSetC+0x4b; MOVSX at 00624F7D establishes signed
   source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0041D2B0 -> 00559D60 @ 0041D2DB; /STMineSetC+0x18 | 00624920 -> 00559D60 @ 00624F94;
   /STMineSetC+0x18 */

void __thiscall
st::fn_00559D60
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6)

{
  int _param_3 = static_cast<int>(param_3);

  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)) &&
      (this->field_0074[param_4] != nullptr)))) {
    st::fn_00401BE5(this,3,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    iVar1 = param_5 * 2 + 1;
    iVar5 = param_1 - param_5;
    iVar8 = param_2 - param_5;
    pbVar3 = st::fn_004028BF(param_5);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_3 = iVar1;
    param_5 = (int)pbVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((pbVar3 == nullptr) || (*(char *)(param_5 + iVar4) != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020;
            bVar2 = this->field_0074[param_4][iVar7 + iVar6];
            if (bVar2 != 0) {
              this->field_0074[param_4][iVar7 + iVar6] = bVar2 - 1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

// 0055A110 VisibleClassTy::sub_0055A110
#line 4 "decomp/ST.exe/functions/0055A110/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=3, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=0055A128 incoming load: MOV ESI,dword ptr [EBP +
   0x18] | 0055A182 scalar operation: LEA ECX,[ESI + ESI*0x1 + 0x1] | 0055A186 scalar operation: SUB
   EBX,ESI | 0055A18F scalar operation: SUB EDI,ESI | 0055A1A5 first slot write: MOV dword ptr [EBP
   + 0x18],ECX

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041D4F0 -> 0055A110 @ 0041D51B; MOVSX at 0041D50C establishes signed source width 2 |
   0055A110 -> 0055BBC0 @ 0055A17D

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A110 -> 0055BBC0 @ 0055A17D | 0055A1A1 TEST EAX,EAX classifies dword parameter
   loaded at 0055A198 | 0055A1F9 CMP EAX,ECX classifies dword parameter loaded at 0055A1F4 */

void __thiscall
st::fn_0055A110
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          int param_6)

{
  int _param_3 = static_cast<int>(param_3);

  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)) &&
      (this->field_0094[param_4] != nullptr)))) {
    st::fn_00401BE5(this,4,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    iVar1 = param_5 * 2 + 1;
    iVar5 = param_1 - param_5;
    iVar8 = param_2 - param_5;
    pbVar3 = st::fn_004028BF(param_5);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_3 = iVar1;
    param_5 = (int)pbVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((pbVar3 == nullptr) || (*(char *)(param_5 + iVar4) != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020;
            bVar2 = this->field_0094[param_4][iVar7 + iVar6];
            if (bVar2 != 0) {
              this->field_0094[param_4][iVar7 + iVar6] = bVar2 - 1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

// 0055A4C0 VisibleClassTy::sub_0055A4C0
#line 4 "decomp/ST.exe/functions/0055A4C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=3, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=0055A4D8 incoming load: MOV ESI,dword ptr [EBP +
   0x18] | 0055A532 scalar operation: LEA ECX,[ESI + ESI*0x1 + 0x1] | 0055A536 scalar operation: SUB
   EBX,ESI | 0055A53F scalar operation: SUB EDI,ESI | 0055A555 first slot write: MOV dword ptr [EBP
   + 0x18],ECX

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00494AE0 -> 0055A4C0 @ 00494BBB; MOVSX at 00494BAC establishes signed source width 2 |
   00494F00 -> 0055A4C0 @ 00494F6E; MOVSX at 00494F5F establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A4C0 -> 0055BBC0 @ 0055A52D | 0055A551 TEST EAX,EAX classifies dword parameter
   loaded at 0055A548 | 0055A5A9 CMP EAX,ECX classifies dword parameter loaded at 0055A5A4 */

void __thiscall
st::fn_0055A4C0
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          int param_6)

{
  int _param_3 = static_cast<int>(param_3);

  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)) &&
      (this->field_00B4[param_4] != nullptr)))) {
    st::fn_00401BE5(this,5,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    iVar1 = param_5 * 2 + 1;
    iVar5 = param_1 - param_5;
    iVar8 = param_2 - param_5;
    pbVar3 = st::fn_004028BF(param_5);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_3 = iVar1;
    param_5 = (int)pbVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((pbVar3 == nullptr) || (*(char *)(param_5 + iVar4) != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020;
            bVar2 = this->field_00B4[param_4][iVar7 + iVar6];
            if (bVar2 != 0) {
              this->field_00B4[param_4][iVar7 + iVar6] = bVar2 - 1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

// 0055A870 VisibleClassTy::sub_0055A870
#line 4 "decomp/ST.exe/functions/0055A870/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x18, direct_reads=1, scalar_operations=3, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=0055A888 incoming load: MOV ESI,dword ptr [EBP +
   0x18] | 0055A8E2 scalar operation: LEA ECX,[ESI + ESI*0x1 + 0x1] | 0055A8E6 scalar operation: SUB
   EBX,ESI | 0055A8EF scalar operation: SUB EDI,ESI | 0055A905 first slot write: MOV dword ptr [EBP
   + 0x18],ECX

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00494AE0 -> 0055A870 @ 00494CD5; MOVSX at 00494CC6 establishes signed source width 2 |
   00494F00 -> 0055A870 @ 00494FBD; MOVSX at 00494FAE establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A870 -> 0055BBC0 @ 0055A8DD | 0055A901 TEST EAX,EAX classifies dword parameter
   loaded at 0055A8F8 | 0055A959 CMP EAX,ECX classifies dword parameter loaded at 0055A954 */

void __thiscall
st::fn_0055A870
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          int param_6)

{
  int _param_3 = static_cast<int>(param_3);

  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)) &&
      (this->field_00D4[param_4] != nullptr)))) {
    st::fn_00401BE5(this,6,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    iVar1 = param_5 * 2 + 1;
    iVar5 = param_1 - param_5;
    iVar8 = param_2 - param_5;
    pbVar3 = st::fn_004028BF(param_5);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_3 = iVar1;
    param_5 = (int)pbVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((pbVar3 == nullptr) || (*(char *)(param_5 + iVar4) != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020;
            bVar2 = this->field_00D4[param_4][iVar7 + iVar6];
            if (bVar2 != 0) {
              this->field_00D4[param_4][iVar7 + iVar6] = bVar2 - 1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

// 0055AD00 VisibleClassTy::sub_0055AD00
#line 4 "decomp/ST.exe/functions/0055AD00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0055AD00
          (VisibleClassTy *this,int param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint local_1c;
  int local_18;
  byte *local_10;
  byte *local_c;
  void **local_8;

  if (((this->field_0114 != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_8 = &this->field_0054;
    local_1c = 0;
    local_10 = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((local_1c != param_4) && (*local_10 != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)local_1c) {
LAB_0055ae0a:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar6 = local_1c & 0xff;
            bVar2 = g_playerRelationMatrix[uVar3][uVar6];
            if ((bVar2 == 0) && (g_playerRelationMatrix[uVar6][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar6][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar6][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[uVar6][uVar3] != 1)) goto LAB_0055ae0a;
              iVar4 = 2;
            }
          }
          bVar9 = iVar4 < 0;
        }
        else {
          bVar9 = g_bulkInitializedRecords_008087C7[local_1c & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if ((bVar9) && (*local_8 != nullptr)) {
          if (param_5 < 0) {
            param_5 = 0;
          }
          iVar4 = -param_5 + param_1;
          iVar8 = -param_5 + param_2;
          pbVar5 = st::fn_004028BF(param_5);
          local_18 = 0;
          local_c = pbVar5;
          if (0 < param_5 * 2 + 1) {
            do {
              iVar7 = 0;
              do {
                if ((((((pbVar5 == nullptr) || (local_c[iVar7] != 0)) &&
                      (iVar1 = iVar7 + iVar4, -1 < iVar1)) &&
                     ((iVar1 < this->field_0020 && (-1 < iVar8)))) &&
                    ((iVar8 < this->field_0024 &&
                     (((int)local_10 < 0x808a71 && (*local_8 != nullptr)))))) &&
                   (*(char *)((int)*local_8 + iVar4 + iVar7 + iVar8 * this->field_0020) != '\0')) {
                  return 1;
                }
                iVar7 = iVar7 + 1;
                iVar1 = param_5 * 2 + 1;
              } while (iVar7 < iVar1);
              local_18 = local_18 + 1;
              iVar8 = iVar8 + 1;
              local_c = local_c + iVar1;
            } while (local_18 < iVar1);
          }
        }
      }
      local_10 = local_10 + 0x51;
      local_1c = local_1c + 1;
      local_8 = local_8 + 1;
    } while ((int)local_10 < 0x808a71);
  }
  return 0;
}

// 0055B1C0 VisibleClassTy::sub_0055B1C0
#line 4 "decomp/ST.exe/functions/0055B1C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0055B1C0
          (VisibleClassTy *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte *local_c;
  byte **local_8;

  if (((this->field_0114 != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    uVar2 = 0;
    local_8 = this->field_0094;
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((uVar2 != param_4) && (*local_c != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uVar2) {
LAB_0055b2ce:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar5 = uVar2 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar5];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar5][uVar3] != 1)) goto LAB_0055b2ce;
              iVar4 = 2;
            }
          }
          bVar6 = iVar4 < 0;
        }
        else {
          bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if (bVar6) {
          if ((((*local_8 != nullptr) && (-1 < param_1)) && (param_1 < this->field_0020)) &&
             (((-1 < param_2 && (param_2 < this->field_0024)) &&
              (((int)local_c < 0x808a71 && ((*local_8)[param_1 + this->field_0020 * param_2] != 0)))
              ))) {
            return 1;
          }
        }
      }
      local_c = local_c + 0x51;
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 1;
    } while ((int)local_c < 0x808a71);
  }
  return 0;
}

// 0055B7F0 VisibleClassTy::sub_0055B7F0
#line 4 "decomp/ST.exe/functions/0055B7F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=9; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall st::fn_0055B7F0(VisibleClassTy *this,int param_1,undefined *param_2)

{
  VisibleClassTy_field_0110Element *element_0110;
  VisibleClassTy_field_0110DArray *pVVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  if ((((this->field_0114 != 0) && (param_2 < (undefined *)0x8)) &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)param_2].field_0022 < 8)))) &&
     (param_2 != (undefined *)(uint)DAT_0080874d)) {
    if (param_1 == 0) {
      if ((param_2 + 0xfc)[(int)this] == '\0') {
        return;
      }
    }
    else {
      if ((param_2 + 0xfc)[(int)this] == '\x01') {
        return;
      }
      (param_2 + 0xfc)[(int)this] = 1;
    }
    pVVar2 = this->field_0110;
    uVar4 = 0;
    if (0 < (int)pVVar2->count) {
      bVar5 = pVVar2->count != 0;
      do {
        if (bVar5) {
          element_0110 = DArrayAt<VisibleClassTy_field_0110Element>(pVVar2, uVar4);
        }
        else {
          element_0110 = nullptr;
        }
        piVar3 = (int *)(uint)(byte)element_0110->field_0001;
        if (piVar3 == (int *)param_2) {
          if (element_0110->field_0000 == '\0') {
            if (param_1 == 0) {
              st::fn_004018F2(this,(int)element_0110->field_0002,(undefined *)(int)element_0110->field_0004
                           ,(int)element_0110->field_0006,(uint)piVar3,(uint)(byte)element_0110->field_0007,element_0110->field_0008,
                           0x4001);
            }
            else {
              st::fn_0040388C(this,(int)element_0110->field_0002,(int)element_0110->field_0004,
                           (undefined *)(int)element_0110->field_0006,piVar3,(uint)(byte)element_0110->field_0007,
                           st::pointer_boundary_cast<int *>(element_0110->field_0008),0x6009);
            }
          }
          else if (element_0110->field_0000 == '\x01') {
            if (param_1 == 0) {
              st::fn_00402018(this,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                           (undefined *)piVar3,(uint)(byte)element_0110->field_0007,element_0110->field_0008,2);
            }
            else {
              st::fn_00402C2A(this,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                           (undefined *)piVar3,(uint)(byte)element_0110->field_0007,element_0110->field_0008,2);
            }
          }
        }
        pVVar2 = this->field_0110;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pVVar2->count;
      } while ((int)uVar4 < (int)pVVar2->count);
    }
    if (param_1 == 0) {
      (param_2 + 0xfc)[(int)this] = 0;
    }
  }
  return;
}

// 0055BB00 VisibleClassTy::sub_0055BB00
#line 4 "decomp/ST.exe/functions/0055BB00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=6; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; literal 0 at 00558E24 | 005594A0 -> 0055BB00 @
   00559511; literal 1 at 0055950F | 005597A0 -> 0055BB00 @ 00559860; literal 2 at 0055985C |
   00559B30 -> 0055BB00 @ 00559BF0; literal 3 at 00559BEC | 00559EC0 -> 0055BB00 @ 00559F86; literal
   4 at 00559F82 | 0055A270 -> 0055BB00 @ 0055A336; literal 5 at 0055A332 | 0055A620 -> 0055BB00 @
   0055A6E6; literal 6 at 0055A6E2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; VisibleClassTy::sub_00558DC0 parameter param_1 |
   005597A0 -> 0055BB00 @ 00559860; VisibleClassTy::SetZoneDes parameter param_1 | 00559B30 ->
   0055BB00 @ 00559BF0; VisibleClassTy::SetZoneAst parameter param_1 | 00559EC0 -> 0055BB00 @
   00559F86; VisibleClassTy::SetZoneTsh parameter param_1 | 0055A270 -> 0055BB00 @ 0055A336;
   VisibleClassTy::SetZoneMin1 parameter param_1 | 0055A620 -> 0055BB00 @ 0055A6E6;
   VisibleClassTy::SetZoneMin2 parameter param_1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; VisibleClassTy::sub_00558DC0 parameter param_2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005594A0 -> 0055BB00 @ 00559511; VisibleClassTy::sub_005594A0 parameter param_3 |
   005597A0 -> 0055BB00 @ 00559860; VisibleClassTy::SetZoneDes parameter param_3 | 00559B30 ->
   0055BB00 @ 00559BF0; VisibleClassTy::SetZoneAst parameter param_3 | 00559EC0 -> 0055BB00 @
   00559F86; VisibleClassTy::SetZoneTsh parameter param_3 | 0055A270 -> 0055BB00 @ 0055A336;
   VisibleClassTy::SetZoneMin1 parameter param_3 | 0055A620 -> 0055BB00 @ 0055A6E6;
   VisibleClassTy::SetZoneMin2 parameter param_3

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0055BB48 MOV AL,byte ptr
   [EBP + 0x1c]

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=4, unknown=3

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; VisibleClassTy::sub_00558DC0 parameter param_6 |
   005594A0 -> 0055BB00 @ 00559511; VisibleClassTy::sub_005594A0 parameter param_6 | 005597A0 ->
   0055BB00 @ 00559860; VisibleClassTy::SetZoneDes parameter param_6 | 00559B30 -> 0055BB00 @
   00559BF0; VisibleClassTy::SetZoneAst parameter param_6 | 00559EC0 -> 0055BB00 @ 00559F86;
   VisibleClassTy::SetZoneTsh parameter param_6 | 0055A270 -> 0055BB00 @ 0055A336;
   VisibleClassTy::SetZoneMin1 parameter param_6 | 0055A620 -> 0055BB00 @ 0055A6E6;
   VisibleClassTy::SetZoneMin2 parameter param_6 */

void __thiscall
st::fn_0055BB00
          (VisibleClassTy *this,byte param_1,short param_2,short param_3,char param_4,uint param_5,
          byte param_6,uint param_7)

{
  undefined4 local_10;
  short local_c;
  char cStack_a;
  byte bStack_9;
  uint local_8;

  if ((((this->field_0114 != 0) && (this->field_0110 != nullptr)) &&
      (param_5 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_5].field_0022 < 8)))) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = CONCAT22(param_2,(short)CONCAT31((int3)param_5,param_1));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    auto _local_c = CONCAT13(param_6,CONCAT12(param_4,param_3));
    local_8 = param_7;
    st::fn_006AE1C0((DArrayTy *)this->field_0110,&local_10);
  }
  return;
}

// 0055BBC0 VisibleClassTy::sub_0055BBC0
#line 4 "decomp/ST.exe/functions/0055BBC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; literal 0 at 0055917B | 00559620 -> 0055BBC0 @
   00559691; literal 1 at 0055968F | 005599D0 -> 0055BBC0 @ 00559A3A; literal 2 at 00559A38 |
   00559D60 -> 0055BBC0 @ 00559DCA; literal 3 at 00559DC8 | 0055A110 -> 0055BBC0 @ 0055A17D; literal
   4 at 0055A17B | 0055A4C0 -> 0055BBC0 @ 0055A52D; literal 5 at 0055A52B | 0055A870 -> 0055BBC0 @
   0055A8DD; literal 6 at 0055A8DB

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; VisibleClassTy::sub_00559110 parameter param_1 |
   005599D0 -> 0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_1 | 00559D60 ->
   0055BBC0 @ 00559DCA; VisibleClassTy::sub_00559D60 parameter param_1 | 0055A110 -> 0055BBC0 @
   0055A17D; VisibleClassTy::sub_0055A110 parameter param_1 | 0055A4C0 -> 0055BBC0 @ 0055A52D;
   VisibleClassTy::sub_0055A4C0 parameter param_1 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005599D0 -> 0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_2 |
   00559D60 -> 0055BBC0 @ 00559DCA; VisibleClassTy::sub_00559D60 parameter param_2 | 0055A110 ->
   0055BBC0 @ 0055A17D; VisibleClassTy::sub_0055A110 parameter param_2 | 0055A4C0 -> 0055BBC0 @
   0055A52D; VisibleClassTy::sub_0055A4C0 parameter param_2 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; VisibleClassTy::sub_00559110 parameter param_3 |
   00559620 -> 0055BBC0 @ 00559691; VisibleClassTy::sub_00559620 parameter param_3 | 005599D0 ->
   0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_3 | 00559D60 -> 0055BBC0 @
   00559DCA; VisibleClassTy::sub_00559D60 parameter param_3 | 0055A110 -> 0055BBC0 @ 0055A17D;
   VisibleClassTy::sub_0055A110 parameter param_3 | 0055A4C0 -> 0055BBC0 @ 0055A52D;
   VisibleClassTy::sub_0055A4C0 parameter param_3 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_3

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0055BC26 MOV DL,byte ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00559110 -> 0055BBC0 @ 0055917F; VisibleClassTy::sub_00559110 parameter param_6 |
   00559620 -> 0055BBC0 @ 00559691; VisibleClassTy::sub_00559620 parameter param_6 | 005599D0 ->
   0055BBC0 @ 00559A3A; VisibleClassTy::sub_005599D0 parameter param_6 | 00559D60 -> 0055BBC0 @
   00559DCA; VisibleClassTy::sub_00559D60 parameter param_6 | 0055A110 -> 0055BBC0 @ 0055A17D;
   VisibleClassTy::sub_0055A110 parameter param_6 | 0055A4C0 -> 0055BBC0 @ 0055A52D;
   VisibleClassTy::sub_0055A4C0 parameter param_6 | 0055A870 -> 0055BBC0 @ 0055A8DD;
   VisibleClassTy::sub_0055A870 parameter param_6 */

void __thiscall
st::fn_0055BBC0
          (VisibleClassTy *this,byte param_1,short param_2,short param_3,char param_4,uint param_5,
          byte param_6,int param_7)

{
  uint index;
  RecoveredRecord_VisibleClassTy_0055B9F0 local_10;

  if ((((this->field_0114 != 0) && (this->field_0110 != nullptr)) &&
      (param_5 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_5].field_0022 < 8)))) {
    local_10.field_0006 = param_4;
    local_10.field_0004 = param_3;
    local_10.field_0001 = (char)param_5;
    local_10.field_0000 = param_1;
    local_10.field_0002 = param_2;
    local_10.field_0007 = param_6;
    local_10.field_0008 = param_7;
    index = st::fn_004011A4(this,&local_10);
    if (-1 < (int)index) {
      st::fn_006B0C70((DArrayTy *)this->field_0110,index);
    }
  }
  return;
}

// 005F1D80 VisibleClassTy::sub_005F1D80
#line 4 "decomp/ST.exe/functions/005F1D80/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=4; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_005F1D80(VisibleClassTy *this,int param_1,int param_2,int param_3)

{
  int iVar1;

  if ((DAT_0080874d != -1) && (this->field_00F8 != 0)) {
    st::fn_00403F53(this,this->field_010C,param_1,param_2,&param_2,&param_1);
    if ((((-1 < param_3) && (((param_3 < 5 && (-1 < param_2)) && (param_2 < (int)this->field_0030)))
         ) && (((iVar1 = g_centeredOffsets5[param_3] + param_1, -1 < iVar1 &&
                (iVar1 < this->field_0034)) && (this->field_004C != nullptr)))) &&
       (this->field_004C[param_2 + iVar1 * this->field_0030] == 0)) {
      return 0;
    }
  }
  return 1;
}

