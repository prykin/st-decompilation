
undefined4 __thiscall
thunk_FUN_0057d700(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  int iStack_18;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  uVar3 = (uint)DAT_007fb240;
  uVar11 = 0;
  uVar10 = 0;
  uVar4 = uVar3 - 1;
  uVar5 = (uint)DAT_007fb242;
  uVar6 = uVar5 - 1;
  thunk_FUN_004162b0(this,&uStack_a,&uStack_8,&uStack_6);
  iStack_18 = (int)*(short *)((int)this + 0x4b) - (*(uint *)(DAT_00802a38 + 0xe4) & 1);
  if (iStack_18 < 0) {
    iStack_18 = 1;
  }
  switch(*(undefined4 *)((int)this + 0x267)) {
  case 0xe7:
  case 0xe9:
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar11 = (uVar10 >> 0x10) % uVar3;
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % uVar5;
    goto switchD_0057d76c_default;
  case 0xe8:
  case 0xea:
  case 0xeb:
    if ((((*(short *)((int)this + 0x47) < 1) &&
         (((sVar2 = *(short *)((int)this + 0x6c), sVar2 == 0xe1 || (sVar2 == 0xb4)) ||
          (sVar2 == 0x87)))) ||
        ((iVar9 = (int)*(short *)((int)this + 0x47), (int)uVar4 <= iVar9 &&
         (((sVar2 = *(short *)((int)this + 0x6c), sVar2 == 0x2d || (sVar2 == 0)) || (sVar2 == 0x13b)
          ))))) ||
       (((*(short *)((int)this + 0x49) < 1 &&
         (((sVar2 = *(short *)((int)this + 0x6c), sVar2 == 0x87 || (sVar2 == 0x5a)) ||
          (sVar2 == 0x2d)))) ||
        ((iVar7 = (int)*(short *)((int)this + 0x49), (int)uVar6 <= iVar7 &&
         (((sVar2 = *(short *)((int)this + 0x6c), sVar2 == 0xe1 || (sVar2 == 0x10e)) ||
          (sVar2 == 0x13b)))))))) {
      iVar9 = (sVar2 + 0x2d) % 0x168;
      *param_4 = iVar9;
      if (-1 < iVar9) {
        return 2;
      }
      do {
        iVar9 = *param_4;
        *param_4 = iVar9 + 0x168;
      } while (iVar9 + 0x168 < 0);
      return 2;
    }
    break;
  default:
    goto switchD_0057d76c_default;
  }
  iVar8 = (int)((ulonglong)((longlong)(int)*(short *)((int)this + 0x6c) * -0x49f49f49) >> 0x20) +
          (int)*(short *)((int)this + 0x6c);
  switch((iVar8 >> 5) - (iVar8 >> 0x1f)) {
  case 0:
    if (iVar9 < 0) {
      iVar7 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar7 = *(int *)((int)this + 0x1c);
    }
    uVar10 = iVar7 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar11 = (uVar10 >> 0x10) % ((uVar4 - iVar9) + 1) + iVar9;
    iVar9 = uVar11 - (int)*(short *)((int)this + 0x47);
    goto LAB_0057d9ad;
  case 1:
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % (iVar7 + 1U);
    iVar9 = (int)*(short *)((int)this + 0x47);
    if (iVar9 < 0) {
LAB_0057db0a:
      uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    }
    else {
      uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    }
    goto LAB_0057db18;
  case 2:
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % (iVar7 + 1U);
    iVar9 = (int)*(short *)((int)this + 0x49) - uVar10;
    goto LAB_0057da88;
  case 3:
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar11 = (uVar10 >> 0x10) % (iVar9 + 1U);
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((int)*(short *)((int)this + 0x49) + 1U);
    break;
  case 4:
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar11 = (uVar10 >> 0x10) % (iVar9 + 1U);
    iVar9 = (int)*(short *)((int)this + 0x47) - uVar11;
LAB_0057d9ad:
    iVar7 = *(short *)((int)this + 0x49) - iVar9;
    if (iVar7 < 0) {
      iVar8 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar8 = *(int *)((int)this + 0x1c);
    }
    uVar10 = iVar8 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % (((*(short *)((int)this + 0x49) + iVar9) - iVar7) + 1U) + iVar7;
    break;
  case 5:
    if (iVar7 < 0) {
      iVar9 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar9 = *(int *)((int)this + 0x1c);
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar6 - iVar7) + 1) + iVar7;
    uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar11;
    uVar11 = (uVar11 >> 0x10) % ((int)*(short *)((int)this + 0x47) + 1U);
    break;
  case 6:
    if (iVar7 < 0) {
      iVar9 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar9 = *(int *)((int)this + 0x1c);
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar6 - iVar7) + 1) + iVar7;
    iVar9 = uVar10 - (int)*(short *)((int)this + 0x49);
