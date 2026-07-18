
undefined4 __fastcall thunk_FUN_0045f6c0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 extraout_var;
  int iVar9;
  uint uVar10;
  undefined4 unaff_EBX;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar13 = 0;
  uVar5 = thunk_FUN_004406c0((char)param_1[9]);
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    iVar13 = param_1[9];
    iVar15 = 5;
  }
  else if (uVar5 == 2) {
    iVar13 = param_1[9];
    iVar15 = 0x82;
  }
  else {
    if (uVar5 != 3) goto LAB_0045f710;
    iVar13 = param_1[9];
    iVar15 = 0x6d;
  }
  iVar13 = thunk_FUN_004e60d0(iVar13,iVar15);
LAB_0045f710:
  bVar3 = thunk_FUN_00430750(*(int *)((int)param_1 + 0x6f7));
  if (iVar13 == 1) {
    bVar3 = bVar3 + 2;
    iVar13 = 0;
  }
  else if (iVar13 == 2) {
    bVar3 = bVar3 + 6;
    iVar13 = 0;
  }
  else {
    iVar13 = iVar13 + -3;
    if (iVar13 == 0) {
      bVar3 = bVar3 + 8;
    }
  }
  *(byte *)((int)param_1 + 0x61) = bVar3;
  *(undefined1 *)((int)param_1 + 0xe3) = 1;
  *(byte *)((int)param_1 + 0x62) = bVar3 >> 1;
  iVar15 = *(int *)((int)param_1 + 0x97);
  *(undefined4 *)((int)param_1 + 0xd3) = 1;
  iVar14 = CONCAT22((short)((uint)iVar13 >> 0x10),*(short *)(iVar15 + 8) * 0xc9) + 100;
  sVar12 = (short)iVar14;
  uVar5 = (int)sVar12 - (int)*(short *)((int)param_1 + 0x41);
  iVar11 = CONCAT22((short)((uint)unaff_EBX >> 0x10),*(short *)(iVar15 + 10) * 0xc9) + 100;
  uVar10 = (int)uVar5 >> 0x1f;
  iVar9 = CONCAT22(extraout_var,*(short *)(iVar15 + 0xc) * 200) + 100;
  iVar13 = (uVar5 ^ uVar10) - uVar10;
  sVar4 = (short)iVar11;
  uVar5 = (int)sVar4 - (int)*(short *)((int)param_1 + 0x43);
  uVar10 = (int)uVar5 >> 0x1f;
  iVar15 = (uVar5 ^ uVar10) - uVar10;
  uVar5 = (int)(short)iVar9 - (int)*(short *)((int)param_1 + 0x45);
  uVar10 = (int)uVar5 >> 0x1f;
  iVar6 = (uVar5 ^ uVar10) - uVar10;
  if (((iVar6 != 0) && (iVar13 == 0 || 2 < iVar6 / iVar13)) && (iVar15 == 0 || 2 < iVar6 / iVar15))
  {
    bVar3 = bVar3 >> 1;
  }
  iVar7 = thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43)
                             ,*(short *)((int)param_1 + 0x45),sVar12,sVar4,(short)iVar9,bVar3);
  if (iVar7 != 0) {
    return 0xffffffff;
  }
  if (((short)param_1[0x23] != 1) &&
     ((*(short *)((int)param_1 + 0x41) != sVar12 || (*(short *)((int)param_1 + 0x43) != sVar4)))) {
    bVar2 = false;
    bVar1 = false;
    if ((iVar13 != 0) && (0x23a < (iVar6 * 100) / iVar13)) {
      bVar1 = true;
    }
    if ((iVar15 != 0) && (0x23a < (iVar6 * 100) / iVar15)) {
      bVar2 = true;
    }
    if ((!bVar1) || (!bVar2)) {
      uVar8 = (undefined2)((uint)iVar9 >> 0x10);
      sVar4 = (**(code **)(*param_1 + 0x10))
                        (CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x41)),
                         CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x43)),
                         CONCAT22((short)((uint)iVar15 >> 0x10),*(undefined2 *)((int)param_1 + 0x45)
                                 ),iVar14,iVar11,iVar9);
      uVar5 = thunk_FUN_004176c0(param_1,sVar4);
      if ((short)uVar5 != (short)param_1[0x1b]) {
        thunk_FUN_00417740(param_1,(short)param_1[0x1b],(short)uVar5);
      }
    }
  }
  return 0;
}

