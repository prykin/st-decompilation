
int __fastcall FUN_006971b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_38;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d788;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_20 = 0;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(uint *)(param_1 + 0x583b);
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x5853) != 0) && (&stack0x00000000 != (undefined1 *)0x50)) {
    puVar7 = (undefined4 *)&stack0xffffffb0;
    for (uVar2 = uVar2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(*(int *)(param_1 + 0x5853) + 0xc);
    uVar2 = 0;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar4 = *(int *)(param_1 + 0x5853);
        if (uVar2 < *(uint *)(iVar4 + 0xc)) {
          piVar1 = (int *)(*(int *)(iVar4 + 8) * uVar2 + *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar1 = (int *)0x0;
        }
        if (piVar1 != (int *)0x0) {
          *(int *)(&stack0xffffffb0 + *piVar1 * 4) =
               *(int *)(&stack0xffffffb0 + *piVar1 * 4) + *(int *)((int)piVar1 + 0x11);
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar3);
    }
    local_38 = -1;
    iVar4 = 0;
    iVar6 = 0;
    iVar3 = -1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)(param_1 + 0x583b)) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar3 = (*(int *)(&stack0xffffffb0 + iVar6 * 4) * 100) / *(int *)(param_1 + 0x582f);
        if (iVar6 == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar2 = iVar3 - *(int *)(param_1 + 0x5843);
          uVar5 = (int)uVar2 >> 0x1f;
          iVar4 = (uVar2 ^ uVar5) - uVar5;
          local_38 = iVar6;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar2 = iVar3 - *(int *)(param_1 + 0x5843);
          uVar5 = (int)uVar2 >> 0x1f;
          iVar3 = (uVar2 ^ uVar5) - uVar5;
          if (iVar3 < iVar4) {
            iVar4 = iVar3;
            local_38 = iVar6;
          }
        }
        iVar6 = iVar6 + 1;
        iVar3 = local_38;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (iVar6 < *(int *)(param_1 + 0x583b));
    }
    if (-1 < iVar3) {
      local_20 = iVar3;
    }
  }
  ExceptionList = local_14;
  return local_20;
}

