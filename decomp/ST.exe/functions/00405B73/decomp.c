
void thunk_FUN_004e6680(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iStack_8;
  
  uVar2 = thunk_FUN_004406c0((char)param_1);
  iStack_8 = 0x42;
  iVar3 = (uVar2 & 0xff) - 1;
  pbVar8 = &DAT_007c0dd4;
  iVar7 = iVar3 * 0x10;
  do {
    iVar4 = FUN_006b0fd0((int)(&DAT_008013f0 + iVar7));
    if (((iVar4 != 0) || (iVar4 = FUN_006b0fd0((int)(&DAT_008013b0 + iVar7)), iVar4 != 0)) &&
       (iVar4 = 1, pbVar8[1] != 0)) {
      do {
        if (2 < iVar4) break;
        iVar5 = thunk_FUN_004e60d0(param_1,(uint)pbVar8[iVar4]);
        if (iVar5 == 0) goto LAB_004e6740;
        iVar5 = iVar4 + 1;
        iVar4 = iVar4 + 1;
      } while (pbVar8[iVar5] != 0);
      if (pbVar8[1] != 0) {
        *(undefined4 *)((int)&DAT_007f53b3 + (uint)*pbVar8 * 4 + param_1 * 0xa62) = 1;
      }
    }
LAB_004e6740:
    pbVar8 = pbVar8 + 3;
    iVar4 = iStack_8 + -0x40;
    iStack_8 = iStack_8 + 1;
  } while (iVar4 < 0x29);
  iStack_8 = 0x32;
  do {
    iVar4 = FUN_006b0fd0((int)(&DAT_00801380 + iVar7));
    if (iVar4 != 0) {
      iVar9 = iVar3 * 0x42;
      iVar5 = 1;
      iVar4 = iVar9 + -0x32 + iStack_8;
      if ((&DAT_007c0e4d)[iVar4 * 3] != '\0') {
        do {
          if (2 < iVar5) break;
          iVar1 = (iVar9 + -0x32 + iStack_8) * 3;
          iVar6 = thunk_FUN_004e60d0(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar5 + iVar1]);
          if (iVar6 == 0) goto LAB_004e680d;
          iVar1 = iVar5 + iVar1;
          iVar5 = iVar5 + 1;
        } while ((&DAT_007c0e4d)[iVar1] != '\0');
        if ((&DAT_007c0e4d)[iVar4 * 3] != '\0') {
          *(undefined4 *)
           ((int)&DAT_007f53b3 + (uint)(byte)(&DAT_007c0e4c)[iVar4 * 3] * 4 + param_1 * 0xa62) = 1;
        }
      }
    }
LAB_004e680d:
    iStack_8 = iStack_8 + 1;
    if (0x73 < iStack_8) {
      return;
    }
  } while( true );
}

