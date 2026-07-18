
undefined4 __thiscall
thunk_FUN_0058b190(void *this,short *param_1,short *param_2,short *param_3,short *param_4)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  int iStack_14;
  int iStack_c;
  uint uStack_8;
  
  *(undefined4 *)((int)this + 0x281) = 0;
  iVar4 = DAT_007fb240 + -1;
  iVar5 = DAT_007fb242 + -1;
  sVar11 = *(short *)((int)this + 0x41);
  if (sVar11 < 0) {
    iStack_14._0_2_ =
         ((sVar11 / 0xc9 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)) +
         -1;
  }
  else {
    iStack_14._0_2_ =
         (sVar11 / 0xc9 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f);
  }
  sVar11 = *(short *)((int)this + 0x43);
  *(short *)((int)this + 0x47) = (short)iStack_14;
  if (sVar11 < 0) {
    sVar11 = ((sVar11 / 0xc9 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar11 = (sVar11 / 0xc9 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x28c1979 >> 0x3f);
  }
  sVar12 = *(short *)((int)this + 0x45);
  *(short *)((int)this + 0x49) = sVar11;
  if (sVar12 < 0) {
    sVar12 = ((sVar12 / 200 + (sVar12 >> 0xf)) - (short)((longlong)(int)sVar12 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar12 = (sVar12 / 200 + (sVar12 >> 0xf)) - (short)((longlong)(int)sVar12 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x4b) = sVar12;
  if ((short)iStack_14 < 0) {
    *(undefined2 *)((int)this + 0x47) = 0;
  }
  if (sVar11 < 0) {
    *(undefined2 *)((int)this + 0x49) = 0;
  }
  if (iVar4 < *(short *)((int)this + 0x47)) {
    *(short *)((int)this + 0x47) = (short)iVar4;
  }
  if (iVar5 < *(short *)((int)this + 0x49)) {
    *(short *)((int)this + 0x49) = (short)iVar5;
  }
  iVar9 = (int)*(short *)((int)this + 0x47);
  bVar15 = iVar9 + -1 < 0;
  iVar6 = (int)*(short *)((int)this + 0x49);
  if (iVar6 + -1 < 0) {
    bVar15 = bVar15 + 1;
  }
  if (iVar4 < iVar9 + 1) {
    bVar15 = bVar15 + 1;
  }
  if (iVar5 < iVar6 + 1) {
    bVar15 = bVar15 + 1;
  }
  if ((((*(int *)((int)this + 0x2a5) == 0xf8) || (*(int *)((int)this + 0x2a5) == 0xf9)) &&
      (sVar12 < 4)) && (((byte)*(undefined4 *)(DAT_00802a38 + 0xe4) & 7) == 1)) {
    uVar13 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar13;
    *(undefined4 *)((int)this + 0x281) = 1;
    iStack_c = (uVar13 >> 0x10) % 0x66 + 100 + (int)*(short *)((int)this + 0x45);
    goto LAB_0058b5ac;
  }
  iVar14 = 0;
  iVar10 = 0;
  if ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) {
    iVar14 = *(int *)((int)this + 0x251);
    iVar10 = iVar14;
    if (iVar14 < 0) {
      iVar10 = -iVar14;
    }
    if (0x1d < iVar10) {
      iVar9 = iVar9 + ((-1 < iVar14) - 1 & 0xfffffffe) + 1;
    }
    iVar14 = *(int *)((int)this + 0x255);
    iVar10 = iVar14;
    if (iVar14 < 0) {
      iVar10 = -iVar14;
    }
    if (0x1d < iVar10) {
      iVar6 = iVar6 + ((-1 < iVar14) - 1 & 0xfffffffe) + 1;
    }
    iVar14 = iVar9;
    iVar10 = iVar6;
    if (((iVar4 < iVar9) || (iVar9 < 0)) || ((iVar5 <= iVar6 || (iVar6 < 0)))) goto LAB_0058b3ab;
    goto LAB_0058b499;
  }
LAB_0058b3ab:
  if (bVar15 < 2) {
    uVar13 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar13;
    iVar9 = ((uVar13 >> 0x10) % 3 - 1) + (int)*(short *)((int)this + 0x6c);
  }
  else {
    uVar13 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar13;
    iVar9 = ((uVar13 >> 0x10) % 5 - 2) + (int)*(short *)((int)this + 0x6c);
  }
  if (iVar9 < 8) {
    if (iVar9 < 0) {
      iVar9 = iVar9 + 8;
    }
  }
  else {
    iVar9 = iVar9 + -8;
  }
  switch(iVar9) {
  case 0:
    iVar10 = (int)*(short *)((int)this + 0x49);
    iVar14 = *(short *)((int)this + 0x47) + 1;
    break;
  case 1:
    iVar14 = *(short *)((int)this + 0x47) + 1;
    iVar10 = *(short *)((int)this + 0x49) + -1;
    break;
  case 2:
    iVar14 = (int)*(short *)((int)this + 0x47);
    iVar10 = *(short *)((int)this + 0x49) + -1;
    break;
  case 3:
    iVar14 = *(short *)((int)this + 0x47) + -1;
    iVar10 = *(short *)((int)this + 0x49) + -1;
    break;
  case 4:
    iVar10 = (int)*(short *)((int)this + 0x49);
    iVar14 = *(short *)((int)this + 0x47) + -1;
    break;
  case 5:
    iVar14 = *(short *)((int)this + 0x47) + -1;
    goto LAB_0058b466;
  case 6:
    iVar14 = (int)*(short *)((int)this + 0x47);
    goto LAB_0058b466;
  case 7:
    iVar14 = *(short *)((int)this + 0x47) + 1;
LAB_0058b466:
    iVar10 = *(short *)((int)this + 0x49) + 1;
  }
  iVar9 = iVar14;
  if (iVar4 < iVar14) {
    iVar10 = (int)*(short *)((int)this + 0x49);
    iVar9 = iVar4;
  }
  if (iVar9 < 0) {
    iVar10 = (int)*(short *)((int)this + 0x49);
    iVar9 = 0;
  }
  iVar6 = iVar10;
  if (iVar5 <= iVar10) {
    iVar9 = (int)*(short *)((int)this + 0x47);
    iVar6 = iVar5;
  }
  if (iVar6 < 0) {
    iVar9 = (int)*(short *)((int)this + 0x47);
    iVar6 = 0;
  }
LAB_0058b499:
  iStack_c = (int)*(short *)((int)this + 0x45);
  uVar13 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar13;
  uStack_8 = (uVar13 >> 0x10) % 0x65;
  if ((int)((int)*(short *)((int)this + 0x45) + uStack_8) < 900) {
    iVar4 = iStack_c - uStack_8;
    if (0x31 < iVar4) {
      sVar11 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        iVar4 = (short)(((short)(iVar4 / 200) + sVar11) -
                       (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)(((short)(iVar4 / 200) + sVar11) -
                            (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
      }
      uVar13 = thunk_FUN_00496250(iVar9,iVar6,iVar4);
      iVar4 = uStack_8 + iStack_c;
      sVar11 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        iVar4 = (short)(((short)(iVar4 / 200) + sVar11) -
                       (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)(((short)(iVar4 / 200) + sVar11) -
                            (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
      }
      uVar7 = thunk_FUN_00496250(iVar9,iVar6,iVar4);
      if (((int)uVar13 < 0) && ((int)uVar7 < 0)) {
        if ((uStack_8 & 1) != 0) {
          uStack_8 = -uStack_8;
        }
      }
      else {
        if ((uStack_8 != 0) && (-1 < (int)uVar7)) {
          uStack_8 = -uStack_8;
        }
        if (((int)uStack_8 < 0) && (-1 < (int)uVar13)) {
          uStack_8 = -uStack_8;
        }
      }
    }
  }
  else {
    uStack_8 = -uStack_8;
  }
  iStack_c = iStack_c + uStack_8;
LAB_0058b5ac:
  sVar11 = (short)(iStack_c >> 0x1f);
  if (iStack_c < 0) {
    uStack_8 = (short)(((short)(iStack_c / 200) + sVar11) -
                      (short)((longlong)iStack_c * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    uStack_8 = (uint)(short)(((short)(iStack_c / 200) + sVar11) -
                            (short)((longlong)iStack_c * 0x51eb851f >> 0x3f));
  }
  bVar1 = false;
  do {
    while( true ) {
      iStack_14 = uStack_8;
      if ((int)uStack_8 < (int)(uStack_8 + 5)) {
        do {
          iVar4 = iStack_14;
          if (4 < iStack_14) {
            iVar4 = iStack_14 + -5;
          }
          sVar11 = (short)iVar9;
          sVar12 = (short)iVar6;
          bVar2 = thunk_FUN_004961b0(sVar11,sVar12,(short)iVar4);
          if ((CONCAT31(extraout_var,bVar2) != 0) &&
             ((((sVar11 < 0 || (DAT_007fb240 <= sVar11)) || (sVar12 < 0)) ||
              (((DAT_007fb242 <= sVar12 || (sVar3 = (short)uStack_8, sVar3 < 0)) ||
               ((DAT_007fb244 <= sVar3 ||
                (*(int *)(DAT_007fb248 +
                         ((int)sVar12 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar3 +
                         (int)sVar11) * 8) == 0)))))))) {
            if (iVar4 != uStack_8) {
              iStack_c = (int)(short)((short)iVar4 * 200 + 100);
            }
            bVar1 = true;
            goto LAB_0058b6f6;
          }
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < (int)(uStack_8 + 5));
      }
      bVar2 = -1 < iVar9 - *(short *)((int)this + 0x47);
      if (iVar9 != *(short *)((int)this + 0x47) && bVar2) break;
      if (bVar2) {
        bVar2 = iVar6 - *(short *)((int)this + 0x49) < 0;
        if (iVar6 == *(short *)((int)this + 0x49) || bVar2) {
          if (!bVar2) goto LAB_0058b6f6;
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + -1;
          if (iVar6 < 0) goto LAB_0058b6f6;
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
LAB_0058b6f6:
  sVar11 = (short)iVar9 * 0xc9 + 100;
  sVar12 = (short)iVar6 * 0xc9 + 100;
  if ((bVar1) &&
     ((((int)*(short *)((int)this + 0x41) != (int)sVar11 ||
       ((int)*(short *)((int)this + 0x43) != (int)sVar12)) ||
      (*(short *)((int)this + 0x45) != iStack_c)))) {
    *param_1 = sVar11;
    *param_2 = sVar12;
    *param_3 = (short)iStack_c;
    uVar8 = (undefined2)((uint)iStack_c >> 0x10);
    sVar3 = (**(code **)(*(int *)this + 0x10))
                      (CONCAT22(uVar8,*(undefined2 *)((int)this + 0x41)),
                       *(undefined2 *)((int)this + 0x43),
                       CONCAT22(uVar8,*(undefined2 *)((int)this + 0x45)),(int)sVar11,(int)sVar12,
                       iStack_c);
    *param_4 = sVar3 / 0x2d - (short)((int)sVar3 / -0x4c000000);
    thunk_FUN_0058af70(this,sVar11,sVar12,(short)iStack_c);
    return 1;
  }
  uVar13 = (int)*(short *)((int)this + 0x6c) + 1U & 0x80000007;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
  }
  *param_4 = (short)uVar13;
  return 0;
}

