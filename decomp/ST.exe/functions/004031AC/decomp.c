
undefined4 __fastcall thunk_FUN_004dd880(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int aiStack_104 [4];
  undefined4 auStack_f4 [51];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  int *piStack_10;
  uint *puStack_c;
  int *piStack_8;
  
  iStack_20 = param_1;
  thunk_FUN_004406c0(*(char *)(param_1 + 0x24));
  piVar8 = aiStack_104;
  for (iVar6 = 0x37; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = -1;
    piVar8 = piVar8 + 1;
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    uVar2 = thunk_FUN_004406c0((char)*(int *)(param_1 + 0x23d));
    iVar6 = *(int *)(param_1 + 0x235);
    uVar3 = thunk_FUN_004406c0(*(char *)(param_1 + 0x24));
    if ((&DAT_007e1984)[(uVar3 & 0xff) + ((uVar2 & 0xff) + iVar6 * 3) * 3] == '\0')
    goto LAB_004dda3a;
  }
  if (*(int *)(param_1 + 0x5ac) == 0x34) {
    iStack_24 = 1;
  }
  else {
    iStack_24 = (-(uint)(*(int *)(param_1 + 0x5ac) != 0x5b) & 0xfffffffe) + 2;
  }
  puStack_14 = auStack_f4;
  piStack_8 = aiStack_104 + 2;
  iStack_28 = 0x96;
  puStack_c = (uint *)(aiStack_104 + 3);
  piStack_1c = &DAT_007e6024;
  piStack_10 = aiStack_104 + 1;
  piVar8 = aiStack_104;
  piStack_18 = &DAT_007bf67c;
  do {
    iVar1 = iStack_20;
    iVar6 = iStack_28;
    if (piStack_18[-1] == iStack_24) {
      iVar4 = *piStack_18;
      if (((iVar4 < 0) || (iVar4 == 0)) ||
         (iVar4 = thunk_FUN_004e60d0(*(int *)(iStack_20 + 0x24),iVar4), piStack_18[1] <= iVar4)) {
        iVar7 = *(int *)(iVar1 + 0x4d0);
        iVar4 = iVar1 + 0x4d0;
        iVar5 = 0;
        if (-1 < iVar7) {
LAB_004dd9b3:
          if (iVar7 != iVar6) goto code_r0x004dd9bb;
          piVar9 = (int *)(iVar1 + 0x4d0 + iVar5 * 0x14);
          piVar10 = piVar8;
          for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          piVar8 = piVar8 + 5;
          piStack_10 = piStack_10 + 5;
          piStack_8 = piStack_8 + 5;
          puStack_c = puStack_c + 5;
          puStack_14 = puStack_14 + 5;
          iVar6 = iStack_28;
          goto LAB_004dda13;
        }
LAB_004dd9c6:
        iVar1 = *piStack_1c;
        *piVar8 = iVar6;
        *piStack_10 = 0;
        *piStack_8 = 0;
        *puStack_c = (uint)(iVar1 < 10);
        piVar8 = piVar8 + 5;
        *puStack_14 = 0;
        piStack_10 = piStack_10 + 5;
        piStack_8 = piStack_8 + 5;
        puStack_c = puStack_c + 5;
        puStack_14 = puStack_14 + 5;
      }
    }
LAB_004dda13:
    piStack_18 = piStack_18 + 3;
    piStack_1c = piStack_1c + 5;
    iStack_28 = iVar6 + 1;
    param_1 = iStack_20;
  } while (iVar6 + -0x95 < 0x2d);
LAB_004dda3a:
  piVar8 = aiStack_104;
  piVar9 = (int *)(param_1 + 0x4d0);
  for (iVar6 = 0x37; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  thunk_FUN_004ddcc0(param_1);
  return 0;
code_r0x004dd9bb:
  iVar7 = *(int *)(iVar4 + 0x14);
  iVar4 = iVar4 + 0x14;
  iVar5 = iVar5 + 1;
  if (iVar7 < 0) goto LAB_004dd9c6;
  goto LAB_004dd9b3;
}

