
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManBasisC::sub_005F19A0(STManBasisC *this)

{
  DArrayTy *pDVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
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
  AnonShape_005F19A0_983A7F63 *local_14;
  int local_10;
  uint local_c;
  short *local_8;

  if (this->field_003C == (DArrayTy *)0x0) {
    return;
  }
  local_c = this->field_003C->count;
  local_14 = (AnonShape_005F19A0_983A7F63 *)this;
  pVVar4 = g_visibleClass_00802A88;
joined_r0x005f19be:
  do {
    pVVar2 = pVVar4;
    local_c = local_c - 1;
    if ((int)local_c < 0) {
      return;
    }
    pDVar1 = ((STManBasisC *)local_14)->field_003C;
    if (local_c < pDVar1->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, local_c) (runtime stride) */
      psVar6 = (short *)(pDVar1->elementSize * local_c + (int)pDVar1->data);
    }
    else {
      psVar6 = (short *)0x0;
    }
    iVar7 = (int)psVar6[2];
    local_18 = (int)psVar6[1];
    local_1c = (int)*psVar6;
    pVVar4 = (VisibleClassTy *)0x0;
  } while (pVVar2 == (VisibleClassTy *)0x0);
  local_10 = iVar7;
  local_8 = psVar6;
  if ((char)psVar6[3] != '\x01') goto LAB_005f1c99;
  if (((((DAT_0080874d != -1) && (pVVar2->field_00F8 != 0)) &&
       (thunk_FUN_00558c00(pVVar2,pVVar2->field_010C,local_1c,local_18,&local_20,&local_24),
       pVVar4 = g_visibleClass_00802A88, -1 < iVar7)) &&
      (((iVar7 < 5 && (-1 < local_20)) &&
       ((local_20 < pVVar2->field_0030 &&
        ((iVar7 = g_centeredOffsets5[iVar7] + local_24, -1 < iVar7 && (iVar7 < pVVar2->field_0034)))
        ))))) &&
     ((pVVar2->field_004C != (byte *)0x0 &&
      (((pVVar2->field_004C[local_20 + iVar7 * pVVar2->field_0030] == 0 && (DAT_0080874d != -1)) &&
       (g_visibleClass_00802A88->field_00F8 != 0)))))) {
    local_38 = local_1c + 1;
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_38,local_18
                       ,&local_28,&local_2c);
    pVVar2 = g_visibleClass_00802A88;
    if ((((-1 < local_28) && (local_28 < pVVar4->field_0030)) &&
        (((iVar7 = g_centeredOffsets5[local_10] + local_2c, -1 < iVar7 &&
          ((iVar7 < pVVar4->field_0034 && (pVVar4->field_004C != (byte *)0x0)))) &&
         (pVVar4->field_004C[local_28 + iVar7 * pVVar4->field_0030] == 0)))) &&
       ((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)))) {
      iVar7 = local_18 + 1;
      thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_1c,iVar7,
                         &local_30,&local_34);
      pVVar3 = g_visibleClass_00802A88;
      if (((local_30 < 0) ||
          ((((pVVar2->field_0030 <= local_30 ||
             (iVar5 = g_centeredOffsets5[local_10] + local_34, psVar6 = local_8, iVar5 < 0)) ||
            (pVVar2->field_0034 <= iVar5)) ||
           ((pVVar2->field_004C == (byte *)0x0 ||
            (pVVar2->field_004C[local_30 + iVar5 * pVVar2->field_0030] != 0)))))) ||
         ((DAT_0080874d == -1 ||
          ((((g_visibleClass_00802A88->field_00F8 == 0 ||
             (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                 local_38,iVar7,&local_3c,&local_40), psVar6 = local_8, local_3c < 0
             )) || ((pVVar3->field_0030 <= local_3c ||
                    (((iVar7 = g_centeredOffsets5[local_10] + local_40, iVar7 < 0 ||
                      (pVVar3->field_0034 <= iVar7)) || (pVVar3->field_004C == (byte *)0x0)))))) ||
           (pVVar4 = g_visibleClass_00802A88,
           pVVar3->field_004C[local_3c + iVar7 * pVVar3->field_0030] != 0)))))) goto LAB_005f1c4c;
      goto joined_r0x005f19be;
    }
  }
LAB_005f1c4c:
  iVar7 = thunk_FUN_005f14b0(local_14,*psVar6,psVar6[1],psVar6[2],*(byte *)(psVar6 + 3),
                             *(short *)((int)psVar6 + 7));
  pVVar4 = g_visibleClass_00802A88;
  if (-1 < iVar7) {
    FUN_006b0c70(local_14->field_003C,local_c);
    pVVar4 = g_visibleClass_00802A88;
  }
  goto joined_r0x005f19be;
LAB_005f1c99:
  iVar7 = thunk_FUN_005f1d80(pVVar2,local_1c,local_18,iVar7);
  pVVar4 = g_visibleClass_00802A88;
  if (iVar7 == 0) goto joined_r0x005f19be;
  goto LAB_005f1c4c;
}

