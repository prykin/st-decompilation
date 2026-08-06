#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STLightC.cpp

// 0061D620 STLightC::STLightC
#line 4 "decomp/ST.exe/functions/0061D620/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CED4 (store 0061D628)
   Evidence: final_vptr=0079CED4; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0061D620 returns STLightC::STLightC this @ 0061D631 */

STLightC * __thiscall st::fn_0061D620(STLightC *this)

{
  st::fn_006E60E0(this);
  this->vtable = &st_global_0079CED4;
  return this;
}

// 0061D650 STLightC::sub_0061D650
#line 4 "decomp/ST.exe/functions/0061D650/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0061D650(STLightC *this)

{
  if (this->field_0057 != nullptr) {
    st::fn_006AB060(&this->field_0057);
  }
  if (this->field_009B != nullptr) {
    st::fn_006AB060(&this->field_009B);
  }
  if (this->field_009F != nullptr) {
    st::fn_006AB060(&this->field_009F);
  }
  this->field_0093 = 0;
  this->field_0097 = 0;
  return;
}

// 0061D6D0 STLightC::sub_0061D6D0
#line 4 "decomp/ST.exe/functions/0061D6D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 0061D6D0 returns return of sub_006E60A0 @ 0061D6F6 */

int __thiscall st::fn_0061D6D0(STLightC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 0061D710 STLightC::sub_0061D710
#line 4 "decomp/ST.exe/functions/0061D710/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0061D710 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0061D499

   [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_0061D710(STLightC *this,int *param_1)

{
  uint size;
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *local_14;
  uint local_10;
  byte *local_c;
  int local_8;

  iVar4 = 0;
  this->field_00A8 = this->field_00AC;
  iVar8 = this->field_0093;
  iVar11 = 0x90;
  this->field_0028 = 2;
  if (iVar8 != 0) {
    iVar11 = iVar8 * 0x14;
    if (0 < iVar8) {
      piVar7 = this->field_009B;
      do {
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar4 = iVar4 + iVar1 * 0x14;
      } while (iVar8 != 0);
    }
    iVar11 = iVar11 + 0x94 + iVar4;
  }
  size = iVar11 + 0x20 + this->field_00A3->count * this->field_00A3->elementSize;
  pbVar2 = st::fn_006AAC70(size);
  if (this == nullptr) {
    puVar9 = nullptr;
  }
  else {
    puVar9 = (byte *)&this->field_0x1c;
  }
  pbVar12 = pbVar2;
  memmove(pbVar12, puVar9, 0x90); /* compiler REP MOVS byte copy */
  iVar4 = 0;
  uVar6 = this->field_0093;
  pbVar12 = this->field_009B;
  pbVar10 = pbVar2 + 0x90;
  for (uVar5 = uVar6 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar10 = pbVar10 + 4;
  }
  pbVar3 = pbVar2 + 0x90 + uVar6 * 4;
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pbVar10 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  }
  local_c = nullptr;
  if (0 < this->field_0093) {
    do {
      iVar4 = *(int *)((int)this->field_009B + (int)local_c * 4);
      pbVar12 = *(byte **)((int)this->field_009F + (int)local_c * 4);
      pbVar10 = pbVar3;
      for (uVar6 = iVar4 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar10 = pbVar10 + 4;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pbVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar10 = pbVar10 + 1;
      }
      pbVar3 = pbVar3 + iVar4 * 0x14;
      local_c = (byte *)((int)local_c + 1);
    } while ((int)local_c < this->field_0093);
  }
  uVar6 = this->field_0093;
  local_8 = uVar6 * 0x10;
  *(int *)pbVar3 = local_8;
  local_c = pbVar3 + 4 + local_8;
  pbVar12 = this->field_0057;
  pbVar10 = pbVar3 + 4;
  for (iVar4 = (uVar6 & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pbVar10 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  }
  local_14 = (byte *)st::fn_006B0020(&this->field_00A3->flags,(int *)&local_10);
  *(uint *)local_c = local_10 + 4;
  pbVar10 = local_14;
  pbVar12 = local_c;
  for (uVar6 = local_10 >> 2; pbVar12 = pbVar12 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *pbVar12 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  }
  st::fn_006AB060(&local_14);
  *param_1 = size;
  return pbVar2;
}

// 0061D8F0 STLightC::sub_0061D8F0
#line 4 "decomp/ST.exe/functions/0061D8F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0061D8F0(STLightC *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  STLightC_field_00A3DArray *pSVar3;
  int iVar4;
  byte *puVar5;
  int *piVar6;
  byte *puVar7;
  int local_10;
  int local_c;
  int *local_8;

  if (this == nullptr) {
    puVar7 = nullptr;
  }
  else {
    puVar7 = (byte *)&this->field_0x1c;
  }
  puVar5 = (byte *)(param_1);
  memmove(puVar7, puVar5, 0x90); /* compiler REP MOVS byte copy */
  iVar4 = 0;
  local_c = st::fn_004050D3(this,(ushort *)(param_1 + 0x24),&local_10,1);
  piVar1 = (int *)(local_c + (int)(param_1 + 0x24));
  piVar6 = piVar1 + 1;
  local_8 = piVar6;
  piVar2 = st::fn_006AAC70(this->field_0093 << 4);
  this->field_0057 = piVar2;
  for (iVar4 = (this->field_0093 & 0xfffffffU) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar2 = piVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar2 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar2 = (int *)((int)piVar2 + 1);
  }
  pSVar3 = (STLightC_field_00A3DArray *)
           st::fn_006B0060(nullptr,(uint *)((int)local_8 + *piVar1 + 4));
  this->field_00A3 = pSVar3;
  return local_c;
}

// 0061D9C0 STLightC::sub_0061D9C0
#line 4 "decomp/ST.exe/functions/0061D9C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061DB80 -> 0061D9C0 @ 0061DBE3

   [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0061D9C0(STLightC *this,ushort *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint local_c;
  int local_8;

  local_8 = 0;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0x10;
    this->field_0093 = *(int *)param_1;
    this->field_0097 = *(undefined4 *)(param_1 + 2);
    this->field_009B = *(void **)(param_1 + 4);
    this->field_009F = *(void **)(param_1 + 6);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 8;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  uVar6 = this->field_0093;
  puVar1 = st::fn_006AAC70(uVar6 * 4);
  this->field_009B = puVar1;
  puVar8 = param_1;
  for (uVar3 = uVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 2;
    puVar1 = puVar1 + 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = param_3 + uVar6 * 4;
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)puVar1 = (char)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = param_1 + uVar6 * 2;
  iVar4 = this->field_0093;
  if (0 < iVar4) {
    piVar5 = this->field_009B;
    do {
      iVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      local_c = local_c + 8 + iVar7 * 0x14;
      local_8 = local_8 + iVar7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_2 = local_8;
  pvVar2 = st::fn_006AAC70(local_c);
  this->field_009F = pvVar2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = (int *)((int)pvVar2 + this->field_0093 * 4);
  local_c = 0;
  if (0 < this->field_0093) {
    do {
      *(int **)((int)this->field_009F + local_c * 4) = param_2;
      iVar4 = *(int *)((int)this->field_009B + local_c * 4);
      puVar8 = param_1;
      puVar1 = *(undefined4 **)((int)this->field_009F + local_c * 4);
      for (uVar6 = iVar4 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar1 = *(undefined4 *)puVar8;
        puVar8 = puVar8 + 2;
        puVar1 = puVar1 + 1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + iVar4 * 0x14;
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)puVar1 = (char)*puVar8;
        puVar8 = (ushort *)((int)puVar8 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + iVar4 * 10;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + iVar4 * 5;
      local_c = local_c + 1;
    } while ((int)local_c < this->field_0093);
  }
  return param_3;
}

// 0061E4F0 STLightC::sub_0061E4F0
#line 4 "decomp/ST.exe/functions/0061E4F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0061E4F0(STLightC *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_8;

  iVar5 = 0;
  if (0 < this->field_0093) {
    do {
      local_8 = 1;
      if (1 < *(int *)((int)this->field_009B + iVar5 * 4)) {
        iVar6 = 0x14;
        do {
          uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
          this->field_00AC = uVar3;
          if (((uVar3 >> 0x10) % 5 == 0) &&
             ((iVar5 != 0 || ((iVar6 != 0 && (local_8 != *(int *)this->field_009B + -1)))))) {
            uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
            this->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)((int)this->field_009F + iVar5 * 4) + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (this->field_0047 + this->field_0047) + *pfVar4;
            uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
            this->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)((int)this->field_009F + iVar5 * 4) + 4 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (this->field_0047 + this->field_0047) + *pfVar4;
            uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
            this->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)((int)this->field_009F + iVar5 * 4) + 8 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (this->field_0047 + this->field_0047) + *pfVar4;
            iVar1 = *(int *)((int)this->field_009F + iVar5 * 4);
            iVar2 = *(int *)(iVar1 + 0x10 + iVar6);
            if (iVar2 != 0) {
              **(undefined4 **)((int)this->field_009F + iVar2 * 4) = *(undefined4 *)(iVar1 + iVar6);
              *(undefined4 *)(*(int *)((int)this->field_009F + iVar2 * 4) + 4) =
                   *(undefined4 *)(*(int *)((int)this->field_009F + iVar5 * 4) + 4 + iVar6);
              *(undefined4 *)(*(int *)((int)this->field_009F + iVar2 * 4) + 8) =
                   *(undefined4 *)(*(int *)((int)this->field_009F + iVar5 * 4) + 8 + iVar6);
            }
          }
          local_8 = local_8 + 1;
          iVar6 = iVar6 + 0x14;
        } while (local_8 < *(int *)((int)this->field_009B + iVar5 * 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this->field_0093);
  }
  return;
}

// 0061F290 STLightC::sub_0061F290
#line 4 "decomp/ST.exe/functions/0061F290/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_0061F290(STLightC *this,int param_1)

{
  dword dVar1;
  STLightC_field_00A3DArray *pSVar2;
  VisibleClassTy *this_00;
  int iVar3;
  int iVar4;
  int *piVar5;
  STLightC_field_00A3Element *element_00a3;
  longlong lVar6;
  int local_1c;
  int local_18;
  STLightC *local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;

  local_10 = 0;
  if (this->field_00A3 != nullptr) {
    dVar1 = this->field_00A3->count;
    if ((dVar1 != 0) && (local_c = 0, local_14 = this, 0 < (int)dVar1)) {
      do {
        this_00 = g_visibleClass_00802A88;
        pSVar2 = local_14->field_00A3;
        if (local_c < pSVar2->count) {
          element_00a3 = DArrayAt<STLightC_field_00A3Element>(pSVar2, local_c);
        }
        else {
          element_00a3 = nullptr;
        }
        if ((-1 < (int)element_00a3->spriteHandle) && (-1 < element_00a3->field_0000)) {
          if ((int)(g_playSystem_00802A38->field_00E4 - element_00a3->field_002A) <
              local_14->field_005F) {
            local_10 = 1;
            if ((param_1 != 0) && (g_visibleClass_00802A88 != nullptr)) {
              if ((float)element_00a3->field_000C < _DAT_0079034c) {
                lVar6 = st::fn_0072E288();
                iVar4 = (short)lVar6 + -1;
              }
              else {
                lVar6 = st::fn_0072E288();
                iVar4 = (int)(short)lVar6;
              }
              if ((float)element_00a3->field_0008 < _DAT_0079034c) {
                lVar6 = st::fn_0072E288();
                local_8 = (short)lVar6 + -1;
              }
              else {
                lVar6 = st::fn_0072E288();
                local_8 = (int)(short)lVar6;
              }
              if ((float)element_00a3->field_0004 < _DAT_0079034c) {
                lVar6 = st::fn_0072E288();
                iVar3 = (short)lVar6 + -1;
              }
              else {
                lVar6 = st::fn_0072E288();
                iVar3 = (int)(short)lVar6;
              }
              if ((((((DAT_0080874d == -1) || (this_00->field_00F8 == 0)) ||
                    (st::fn_00403F53
                               (this_00,this_00->field_010C,iVar3,local_8,&local_18,&local_1c),
                    iVar4 < 0)) || ((4 < iVar4 || (local_18 < 0)))) ||
                  (((int)this_00->field_0030 <= local_18 ||
                   ((iVar4 = g_centeredOffsets5[iVar4] + local_1c, iVar4 < 0 ||
                    (this_00->field_0034 <= iVar4)))))) ||
                 ((this_00->field_004C == nullptr ||
                  (this_00->field_004C[local_18 + iVar4 * this_00->field_0030] != 0)))) {
                if (element_00a3->state == 0) {
                  st::fn_006EAAA0
                            (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle,0);
                  element_00a3->state = 1;
                }
              }
              else if (element_00a3->state == 1) {
                st::fn_006EAB60
                          (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle);
                element_00a3->state = 0;
              }
            }
          }
          else {
            st::fn_006E8BA0
                      (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle);
            element_00a3->spriteHandle = 0xffffffff;
            *piVar5 = -1;
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
    return local_10;
  }
  return 0;
}

// 0061F530 STLightC::sub_0061F530
#line 4 "decomp/ST.exe/functions/0061F530/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0061F530(STLightC *this)

{
  STLightC_field_00A3DArray *pSVar1;
  STLightC_field_00A3Element *element_00a3;
  uint uVar3;
  bool bVar4;

  pSVar1 = this->field_00A3;
  if (pSVar1 != nullptr) {
    uVar3 = 0;
    if (0 < (int)pSVar1->count) {
      bVar4 = pSVar1->count != 0;
      do {
        if (bVar4) {
          element_00a3 = DArrayAt<STLightC_field_00A3Element>(pSVar1, uVar3);
        }
        else {
          element_00a3 = nullptr;
        }
        if (-1 < (int)element_00a3->spriteHandle) {
          st::fn_006E8BA0
                    (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle);
          element_00a3->spriteHandle = 0xffffffff;
        }
        pSVar1 = this->field_00A3;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < pSVar1->count;
      } while ((int)uVar3 < (int)pSVar1->count);
    }
    st::fn_006AE110((DArrayTy *)this->field_00A3);
    this->field_00A3 = nullptr;
  }
  return;
}

