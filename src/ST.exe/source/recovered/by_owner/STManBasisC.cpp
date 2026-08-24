#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STManBasisC.cpp

// 005F1350 STManBasisC::STManBasisC
#line 4 "decomp/ST.exe/functions/005F1350/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C580 (store 005F1363)
   Evidence: final_vptr=0079C580; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F1350 returns STManBasisC::STManBasisC this @ 005F136F */

STManBasisC * __thiscall st::fn_005F1350(STManBasisC *this)

{
  int iVar1;
  ushort **ppuVar2;

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079C580;
  ppuVar2 = &this->field_0020;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = nullptr;
    ppuVar2 = ppuVar2 + 1;
  }
  return this;
}

// 005F14B0 STManBasisC::sub_005F14B0
#line 4 "decomp/ST.exe/functions/005F14B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_005F14B0
          (STManBasisC *this,short param_1,short param_2,short param_3,byte param_4,short param_5)

{
  STManBasisC_field_0038DArray *pSVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short local_20;
  short local_1e;
  short local_1c;
  byte local_1a;
  short local_19;
  uint local_17;
  undefined4 *local_13;
  int local_f;

  if (this->field_0038 == nullptr) {
    pSVar1 = (STManBasisC_field_0038DArray *)
             st::fn_006AE290(nullptr,10,0x19,10);
    this->field_0038 = pSVar1;
    if (pSVar1 == nullptr) {
      return -1;
    }
  }
  psVar4 = &local_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    psVar4[0] = 0;
    psVar4[1] = 0;
    psVar4 = psVar4 + 2;
  }
  *(undefined1 *)psVar4 = 0;
  local_1c = param_3;
  local_1e = param_2;
  local_20 = param_1;
  local_19 = param_5;
  local_1a = param_4;
  local_f = DAT_00811788;
  local_17 = g_playSystem_00802A38->field_00E4;
  local_13 = st::fn_0040335F((uint)param_4,(int)param_5,(int)(short)(param_1 * 0xc9 + 100),
                                (int)(short)(param_2 * 0xc9 + 100),(int)(short)(param_3 * 200 + 100)
                               );
  if (local_13 == nullptr) {
    iVar3 = -1;
  }
  else {
    iVar2 = st::fn_006AE1C0((DArrayTy *)this->field_0038,&local_20);
    iVar3 = iVar2 + 1;
    if (-1 < iVar3) {
      DAT_00811788 = DAT_00811788 + 1;
      return iVar3;
    }
  }
  return iVar3;
}

// 005F19A0 STManBasisC::sub_005F19A0
#line 4 "decomp/ST.exe/functions/005F19A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F19A0(STManBasisC *this)

