#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STFieldC.cpp

// 00609CD0 STFieldC::sub_00609CD0
#line 4 "decomp/ST.exe/functions/00609CD0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFieldC.
   Evidence: this_call_owners=[STFieldC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00609CD0(STFieldC *this)

{
  dword dVar1;
  STFieldC_field_0234DArray *pSVar2;
  uint *puVar3;
  uint uVar4;

  if (this->field_0234 != nullptr) {
    dVar1 = this->field_0234->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0234;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((uVar4 < pSVar2->count) &&
            (puVar3 = (uint *)((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar4),
            puVar3 != nullptr)) && (st::fn_004021DF(this,uVar4), this->field_020D == 6)) {
          st::fn_006EAB60(g_sT3DSMAPContext_00807598,puVar3[0xf]);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
  }
  return;
}

// 0060C1A0 STFieldC::FUN_0060c1a0
#line 4 "decomp/ST.exe/functions/0060C1A0/decomp.c"
int __thiscall st::fn_0060C1A0(STFieldC *this,undefined4 *param_1)

{
  int iVar1;
  STFieldC_field_0234DArray *pSVar2;
  STFieldC_field_0234Element *element_0234;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  byte *puVar8;
  bool bVar9;

  iVar1 = 0;
  if (param_1 != nullptr) {
    if (this == nullptr) {
      puVar8 = nullptr;
    }
    else {
      puVar8 = (byte *)&this->field_0x1d5;
    }
    puVar7 = (byte *)(param_1);
    memmove(puVar8, puVar7, 0x83); /* compiler REP MOVS byte copy */
    iVar1 = 0x83;
    if (this->field_0234 == nullptr) {
      piVar4 = (int *)((int)param_1 + 0x83);
    }
    else {
      pSVar2 = (STFieldC_field_0234DArray *)st::fn_006B0060(nullptr,(uint *)((int)param_1 + 0x87));
      this->field_0234 = pSVar2;
      if ((this->field_0225 != '\0') || (pSVar2 != nullptr)) {
        uVar6 = 0;
        if (0 < (int)pSVar2->count) {
          bVar9 = pSVar2->count != 0;
          do {
            if (bVar9) {
              element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar2, uVar6);
            }
            else {
              element_0234 = nullptr;
            }
            element_0234->field_003C = 0xffffffff;
            pSVar2 = this->field_0234;
            uVar6 = uVar6 + 1;
            bVar9 = uVar6 < pSVar2->count;
          } while ((int)uVar6 < (int)pSVar2->count);
        }
        if (this->field_0225 != '\0') {
          st::fn_004010F5(this);
        }
      }
      iVar1 = 0x10a;
      piVar4 = (int *)((int)param_1 + STField<int>(param_1,0x83) + 0x8b);
    }
    if ((this->field_023C != 0) && (this->field_0244 != nullptr)) {
      iVar5 = st::fn_0040234C(this,piVar4);
      iVar1 = iVar1 + iVar5;
    }
  }
  return iVar1;
}

// 0060D660 STFieldC::sub_0060D660
#line 4 "decomp/ST.exe/functions/0060D660/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFieldC.
   Evidence: this_call_owners=[STFieldC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0060D660(STFieldC *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint size;
  int *piVar7;
  int *piVar8;
  int local_14;
  int local_10;
  int local_8;
  int *piVar6;

  iVar6 = this->field_023C;
  size = iVar6 * 0x44;
  pvVar1 = st::fn_006AAC70(size);
  this->field_0244 = pvVar1;
  if (pvVar1 == nullptr) {
    return 0;
  }
  iVar2 = st::fn_00403413();
  piVar6 = param_1;
  piVar7 = st::pointer_boundary_cast<int *>(this->field_0244);
  for (uVar4 = size >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  local_8 = 0;
  local_10 = 0;
  piVar7 = param_1 + iVar6 * 0x11;
  if (0 < (int)this->field_023C) {
    local_14 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = piVar7;
    do {
      pvVar1 = this->field_0244;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)((int)pvVar1 + local_14 + 0x40);
      if (((iVar6 != 0) || (*(int *)((int)pvVar1 + local_14 + 8) != 0)) && (*piVar7 != 0)) {
        piVar7 = piVar7 + 1;
        if (iVar6 != 0) {
          uVar3 = st::fn_00403B9D((undefined4 *)((int)pvVar1 + local_14 + 0x40),st::pointer_boundary_cast<undefined4 *>(piVar7));
          if (uVar3 != 0) {
            local_8 = local_8 + iVar2;
          }
          piVar7 = (int *)((int)piVar7 + iVar2);
        }
        if (*(int *)(local_14 + 8 + (int)this->field_0244) != 0) {
          pvVar1 = st::fn_006AAC70(*(int *)((int)this->field_0244 + local_14 + 4) << 2);
          *(void **)(local_14 + 8 + (int)this->field_0244) = pvVar1;
          piVar8 = *(int **)((int)this->field_0244 + local_14 + 8);
          for (uVar4 = *(uint *)(local_14 + 4 + (int)this->field_0244) & 0x3fffffff; uVar4 != 0;
              uVar4 = uVar4 - 1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar8 = (char)*piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          }
        }
        piVar7 = (int *)((int)param_1 + *param_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = piVar7;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x44;
    } while (local_10 < (int)this->field_023C);
  }
  return size + local_8;
}

