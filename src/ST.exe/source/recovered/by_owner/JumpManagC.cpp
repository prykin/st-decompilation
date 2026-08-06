#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/JumpManagC.cpp

// 00617840 JumpManagC::JumpManagC
#line 4 "decomp/ST.exe/functions/00617840/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CEBC (store 00617853)
   Evidence: final_vptr=0079CEBC; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00617840 returns JumpManagC::JumpManagC this @ 00617861 */

JumpManagC * __thiscall st::fn_00617840(JumpManagC *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079CEBC;
  memset(&this->field_0x1c, 0, 0x52); /* compiler bulk-zero initialization */
  return this;
}

// 006179D0 JumpManagC::sub_006179D0
#line 4 "decomp/ST.exe/functions/006179D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006179D0(JumpManagC *this)

{
  void *pvVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  bool bVar4;

  pDVar2 = this->field_005E;
  if (pDVar2 != nullptr) {
    uVar3 = 0;
    if (0 < (int)pDVar2->count) {
      bVar4 = pDVar2->count != 0;
      do {
        if ((bVar4) &&
           (pvVar1 = DArrayAt<void>(pDVar2, uVar3),
           pvVar1 != nullptr)) {
          STField<undefined4>(pvVar1,0x18) = 0;
        }
        pDVar2 = this->field_005E;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < pDVar2->count;
      } while ((int)uVar3 < (int)pDVar2->count);
    }
  }
  return;
}

// 00617FB0 JumpManagC::sub_00617FB0
#line 4 "decomp/ST.exe/functions/00617FB0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00617FB0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006176B2

   [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_00617FB0(JumpManagC *this,int *param_1)

{
  uint size;
  DArrayTy *pDVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *local_c;
  uint local_8;

  pDVar1 = this->field_005E;
  if (pDVar1 == nullptr) {
    iVar6 = 0;
  }
  else {
    iVar6 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  pDVar1 = this->field_0062;
  if (pDVar1 == nullptr) {
    iVar4 = 0;
  }
  else {
    iVar4 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  pDVar1 = this->field_0066;
  if (pDVar1 == nullptr) {
    iVar2 = 0;
  }
  else {
    iVar2 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  size = iVar2 + iVar4 + 0x5e + iVar6;
  pbVar3 = st::fn_006AAC70(size);
  puVar8 = (undefined4 *)&this->field_0x1c;
  pbVar10 = pbVar3;
  memmove(pbVar10, puVar8, 0x50); /* compiler REP MOVS byte copy */
  pbVar10 = pbVar10 + 0x50;
  puVar8 = puVar8 + 0x14;
  puVar7 = (uint *)(pbVar3 + 0x52);
  *(undefined2 *)pbVar10 = *(undefined2 *)puVar8;
  pbVar3[0xc] = 2;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  if (this->field_005E != nullptr) {
    local_c = (uint *)st::fn_006B0020(&this->field_005E->flags,(int *)&local_8);
    *puVar7 = local_8;
    puVar7 = local_c;
    puVar9 = (uint *)(pbVar3 + 0x56);
    memmove(puVar9, puVar7, local_8); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    puVar7 = (uint *)((int)(pbVar3 + 0x56) + local_8);
    st::fn_006AB060(&local_c);
  }
  if (this->field_0062 != nullptr) {
    local_c = (uint *)st::fn_006B0020(&this->field_0062->flags,(int *)&local_8);
    *puVar7 = local_8;
    puVar9 = local_c;
    puVar11 = puVar7 + 1;
    memmove(puVar11, puVar9, local_8); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    puVar7 = (uint *)((int)(puVar7 + 1) + local_8);
    st::fn_006AB060(&local_c);
  }
  if (this->field_0066 != nullptr) {
    local_c = (uint *)st::fn_006B0020(&this->field_0066->flags,(int *)&local_8);
    *puVar7 = local_8;
    puVar9 = local_c;
    for (uVar5 = local_8 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
    }
    for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
      *(byte *)puVar7 = (byte)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    st::fn_006AB060(&local_c);
    *param_1 = size;
    return pbVar3;
  }
  *param_1 = size;
  return pbVar3;
}

// 00618170 JumpManagC::sub_00618170
#line 4 "decomp/ST.exe/functions/00618170/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_00618170(JumpManagC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  byte *puVar3;
  int *piVar4;
  byte *puVar5;
  int local_8;

  puVar3 = (byte *)(param_1);
  puVar5 = (byte *)&this->field_0x1c;
  memmove(puVar5, puVar3, 0x52); /* compiler REP MOVS byte copy */
  piVar4 = (int *)((int)param_1 + 0x52);
  local_8 = 0x52;
  if (this->field_005E != nullptr) {
    pDVar1 = st::fn_006B0060(nullptr,(uint *)((int)param_1 + 0x56));
    this->field_005E = pDVar1;
    local_8 = *piVar4;
    piVar4 = (int *)((int)param_1 + 0x56 + local_8);
    local_8 = local_8 + 0x52;
  }
  if (this->field_0062 != nullptr) {
    pDVar1 = st::fn_006B0060(nullptr,(uint *)(piVar4 + 1));
    this->field_0062 = pDVar1;
    iVar2 = *piVar4;
    piVar4 = (int *)((int)(piVar4 + 1) + iVar2);
    local_8 = local_8 + iVar2;
  }
  if (this->field_0066 != nullptr) {
    pDVar1 = st::fn_006B0060(nullptr,(uint *)(piVar4 + 1));
    this->field_0066 = pDVar1;
    return local_8 + *piVar4;
  }
  return local_8;
}

// 00618AD0 JumpManagC::sub_00618AD0
#line 4 "decomp/ST.exe/functions/00618AD0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00618AD0(JumpManagC *this)

{
  int iVar1;
  void *pvVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  bool bVar5;

  pDVar3 = this->field_005E;
  if (pDVar3 != nullptr) {
    uVar4 = 0;
    if (0 < (int)pDVar3->count) {
      bVar5 = pDVar3->count != 0;
      do {
        if (((bVar5) &&
            (pvVar2 = DArrayAt<void>(pDVar3, uVar4),
            pvVar2 != nullptr)) && (iVar1 = STField<int>(pvVar2,0x18), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x7d) = 0;
          *(undefined4 *)(iVar1 + 0x8b) = 0;
          *(undefined4 *)(iVar1 + 0x79) = 0;
        }
        pDVar3 = this->field_005E;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pDVar3->count;
      } while ((int)uVar4 < (int)pDVar3->count);
    }
  }
  return;
}

