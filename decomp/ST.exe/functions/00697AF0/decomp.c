
undefined4 __thiscall
FUN_00697af0(void *this,AnonShape_00697AF0_A94F4D28 *param_1,int *param_2,int *param_3,int *param_4,
            int *param_5)

{
  DArrayTy *pDVar1;
  uint uVar2;
  AnonShape_00697AF0_A94F4D28 *pAVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  AnonShape_00697AF0_A94F4D28 *pAVar8;
  int local_14;
  AnonShape_00697AF0_A94F4D28 *local_10;
  int local_c;
  int local_8;

  pDVar1 = param_1->field_0015;
  local_14 = 0;
  if (pDVar1 != (DArrayTy *)0x0) {
    uVar2 = pDVar1->count;
    uVar7 = 0;
    param_1 = (AnonShape_00697AF0_A94F4D28 *)0x0;
    local_c = 0;
    local_10 = (AnonShape_00697AF0_A94F4D28 *)0x0;
    local_8 = 0;
    if (0 < (int)uVar2) {
      do {
        pvVar5 = (void *)0x0;
        if (uVar7 < uVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar7) (runtime stride) */
          pvVar5 = (void *)(pDVar1->elementSize * uVar7 + (int)pDVar1->data);
        }
        if (*(char *)((int)pvVar5 + 1) == '\0') {
          iVar6 = *(int *)((int)pvVar5 + 2) / *(int *)((int)this + 0x5833);
          pAVar8 = (AnonShape_00697AF0_A94F4D28 *)
                   (*(int *)((int)pvVar5 + 2) % *(int *)((int)this + 0x5833));
          local_14 = local_14 + 1;
          pAVar3 = pAVar8;
          iVar4 = iVar6;
          if (uVar7 != 0) {
            if ((int)pAVar8 < (int)param_1) {
              param_1 = pAVar8;
            }
            if (iVar6 < local_c) {
              local_c = iVar6;
            }
            if ((int)local_10 < (int)pAVar8) {
              local_10 = pAVar8;
            }
            pAVar8 = param_1;
            pAVar3 = local_10;
            iVar4 = local_c;
            if (iVar6 <= local_8) goto LAB_00697b99;
          }
          local_c = iVar4;
          local_10 = pAVar3;
          param_1 = pAVar8;
          local_8 = iVar6;
        }
LAB_00697b99:
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
      if ((local_14 != 0) &&
         (local_14 == ((local_8 - local_c) + 1) * ((int)local_10 + (1 - (int)param_1)))) {
        *param_2 = (int)param_1;
        *param_3 = local_c;
        *param_4 = (int)local_10;
        *param_5 = local_8;
        return 1;
      }
    }
  }
  return 0;
}