LAB_0057da88:
    uVar3 = *(short *)((int)this + 0x47) + iVar9;
    iVar9 = *(short *)((int)this + 0x47) - iVar9;
    if (iVar9 < 0) {
      uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar11;
    }
    else {
      uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar11;
    }
    goto LAB_0057db1e;
  case 7:
    if (iVar7 < 0) {
      iVar9 = *(int *)((int)this + 0x1c);
    }
    else {
      iVar9 = *(int *)((int)this + 0x1c);
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar6 - iVar7) + 1) + iVar7;
    iVar9 = (int)*(short *)((int)this + 0x47);
    if (-1 < iVar9) goto LAB_0057db0a;
    uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
LAB_0057db18:
    *(uint *)((int)this + 0x1c) = uVar11;
    uVar3 = uVar4;
LAB_0057db1e:
    uVar11 = (uVar11 >> 0x10) % ((uVar3 - iVar9) + 1) + iVar9;
    break;
  default:
    goto switchD_0057d88f_default;
  }
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
switchD_0057d88f_default:
  if ((int)uVar4 <= (int)uVar11) {
    uVar11 = uVar4;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  if ((int)uVar6 <= (int)uVar10) {
    uVar10 = uVar6;
  }
switchD_0057d76c_default:
  if ((uVar11 == (int)*(short *)((int)this + 0x47)) && (uVar10 == (int)*(short *)((int)this + 0x49))
     ) {
    if ((*(int *)((int)this + 0x267) == 0xeb) || (*(int *)((int)this + 0x267) == 0xe8)) {
      iVar9 = (*(short *)((int)this + 0x6c) + 0x2d) % 0x168;
      *param_4 = iVar9;
      if (-1 < iVar9) {
        return 2;
      }
      do {
        iVar9 = *param_4;
        *param_4 = iVar9 + 0x168;
      } while (iVar9 + 0x168 < 0);
      return 2;
    }
    uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar3;
    iStack_18 = (int)*(short *)((int)this + 0x4b) - (int)(short)((ulonglong)(uVar3 >> 0x10) % 5);
    if (iStack_18 < 0) {
      iStack_18 = -iStack_18;
    }
    iStack_18 = iStack_18 % 5;
  }
LAB_0057dbe9:
  do {
    sVar2 = (short)uVar11;
    sVar12 = (short)uVar10;
    sVar13 = (short)iStack_18;
    bVar1 = thunk_FUN_004961b0(sVar2,sVar12,sVar13);
    if (((CONCAT31(extraout_var,bVar1) != 0) &&
        (((sVar2 < 0 || (DAT_007fb240 <= sVar2)) ||
         ((sVar12 < 0 ||
          ((((DAT_007fb242 <= sVar12 || (sVar13 < 0)) || (DAT_007fb244 <= sVar13)) ||
           (*(int *)(DAT_007fb248 +
                    ((int)sVar12 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar13 + (int)sVar2)
                    * 8) == 0)))))))) &&
       (((sVar2 < 0 || (DAT_007fb240 <= sVar2)) ||
        ((sVar12 < 0 ||
         (((DAT_007fb242 <= sVar12 || (sVar13 < 0)) ||
          ((DAT_007fb244 <= sVar13 ||
           (*(int *)(DAT_007fb248 + 4 +
                    ((int)sVar12 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar13 + (int)sVar2)
                    * 8) == 0)))))))))) {
      *param_1 = uVar11;
      *param_2 = uVar10;
      *param_3 = iStack_18;
      return 1;
    }
    bVar1 = (int)(uVar11 - (int)*(short *)((int)this + 0x47)) < 0;
    if (uVar11 == (int)*(short *)((int)this + 0x47) || bVar1) {
      if (bVar1) {
        uVar11 = uVar11 + 1;
        goto LAB_0057dbe9;
      }
      bVar1 = (int)(uVar10 - (int)*(short *)((int)this + 0x49)) < 0;
      if (uVar10 == (int)*(short *)((int)this + 0x49) || bVar1) {
        if (!bVar1) goto LAB_0057dd0c;
        uVar10 = uVar10 + 1;
        goto LAB_0057dbe9;
      }
      uVar10 = uVar10 - 1;
      uVar3 = uVar10;
    }
    else {
      uVar11 = uVar11 - 1;
      uVar3 = uVar11;
    }
    if ((int)uVar3 < 0) {
LAB_0057dd0c:
      iVar9 = (*(short *)((int)this + 0x6c) + 0x2d) % 0x168;
      *param_4 = iVar9;
      while (iVar9 < 0) {
        iVar9 = *param_4 + 0x168;
        *param_4 = iVar9;
      }
      return 2;
    }
  } while( true );
}

