
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f5440(AnonShape_005F5440_D27C3BDE *param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  if (param_1->field_0169 != (DArrayTy *)0x0) {
    dVar1 = param_1->field_0169->count;
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = param_1->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, local_c) (runtime stride) */
        if (((local_c < pDVar2->count) &&
            (pcVar7 = (char *)(pDVar2->elementSize * local_c + (int)pDVar2->data),
            pcVar7 != (char *)0x0)) && (*pcVar7 == '\x01')) {
          if (*(int *)(pcVar7 + 0x1f) == -1) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            thunk_FUN_005f4a30((int)pcVar7,CONCAT31((int3)((uint)pDVar2 >> 8),pcVar7[1]),0);
          }
          pVVar4 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
            iVar6 = *(int *)(pcVar7 + 10);
            sVar3 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              local_8 = (short)(((short)(iVar6 / 200) + sVar3) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              local_8 = (int)(short)(((short)(iVar6 / 200) + sVar3) -
                                    (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
            }
            iVar6 = *(int *)(pcVar7 + 6);
            sVar3 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            iVar5 = *(int *)(pcVar7 + 2);
            sVar3 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                ((VisibleClassTy::sub_00558C00
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6
                             ,&local_10,&local_14), local_8 < 0 || ((4 < local_8 || (local_10 < 0)))
                 ))) || ((pVVar4->field_0030 <= local_10 ||
                         ((((iVar6 = g_centeredOffsets5[local_8] + local_14, iVar6 < 0 ||
                            (pVVar4->field_0034 <= iVar6)) || (pVVar4->field_004C == (byte *)0x0))
                          || (pVVar4->field_004C[local_10 + iVar6 * pVVar4->field_0030] != 0)))))) {
              if (pcVar7[0x1e] == '\0') {
                FUN_006eaaa0(PTR_00807598,*(uint *)(pcVar7 + 0x1f),0);
                pcVar7[0x1e] = '\x01';
              }
            }
            else if (pcVar7[0x1e] != '\0') {
              FUN_006eab60(PTR_00807598,*(uint *)(pcVar7 + 0x1f));
              pcVar7[0x1e] = '\0';
            }
          }
          FUN_006ea270(PTR_00807598,*(uint *)(pcVar7 + 0x1f),0,*(uint *)(pcVar7 + 0xe));
          FUN_006ea960(PTR_00807598,*(uint *)(pcVar7 + 0x1f),
                       (float)*(int *)(pcVar7 + 2) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pcVar7 + 6) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pcVar7 + 10) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc)
          ;
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
  }
  return;
}