{
  DArrayTy *pDVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar7;
  short *psVar6;
  int iVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  STManBasisC *local_14;
  int local_10;
  uint local_c;
  short *local_8;

  if (this->field_003C == nullptr) {
    return;
  }
  local_c = this->field_003C->count;
  local_14 = this;
  pVVar4 = g_visibleClass_00802A88;
joined_r0x005f19be:
  do {
    pVVar2 = pVVar4;
    local_c = local_c - 1;
    if ((int)local_c < 0) {
      return;
    }
    pDVar1 = local_14->field_003C;
    if (local_c < pDVar1->count) {
      psVar6 = DArrayAt<short>(pDVar1, local_c);
    }
    else {
      psVar6 = nullptr;
    }
    iVar8 = (int)psVar6[2];
    local_18 = (int)psVar6[1];
    local_1c = (int)*psVar6;
    pVVar4 = nullptr;
  } while (pVVar2 == nullptr);
  local_10 = iVar8;
  local_8 = psVar6;
  if ((char)psVar6[3] != '\x01') goto LAB_005f1c99;
  if (((((DAT_0080874d != -1) && (pVVar2->field_00F8 != 0)) &&
       /* ST_CALLSITE[005F1A43]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
       (st::fn_00403F53
                  (pVVar2,pVVar2->field_010C,local_1c,local_18,&local_20,&local_24),
       pVVar4 = g_visibleClass_00802A88, -1 < iVar8)) &&
      (((iVar8 < 5 && (-1 < local_20)) &&
       ((local_20 < (int)pVVar2->field_0030 &&
        ((iVar8 = g_centeredOffsets5[iVar8] + local_24, -1 < iVar8 && (iVar8 < pVVar2->field_0034)))
        ))))) &&
     ((pVVar2->field_004C != nullptr &&
      (((pVVar2->field_004C[local_20 + iVar8 * pVVar2->field_0030] == 0 && (DAT_0080874d != -1)) &&
       (g_visibleClass_00802A88->field_00F8 != 0)))))) {
    local_38 = local_1c + 1;
    /* ST_CALLSITE[005F1AEB]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_38,local_18,
               &local_28,&local_2c);
    pVVar2 = g_visibleClass_00802A88;
    if ((((-1 < local_28) && (local_28 < (int)pVVar4->field_0030)) &&
        (((iVar8 = g_centeredOffsets5[local_10] + local_2c, -1 < iVar8 &&
          ((iVar8 < pVVar4->field_0034 && (pVVar4->field_004C != nullptr)))) &&
         (pVVar4->field_004C[local_28 + iVar8 * pVVar4->field_0030] == 0)))) &&
       ((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)))) {
      iVar8 = local_18 + 1;
      /* ST_CALLSITE[005F1B82]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
      st::fn_00403F53
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_1c,iVar8,
                 &local_30,&local_34);
      pVVar3 = g_visibleClass_00802A88;
      if (((local_30 < 0) ||
          (((((int)pVVar2->field_0030 <= local_30 ||
             (iVar5 = g_centeredOffsets5[local_10] + local_34, psVar6 = local_8, iVar5 < 0)) ||
            (pVVar2->field_0034 <= iVar5)) ||
           ((pVVar2->field_004C == nullptr ||
            (pVVar2->field_004C[local_30 + iVar5 * pVVar2->field_0030] != 0)))))) ||
         ((DAT_0080874d == -1 ||
          ((((g_visibleClass_00802A88->field_00F8 == 0 ||
             /* ST_CALLSITE[005F1C07]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
             (st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_38,iVar8,
                         &local_3c,&local_40), psVar6 = local_8, local_3c < 0)) ||
            (((int)pVVar3->field_0030 <= local_3c ||
             (((iVar8 = g_centeredOffsets5[local_10] + local_40, iVar8 < 0 ||
               (pVVar3->field_0034 <= iVar8)) || (pVVar3->field_004C == nullptr)))))) ||
           (pVVar4 = g_visibleClass_00802A88,
           pVVar3->field_004C[local_3c + iVar8 * pVVar3->field_0030] != 0)))))) goto LAB_005f1c4c;
      goto joined_r0x005f19be;
    }
  }
LAB_005f1c4c:
  /* ST_CALLSITE[005F1C66]: CALL 0x00401465; direct=00401465 STManBasisC::sub_005F14B0 */
  iVar7 = st::fn_00401465(local_14,*psVar6,psVar6[1],psVar6[2],((byte *)psVar6)[3],
                       STField<short>(psVar6,7));
  pVVar4 = g_visibleClass_00802A88;
  if (-1 < iVar7) {
    st::fn_006B0C70(local_14->field_003C,local_c);
    pVVar4 = g_visibleClass_00802A88;
  }
  goto joined_r0x005f19be;
LAB_005f1c99:
  /* ST_CALLSITE[005F1C9C]: CALL 0x00404e5d; direct=00404E5D VisibleClassTy::sub_005F1D80 */
  iVar8 = st::fn_00404E5D(pVVar2,local_1c,local_18,iVar8);
  pVVar4 = g_visibleClass_00802A88;
  if (iVar8 == 0) goto joined_r0x005f19be;
  goto LAB_005f1c4c;
}

// 005F1FA0 STManBasisC::sub_005F1FA0
#line 4 "decomp/ST.exe/functions/005F1FA0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005F1FA0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F1236

   [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_005F1FA0(STManBasisC *this,int *param_1)

{
  uint size;
  uint uVar1;
  byte *pbVar2;
  uint uVar4;
  uint *puVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *local_14;
  byte *local_10;
  uint local_c;
  uint local_8;

  local_10 = nullptr;
  local_14 = nullptr;
  local_8 = 0;
  local_c = 0;
  if (this->field_0038 != nullptr) {
    local_10 = st::pointer_boundary_cast<byte *>(st::fn_006B0020(&this->field_0038->flags,(int *)&local_8));
    if (local_8 == 0) {
      st::fn_006AE110((DArrayTy *)this->field_0038);
      this->field_0038 = nullptr;
    }
  }
  if (this->field_003C != nullptr) {
    local_14 = static_cast<uint *>(st::fn_006B0020(&this->field_003C->flags,(int *)&local_c));
    if (local_c == 0) {
      st::fn_006AE110(this->field_003C);
      this->field_003C = nullptr;
    }
  }
  size = local_c + 0x30 + local_8;
  pbVar2 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(size));
  uVar1 = DAT_00811788;
  this->field_002C = 2;
  this->field_0034 = uVar1;
  ppuVar6 = &this->field_0020;
  pbVar7 = pbVar2;
  memmove(pbVar7, ppuVar6, 0x28); /* compiler REP MOVS byte copy */
  puVar5 = (uint *)(pbVar2 + 0x28);
  if (local_8 != 0) {
    *puVar5 = local_8;
    pbVar7 = local_10;
    pbVar9 = pbVar2 + 0x2c;
    memmove(pbVar9, pbVar7, local_8); /* compiler REP MOVS byte copy */
    uVar4 = 0;
    st::fn_006AB060(&local_10);
    puVar5 = (uint *)(pbVar2 + 0x2c + local_8);
  }
  if (local_c != 0) {
    *puVar5 = local_c;
    puVar8 = local_14;
    for (uVar4 = local_c >> 2; puVar5 = puVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = local_c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar5 = (byte)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    st::fn_006AB060(&local_14);
    *param_1 = size;
    return pbVar2;
  }
  *param_1 = size;
  return pbVar2;
}

// 005F2110 STManBasisC::sub_005F2110
#line 4 "decomp/ST.exe/functions/005F2110/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_005F2110(STManBasisC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  STManBasisC_field_0038DArray *pSVar2;
  DArrayTy *pDVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  ushort **ppuVar8;

  puVar6 = param_1;
  ppuVar8 = &this->field_0020;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar8 = (ushort *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar8 = ppuVar8 + 1;
  }
  DAT_00811788 = this->field_0034;
  piVar7 = reinterpret_cast<int *>(param_1 + 10);
  if (this->field_0038 != nullptr) {
    pSVar2 = (STManBasisC_field_0038DArray *)st::fn_006B0060(nullptr,param_1 + 0xb);
    this->field_0038 = pSVar2;
    piVar7 = (int *)((int)(param_1 + 0xb) + *piVar7);
  }
  if (this->field_003C != nullptr) {
    pDVar2 = st::fn_006B0060(nullptr,(uint *)(piVar7 + 1));
    this->field_003C = pDVar2;
    uVar5 = 0;
    if (0 < (int)pDVar2->count) {
      do {
        pDVar1 = this->field_003C;
        if ((uVar5 < pDVar1->count) &&
           (pvVar3 = DArrayAt<void>(pDVar1, uVar5),
           pvVar3 != nullptr)) {
          STField<undefined4>(pvVar3,0x18) = 0xffffffff;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)this->field_003C->count);
    }
  }
  return 0x28;
}

// 005F21D0 STManBasisC::sub_005F21D0
#line 4 "decomp/ST.exe/functions/005F21D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_005F21D0(STManBasisC *this)

{
  dword dVar1;
  STManBasisC_field_0038DArray *pSVar2;
  DArrayTy *pDVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;

  if (this->field_0038 != nullptr) {
    dVar1 = this->field_0038->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0038;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar6 < pSVar2->count) &&
           (psVar5 = (short *)((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar6),
           psVar5 != nullptr)) {
          puVar4 = st::fn_0040335F((uint)((byte *)psVar5)[3],(int)STField<short>(psVar5,7),
                                      (int)(short)(*psVar5 * 0xc9 + 100),
                                      (int)(short)(psVar5[1] * 0xc9 + 100),
                                      (int)(short)(psVar5[2] * 200 + 100));
          STField<undefined4 *>(psVar5,0xd) = puVar4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
  }
  if (this->field_003C != nullptr) {
    dVar1 = this->field_003C->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar3 = this->field_003C;
        if (((uVar6 < pDVar3->count) &&
            (psVar5 = DArrayAt<short>(pDVar3, uVar6),
            psVar5 != nullptr)) && (*(int *)(psVar5 + 0xc) != -1)) {
          st::fn_0040169F((uint)((byte *)psVar5)[3],(int)STField<short>(psVar5,7),0,
                             (int)(short)(*psVar5 * 0xc9 + 100),(int)(short)(psVar5[1] * 0xc9 + 100)
                             ,(int)(short)(psVar5[2] * 200 + 100),uVar6);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
    return dVar1;
  }
  return 0;
}

// 005F2330 STManBasisC::sub_005F2330
#line 4 "decomp/ST.exe/functions/005F2330/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F2330(STManBasisC *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  uint uVar4;

  uVar4 = 0;
  if (this->field_0038 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_0038);
    this->field_0038 = nullptr;
  }
  if (this->field_003C != nullptr) {
    dVar1 = this->field_003C->count;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_003C;
        if (uVar4 < pDVar2->count) {
          pvVar3 = DArrayAt<void>(pDVar2, uVar4);
        }
        else {
          pvVar3 = nullptr;
        }
        if (-1 < (int)STField<uint>(pvVar3,0x18)) {
          st::fn_006E8BA0
                    (g_sT3DSMAPContext_00807598,STField<uint>(pvVar3,0x18));
          STField<undefined4>(pvVar3,0x18) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
    st::fn_006AE110(this->field_003C);
    this->field_003C = nullptr;
  }
  return;
}

