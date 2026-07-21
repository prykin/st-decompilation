
void __fastcall FUN_006988c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  AnonShape_00697AF0_A94F4D28 *pAVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_3c [2];
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  AnonShape_00697AF0_A94F4D28 *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x5853) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x5853) + 0xc);
    local_30 = 0;
    local_34 = iVar1;
    if (0 < iVar1) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar7 = *(int *)((int)param_1 + 0x5853);
        if (local_30 < *(uint *)(iVar7 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_8 = (AnonShape_00697AF0_A94F4D28 *)
                    (*(int *)(iVar7 + 8) * local_30 + *(int *)(iVar7 + 0x1c));
        }
        else {
          local_8 = (AnonShape_00697AF0_A94F4D28 *)0x0;
        }
        pAVar6 = local_8;
        if (((0 < *(int *)local_8) && (*(int *)&local_8->field_0x9 == 4)) &&
           (*(int *)&local_8->field_0xd == 2)) {
          iVar1 = thunk_FUN_00697af0(param_1,local_8,(int *)&local_14,&local_18,(int *)&local_1c,
                                     &local_10);
          if (iVar1 != 0) {
            local_c = 0;
            iVar7 = (byte)pAVar6->field_0x4 - 1;
            local_24 = local_1c + 1;
            local_20 = local_10 + 1;
            iVar1 = thunk_FUN_00697c50(param_1,iVar7,local_14 - 1,local_18 + -1);
            if (iVar1 != 0) {
              local_c = 1;
            }
            iVar1 = thunk_FUN_00697c50(param_1,iVar7,local_24,local_20);
            if (iVar1 != 0) {
              local_c = local_c + 1;
            }
            local_28 = 0;
            local_24 = local_1c + 1;
            local_20 = local_18 - 1;
            iVar1 = thunk_FUN_00697c50(param_1,iVar7,local_14 - 1,local_10 + 1);
            if (iVar1 != 0) {
              local_28 = 1;
            }
            iVar1 = thunk_FUN_00697c50(param_1,iVar7,local_24,local_20);
            uVar2 = local_28;
            if (iVar1 != 0) {
              uVar2 = local_28 + 1;
            }
            if ((int)uVar2 < local_c) {
              if (0 < local_c) {
                thunk_FUN_006a0e30(param_1,local_14,local_18,*(int *)pAVar6,-1);
                iVar1 = *(int *)pAVar6;
                iVar7 = local_10;
LAB_00698a36:
                thunk_FUN_006a0e30(param_1,local_1c,iVar7,iVar1,-1);
              }
            }
            else if (0 < (int)uVar2) {
              thunk_FUN_006a0e30(param_1,local_14,local_10,*(int *)pAVar6,-1);
              iVar1 = *(int *)pAVar6;
              iVar7 = local_18;
              goto LAB_00698a36;
            }
          }
          iVar1 = local_34;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)pAVar6 <= *(int *)((int)param_1 + 0x5847) + -1) {
            pDVar4 = pAVar6->field_0015;
            uVar2 = 0;
            local_c = 0;
            if ((pDVar4 != (DArrayTy *)0x0) && (uVar5 = pDVar4->count, 0 < (int)uVar5)) {
              bVar8 = uVar5 != 0;
              do {
                if (bVar8) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar2) (runtime stride) */
                  pbVar3 = (byte *)(pDVar4->elementSize * uVar2 + (int)pDVar4->data);
                }
                else {
                  pbVar3 = (byte *)0x0;
                }
                if ((pbVar3[1] == 0) && ((*pbVar3 & 2) != 0)) {
                  local_c = local_c + 1;
                }
                uVar2 = uVar2 + 1;
                bVar8 = uVar2 < uVar5;
              } while ((int)uVar2 < (int)uVar5);
            }
            uVar2 = Library::MSVCRT::FUN_0072e6c0();
            uVar2 = uVar2 & 0x80000001;
            if ((int)uVar2 < 0) {
              uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
            }
            local_28 = uVar2 + 1;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)((int)param_1 + 0x5847) < (int)(*(int *)pAVar6 + uVar2 + 1)) {
              local_28 = uVar2;
            }
            iVar1 = local_34;
            if ((local_28 != 0) && (0 < local_c)) {
              pDVar4 = pAVar6->field_0015;
              local_2c = 0;
              if (0 < (int)pDVar4->count) {
                bVar8 = pDVar4->count != 0;
                do {
                  if (bVar8) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, local_2c) (runtime stride) */
                    pbVar3 = (byte *)(pDVar4->elementSize * local_2c + (int)pDVar4->data);
                  }
                  else {
                    pbVar3 = (byte *)0x0;
                  }
                  if (pbVar3[1] == 0) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_24 = *(int *)(pbVar3 + 2) / *(int *)((int)param_1 + 0x5833);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_20 = *(int *)(pbVar3 + 2) % *(int *)((int)param_1 + 0x5833);
                    pAVar6 = local_8;
                    if (((*pbVar3 & 2) != 0) &&
                       (uVar2 = Library::MSVCRT::FUN_0072e6c0(), pAVar6 = local_8,
                       (int)uVar2 % (local_c + 1) == 1)) {
                      uVar2 = Library::MSVCRT::FUN_0072e6c0();
                      uVar2 = uVar2 & 0x80000001;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
                      }
                      uVar5 = Library::MSVCRT::FUN_0072e6c0();
                      iVar1 = thunk_FUN_006a1370(*(int **)((int)param_1 + 8),local_20,local_24,
                                                 local_28,local_3c);
                      pAVar6 = local_8;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      if ((int)((int)(short)iVar1 + uVar2 + 1) < *(int *)((int)param_1 + 0x5847)) {
                        thunk_FUN_006a0c90(local_20,local_24,*(int *)local_8 + 1,uVar2 + 1,0xff,0,
                                           (int)uVar5 % 6 + 1);
                        pAVar6 = local_8;
                      }
                    }
                  }
                  pDVar4 = pAVar6->field_0015;
                  local_2c = local_2c + 1;
                  bVar8 = local_2c < pDVar4->count;
                  iVar1 = local_34;
                } while ((int)local_2c < (int)pDVar4->count);
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while ((int)local_30 < iVar1);
    }
  }
  return;
}

