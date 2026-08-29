#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STManRuinC.cpp

// 00630870 STManRuinC::STManRuinC
#line 4 "decomp/ST.exe/functions/00630870/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D19C (store 0063087B)
   Evidence: final_vptr=0079D19C; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STManRuinC * __thiscall st::fn_00630870(STManRuinC *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079D19C;
  memset(&this->field_001C, 0, 0x55); /* compiler bulk-zero initialization */
  this->field_0061 = 0xffffffff;
  return this;
}

// 006308F0 STManRuinC::sub_006308F0
#line 4 "decomp/ST.exe/functions/006308F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
st::fn_006308F0
          (STManRuinC *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6)

{
  byte bVar1;
  byte *pbVar2;
  STManRuinC_field_0038DArray *array;
  DArrayTy *pSVar3_mg0;
  int iVar3;
  int iVar4;
  uint index;
  short *psVar5;
  short local_20;
  short local_1e;
  short local_1c;
  ushort local_1a;
  uint local_18;
  uint local_14;
  int local_c;
  int local_8;

  index = 0xffffffff;
  iVar4 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
  local_8 = 0;
  if (param_4 == 1) {
    bVar1 = this->field_0034[iVar4];
  }
  else {
    pbVar2 = this->field_0034;
    local_8 = g_worldGrid.sizeY + iVar4;
    if (pbVar2[iVar4] != 0) {
      return 0xffffffff;
    }
    if (pbVar2[iVar4 + 1] != 0) {
      return 0xffffffff;
    }
    if (pbVar2[local_8] != 0) {
      return 0xffffffff;
    }
    bVar1 = pbVar2[local_8 + 1];
  }
  if (bVar1 == 0) {
    if (this->field_0038 == nullptr) {
      /* ST_CALLSITE[0063097E]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManRuinC_field_0038DArray; source view only; no Ghidra override */
      pSVar3_mg0 = st::fn_006AE290(nullptr,10,0x75,10);
      this->field_0038 = reinterpret_cast<STManRuinC_field_0038DArray *>(pSVar3_mg0);
    }
    array = this->field_0038;
    if ((array != nullptr) && (array->count < 0xfe)) {
      psVar5 = &local_20;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        psVar5[0] = 0;
        psVar5[1] = 0;
        psVar5 = psVar5 + 2;
      }
      local_1a = (undefined2)param_4;
      local_18 = param_5;
      local_14 = g_playSystem_00802A38->field_00E4;
      local_20 = (short)param_1;
      local_1c = (short)param_3;
      local_1e = (short)param_2;
      local_c = param_6;

      index = st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(array),&local_20);
      if (-1 < (int)index) {
        if (param_4 == 1) {
          this->field_0034[iVar4] = 1;
        }
        else {
          this->field_0034[iVar4] = 1;
          this->field_0034[iVar4 + 1] = 1;
          this->field_0034[local_8] = 1;
          this->field_0034[local_8 + 1] = 1;
        }

        iVar4 = st::fn_00403B25(this,index,(short)param_1,(short)param_2,(short)param_3,param_4,
                                   param_5,param_6);
        if (iVar4 == 0) {

          st::fn_006B0C70(reinterpret_cast<DArrayTy *>(this->field_0038),index);
          index = 0xffffffff;
        }
      }
    }
  }
  return index;
}

// 00630AC0 STManRuinC::sub_00630AC0
#line 4 "decomp/ST.exe/functions/00630AC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00630AC0(STManRuinC *this,uint param_1)

{
  int iVar1;
  short sVar2;
  STManRuinC_field_0038DArray *array;
  short *psVar3;
  int iVar4;
  int iVar5;

  array = this->field_0038;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if ((array->count <= param_1) ||
     (psVar3 = (short *)((int)&array->data->field_0000 + array->elementSize * param_1),
     psVar3 == nullptr)) {
    return 0;
  }
  sVar2 = psVar3[3];
  iVar5 = ((int)psVar3[2] * (int)g_worldGrid.sizeX + (int)psVar3[1]) * (int)g_worldGrid.sizeY +
          (int)*psVar3;
  iVar1 = g_worldGrid.sizeY + iVar5;
  iVar4 = st::fn_006B0C70(reinterpret_cast<DArrayTy *>(array),param_1);
  if (iVar4 != 0) {
    return 0;
  }
  if (sVar2 == 1) {
    this->field_0034[iVar5] = 0;
    return 1;
  }
  this->field_0034[iVar5] = 0;
  this->field_0034[iVar5 + 1] = 0;
  this->field_0034[iVar1] = 0;
  this->field_0034[iVar1 + 1] = 0;
  return 1;
}

