
undefined4 __fastcall FUN_004dd880(int param_1)

{
  AnonShape_004DDCC0_33DEB43E *pAVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_104 [4];
  undefined4 local_f4 [51];
  int local_28;
  int local_24;
  AnonShape_004DDCC0_33DEB43E *local_20;
  int *local_1c;
  int *local_18;
  undefined4 *local_14;
  int *local_10;
  uint *local_c;
  int *local_8;

  local_20 = (AnonShape_004DDCC0_33DEB43E *)param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  GetPlayerRaceId(*(char *)(param_1 + 0x24));
  piVar8 = local_104;
  for (iVar6 = 0x37; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = -1;
    piVar8 = piVar8 + 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = GetPlayerRaceId((char)*(int *)(param_1 + 0x23d));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar6 = *(int *)(param_1 + 0x235);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar3 = GetPlayerRaceId(*(char *)(param_1 + 0x24));
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar6 * 3) * 3] == '\0')
    goto LAB_004dda3a;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x5ac) == 0x34) {
    local_24 = 1;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_24 = (-(uint)(*(int *)(param_1 + 0x5ac) != 0x5b) & 0xfffffffe) + 2;
  }
  local_14 = local_f4;
  local_8 = local_104 + 2;
  local_28 = 0x96;
  local_c = (uint *)(local_104 + 3);
  local_1c = &DAT_007e6024;
  local_10 = local_104 + 1;
  piVar8 = local_104;
  local_18 = &DAT_007bf67c;
  do {
    pAVar1 = local_20;
    iVar6 = local_28;
    if (local_18[-1] == local_24) {
      iVar4 = *local_18;
      if (((iVar4 < 0) || (iVar4 == 0)) ||
         (iVar4 = thunk_FUN_004e60d0(*(int *)&local_20->field_0024,iVar4), local_18[1] <= iVar4)) {
        iVar4 = pAVar1->field_04D0;
        piVar7 = &pAVar1->field_04D0;
        iVar5 = 0;
        if (-1 < iVar4) {
LAB_004dd9b3:
          if (iVar4 != iVar6) goto code_r0x004dd9bb;
          piVar7 = &pAVar1->field_04D0 + iVar5 * 5;
          piVar9 = piVar8;
          for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          piVar8 = piVar8 + 5;
          local_10 = local_10 + 5;
          local_8 = local_8 + 5;
          local_c = local_c + 5;
          local_14 = local_14 + 5;
          iVar6 = local_28;
          goto LAB_004dda13;
        }
LAB_004dd9c6:
        iVar4 = *local_1c;
        *piVar8 = iVar6;
        *local_10 = 0;
        *local_8 = 0;
        *local_c = (uint)(iVar4 < 10);
        piVar8 = piVar8 + 5;
        *local_14 = 0;
        local_10 = local_10 + 5;
        local_8 = local_8 + 5;
        local_c = local_c + 5;
        local_14 = local_14 + 5;
      }
    }
LAB_004dda13:
    local_18 = local_18 + 3;
    local_1c = local_1c + 5;
    local_28 = iVar6 + 1;
    param_1 = (int)local_20;
  } while (iVar6 + -0x95 < 0x2d);
LAB_004dda3a:
  piVar8 = local_104;
  piVar7 = &((AnonShape_004DDCC0_33DEB43E *)param_1)->field_04D0;
  for (iVar6 = 0x37; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
  }
  thunk_FUN_004ddcc0((AnonShape_004DDCC0_33DEB43E *)param_1);
  return 0;
code_r0x004dd9bb:
  iVar4 = piVar7[5];
  piVar7 = piVar7 + 5;
  iVar5 = iVar5 + 1;
  if (iVar4 < 0) goto LAB_004dd9c6;
  goto LAB_004dd9b3;
}