// 00630BB0 STManRuinC::sub_00630BB0
#line 4 "decomp/ST.exe/functions/00630BB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=2; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00631010 -> 00630BB0 @ 006310B0; MOVSX at 00631092 establishes signed source width 2 |
   00631190 -> 00630BB0 @ 006311CA; STManRuinC::FUN_00631190 parameter param_5 | 00631450 ->
   00630BB0 @ 00631496; MOVSX at 00631479 establishes signed source width 2 | 006315D0 -> 00630BB0 @
   0063177E; MOVSX at 00631760 establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00631190 -> 00630BB0 @ 006311CA; STManRuinC::FUN_00631190 parameter param_7 */

void __thiscall
st::fn_00630BB0
          (STManRuinC *this,short param_1,short param_2,short param_3,undefined4 param_4,int param_5
          ,int param_6)

{

  memset(&this->field_0040, 0, 0x21); /* compiler bulk-zero initialization */
  this->field_0040 = param_4;
  this->field_0060 = 0;
  this->field_0061 = 0xffffffff;
  this->field_0054 = (short)(param_1 * 0xc9 + 100);
  this->field_0058 = (short)(param_2 * 0xc9 + 100);
  this->field_005C = (short)(param_3 * 200 + 100);
  this->field_004C = param_5;
  this->field_0050 = param_6;
  return;
}

// 00630C50 STManRuinC::sub_00630C50
#line 4 "decomp/ST.exe/functions/00630C50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006308F0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=12; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[20];
   expected_stack=20; receiver_family_members=8

   [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

ushort * __thiscall
st::fn_00630C50
          (STManRuinC *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  STManRuinC *pSVar2;
  int iVar3;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  int local_14;
  STManRuinC *local_10;
  ushort *local_c;
  char **local_8;

  local_c = nullptr;
  if (param_2 == 1) {
    if (param_5 == 3) {
      local_8 = &PTR_s_ruin_s10_007d1850;
    }
    else {
      local_8 = &PTR_s_ruin_10_007d1818;
    }
  }
  else {
    local_8 = &PTR_s_ruin_s40_007d186c;
    if (param_5 != 3) {
      local_8 = &PTR_s_ruin_40_007d1834;
    }
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  puVar3 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,local_8[local_10->field_0040],0xffffffff,0,1,0,
                      nullptr);
  if (param_3 == 0) {
    if (param_2 == 1) {
      local_c = st::fn_006E9000
                          (g_sT3DSMAPContext_00807598,*STField<undefined4 *>(puVar3,0x21),0x5a,
                           0x45,(float)pSVar2->field_0054 * _DAT_007904f8 * _DAT_007904f0,
                           (float)pSVar2->field_0058 * _DAT_007904f8 * _DAT_007904f0,
                           (float)pSVar2->field_005C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                           ,0);
    }
    if (param_2 == 4) {
      local_14 = pSVar2->field_0054 + 100;
      local_c = st::fn_006E9000
                          (g_sT3DSMAPContext_00807598,*STField<undefined4 *>(puVar3,0x21),0x78,
                           0x56,(float)local_14 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(pSVar2->field_0058 + 100) * _DAT_007904f8 * _DAT_007904f0,
                           (float)pSVar2->field_005C * _DAT_007904f8 * _DAT_007904f0 + _DAT_0079d1a0
                           ,0);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  puVar1 = &pSVar2->field_0061;
  if (param_2 == 1) {
    uVar7 = STField<uint>(puVar3,0xd);
    uVar6 = STField<uint>(puVar3,9);
    uVar9 = 0x45;
    uVar8 = 0x5a;
  }
  else {
    uVar7 = STField<uint>(puVar3,0xd);
    uVar6 = STField<uint>(puVar3,9);
    uVar9 = 100;
    uVar8 = 0x78;
  }
  st::fn_006E8660(g_sT3DSMAPContext_00807598,reinterpret_cast<int *>(puVar1),1,0,uVar6,uVar7,uVar8,uVar9,0);
  st::fn_006E98E0
            (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar3,STField<int>(puVar3,0x21),1);
  st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,0);
  st::fn_006EA3E0(g_sT3DSMAPContext_00807598,*puVar1,-1);
  st::fn_006E9210(g_sT3DSMAPContext_00807598,*puVar1);
  if (param_2 == 1) {
    iVar4 = pSVar2->field_0058;
    iVar5 = pSVar2->field_0054;
  }
  else {
    iVar4 = pSVar2->field_0058 + 100;
    iVar5 = pSVar2->field_0054 + 100;
    local_14 = iVar5;
  }
  st::fn_006EA960
            (g_sT3DSMAPContext_00807598,*puVar1,(float)iVar5 * _DAT_007904f8 * _DAT_007904f0,
             (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
             (float)pSVar2->field_005C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  if (param_4 != 0) {
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar1,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return puVar3;
}

// 00631010 STManRuinC::sub_00631010
#line 4 "decomp/ST.exe/functions/00631010/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00631010(STManRuinC *this)

{
  STManRuinC_field_0038DArray *pSVar1;
  int *piVar2;
  short *psVar3;
  STManRuinC_field_0038Element *element_0038;
  ushort *puVar4;
  int iVar5;
  short *psVar6;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  uint local_18;
  int local_c;
  uint local_8;

  pSVar1 = this->field_0038;
  if (pSVar1 != nullptr) {
    local_8 = pSVar1->count - 1;
    if (-1 < (int)local_8) {
      if (local_8 < pSVar1->count) {
        element_0038 = DArrayAt<STManRuinC_field_0038Element>(pSVar1, local_8);
      }
      else {
        element_0038 = nullptr;
      }
      if (element_0038->field_000C + 0x2eeU < g_playSystem_00802A38->field_00E4) {
        piVar2 = st::pointer_boundary_cast<int *>(element_0038->field_0010);
        psVar6 = &local_20;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)psVar6 = *(undefined4 *)element_0038;
          psVar3 = psVar3 + 2;
          psVar6 = psVar6 + 2;
        }
        st::fn_006E91D0(g_sT3DSMAPContext_00807598,piVar2);
        /* ST_CALLSITE[00631084]: CALL 0x0040461a; direct=0040461A STManRuinC::sub_00630AC0 */
        iVar5 = st::fn_0040461A(this,local_8);
        if (iVar5 != 0) {
          /* ST_CALLSITE[006310B0]: CALL 0x00401d57; direct=00401D57 STManRuinC::sub_00630BB0 */
          st::fn_00401D57(this,local_20,local_1e,local_1c,local_18,(int)local_1a,local_c);
          this->field_0044 = 1;

          iVar5 = st::fn_004050A6();
          this->field_0048 = iVar5;
          if (iVar5 < 1) {
            this->field_0044 = 1;
          }
          else {
            /* ST_CALLSITE[006310E7]: CALL 0x00405c9f; direct=00405C9F STManRuinC::sub_00630C50 */
            puVar4 = st::fn_00405C9F(this,this->field_0040,this->field_004C,1,1,this->field_0050);
            if (puVar4 != nullptr) {
              this->field_0044 = 2;
            }
          }
          /* ST_CALLSITE[00631106]: CALL 0x00405eca; direct=00405ECA STManRuinC::sub_00631880 */
          iVar5 = st::fn_00405ECA(this,&this->field_0040,this->field_0061);
          if (((iVar5 == 0) && (this->field_0048 != 0)) && (this->field_0061 != 0)) {
            st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this->field_0061);
          }
          this->field_0061 = 0xffffffff;
        }
      }
    }
  }
  return;
}

// 00631190 STManRuinC::FUN_00631190
#line 4 "decomp/ST.exe/functions/00631190/decomp.c"
undefined4 __thiscall
st::fn_00631190
          (STManRuinC *this,uint param_1,short param_2,short param_3,short param_4,int param_5,
          undefined4 param_6,int param_7)

{
  STManRuinC_field_0038DArray *pSVar1;
  ushort *puVar2;
  STManRuinC_field_0038Element *element_0038;

  pSVar1 = this->field_0038;
  if (param_1 < pSVar1->count) {
    element_0038 = DArrayAt<STManRuinC_field_0038Element>(pSVar1, param_1);
  }
  else {
    element_0038 = nullptr;
  }
  /* ST_CALLSITE[006311CA]: CALL 0x00401d57; direct=00401D57 STManRuinC::sub_00630BB0 */
  st::fn_00401D57(this,param_2,param_3,param_4,param_6,param_5,param_7);
  /* ST_CALLSITE[006311DE]: CALL 0x00405c9f; direct=00405C9F STManRuinC::sub_00630C50 */
  puVar2 = st::fn_00405C9F(this,param_6,param_5,0,1,param_7);
  element_0038->field_0010 = st::machine_word_boundary_cast<undefined4>(puVar2);
  if (puVar2 != nullptr) {
    return 1;
  }
  return 0;
}

// 00631220 STManRuinC::sub_00631220
#line 4 "decomp/ST.exe/functions/00631220/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00631220(STManRuinC *this,int *param_1)

{
  STManRuinC_field_0038DArray *pSVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte *puVar6;
  byte *pbVar7;
  byte *puVar8;
  undefined4 *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;

  pSVar1 = this->field_0038;
  local_c = nullptr;
  local_8 = 0;
  local_10 = 0x55;
  if (pSVar1 != nullptr) {
    iVar2 = pSVar1->count * pSVar1->elementSize;
    local_8 = iVar2 + 0x20;
    local_10 = iVar2 + 0x75;
  }
  if (this->field_0034 != nullptr) {
    local_10 = local_10 + this->field_0030;
  }
  uVar4 = local_10;
  puVar3 = static_cast<uint *>(st::fn_006AAC70(local_10));
  this->field_0065 = this->field_0071;
  if (puVar3 == nullptr) {
    *param_1 = uVar4;
    return;
  }
  this->field_0028 = 2;
  if (this == nullptr) {
    puVar6 = nullptr;
  }
  else {
    puVar6 = reinterpret_cast<byte *>((&this->field_001C));
  }
  puVar8 = reinterpret_cast<byte *>((puVar3));
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = reinterpret_cast<byte *>((puVar6 + 1));
    puVar8 = reinterpret_cast<byte *>((puVar8 + 1));
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  this->field_0061 = 0xffffffff;
  if (this->field_0038 != nullptr) {
    local_14 = (undefined4 *)st::fn_006B0020(&this->field_0038->flags,reinterpret_cast<int *>(&local_8));
    STField<uint>(puVar3,0x55) = local_8;
    local_c = (byte *)((int)puVar3 + 0x59);
    puVar6 = reinterpret_cast<byte *>((local_14));
    puVar8 = reinterpret_cast<byte *>(local_c);
    memmove(puVar8, puVar6, local_8); /* compiler REP MOVS byte copy */
    if (local_14 != nullptr) {
      st::fn_006AB060(&local_14);
    }
  }
  if (this->field_0034 != nullptr) {
    if (local_8 == 0) {
      local_c = (byte *)((int)puVar3 + 0x55);
    }
    else {
      local_c = (byte *)((int)local_c + local_8);
    }
    uVar4 = this->field_0030;
    pbVar7 = this->field_0034;
    memmove(local_c, pbVar7, uVar4); /* compiler REP MOVS byte copy */
  }
  *param_1 = local_10;
  return;
}

// 00631390 STManRuinC::sub_00631390
#line 4 "decomp/ST.exe/functions/00631390/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall st::fn_00631390(STManRuinC *this,undefined4 *param_1)

{
  DArrayTy *pSVar1;
  byte *pbVar1;
  uint uVar4;
  byte *puVar5;
  byte *pbVar6;
  byte *puVar7;

  if (this == nullptr) {
    puVar7 = nullptr;
  }
  else {
    puVar7 = reinterpret_cast<byte *>((&this->field_001C));
  }
  puVar5 = reinterpret_cast<byte *>((param_1));
  memmove(puVar7, puVar5, 0x55); /* compiler REP MOVS byte copy */
  pbVar6 = (byte *)((int)param_1 + 0x55);
  this->field_003C = nullptr;
  this->field_0061 = 0xffffffff;
  if (this->field_0038 != nullptr) {
    /* ST_CALLSITE[006313D0]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManRuinC_field_0038DArray; source view only; no Ghidra override */
    pSVar1 = st::fn_006B0060(nullptr,(uint *)((int)param_1 + 0x59));
    this->field_0038 = reinterpret_cast<STManRuinC_field_0038DArray *>(pSVar1);
    pbVar6 = (byte *)((int)param_1 + 0x59 + *(int *)pbVar6);
  }
  if (this->field_0034 != nullptr) {

    pbVar1 = (byte *)st::fn_006AAC70(this->field_0030);
    this->field_0034 = pbVar1;
  }
  if (this->field_0034 != nullptr) {
    uVar4 = this->field_0030;
    pbVar1 = this->field_0034;
    memmove(pbVar1, pbVar6, uVar4); /* compiler REP MOVS byte copy */
  }
  return this->field_0030;
}

// 00631450 STManRuinC::sub_00631450
#line 4 "decomp/ST.exe/functions/00631450/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00631450(STManRuinC *this)

{
  STManRuinC_field_0038DArray *pSVar1;
  ushort *puVar2;
  uint index;
  STManRuinC_field_0038Element *element_0038;

  if ((this->field_0038 != nullptr) &&
     (index = this->field_0038->count - 1, -1 < (int)index)) {
    do {
      pSVar1 = this->field_0038;
      if (index < pSVar1->count) {
        element_0038 = DArrayAt<STManRuinC_field_0038Element>(pSVar1, index);
      }
      else {
        element_0038 = nullptr;
      }
      /* ST_CALLSITE[00631496]: CALL 0x00401d57; direct=00401D57 STManRuinC::sub_00630BB0 */
      st::fn_00401D57(this,element_0038->field_0000,element_0038->field_0002,element_0038->field_0004,element_0038->field_0008,(int)element_0038->field_0006,
                   element_0038->field_0014);
      /* ST_CALLSITE[006314AD]: CALL 0x00405c9f; direct=00405C9F STManRuinC::sub_00630C50 */
      puVar2 = st::fn_00405C9F(this,this->field_0040,this->field_004C,0,1,element_0038->field_0014);
      element_0038->field_0010 = st::machine_word_boundary_cast<undefined4>(puVar2);
      if (puVar2 == nullptr) {
        st::fn_006B0C70(reinterpret_cast<DArrayTy *>(this->field_0038),index);
      }
      index = index - 1;
    } while (-1 < (int)index);
    return 0;
  }
  return 0;
}

// 00631510 STManRuinC::sub_00631510
#line 4 "decomp/ST.exe/functions/00631510/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 00631510 returns return of STManRuinC::sub_006308F0 @ 0063154D */

uint __thiscall
st::fn_00631510
          (STManRuinC *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  uint uVar1;

  uVar1 = this->field_0071 * 0x41c64e6d + 0x3039;
  this->field_0071 = uVar1;
  /* ST_CALLSITE[00631546]: CALL 0x00403a26; direct=00403A26 STManRuinC::sub_006308F0 */
  uVar1 = st::fn_00403A26(this,param_3,param_4,param_5,param_2,(uVar1 >> 0x10) % 3,param_6);
  return uVar1;
}

// 00631560 STManRuinC::sub_00631560
#line 4 "decomp/ST.exe/functions/00631560/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00631560(STManRuinC *this)

{
  if (this->field_0034 != nullptr) {
    st::fn_006AB060(&this->field_0034);
  }
  if (this->field_0038 != nullptr) {
    st::fn_006AE110(reinterpret_cast<DArrayTy *>(this->field_0038));
    this->field_0038 = nullptr;
  }
  if (-1 < (int)this->field_0061) {
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this->field_0061);
  }
  if (this->field_003C != nullptr) {
    st::fn_006AE110(reinterpret_cast<DArrayTy *>(this->field_003C));
    this->field_003C = nullptr;
  }
  return;
}

// 00631880 STManRuinC::sub_00631880
#line 4 "decomp/ST.exe/functions/00631880/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00631010 @ 00631106 -> read as EAX on
   every CFG path | 006315D0 @ 006317BB -> read as EAX on every CFG path */

int __thiscall st::fn_00631880(STManRuinC *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  DArrayTy *pSVar2;
  byte *puVar2;
  uint local_2c [8];
  uint local_b;
  iVar1 = -1;
  if (param_1 != nullptr) {
    puVar2 = reinterpret_cast<byte *>((local_2c));
    memmove(puVar2, param_1, 0x21); /* compiler REP MOVS byte copy */
    local_b = param_2;
    if (this->field_003C == nullptr) {
      /* ST_CALLSITE[006318B6]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManRuinC_field_003CDArray; source view only; no Ghidra override */
      pSVar2 = st::fn_006AE290(nullptr,10,0x25,10);
      this->field_003C = reinterpret_cast<STManRuinC_field_003CDArray *>(pSVar2);
    }
    if (this->field_003C == nullptr) {
      iVar1 = -1;
    }
    else {

      iVar1 = st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this->field_003C),local_2c);
      if (-1 < iVar1) {
        return iVar1 + 1;
      }
    }
  }
  return iVar1;
}
