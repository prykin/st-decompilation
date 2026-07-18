
int __thiscall thunk_FUN_006139a0(void *this,int *param_1,int *param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  iStack_18 = 0;
  iStack_10 = 0;
  if (*(int *)((int)this + 0x256) != 1) {
    if (*(int *)((int)this + 0x256) != 2) {
      return 0;
    }
    iVar5 = *(int *)((int)this + 0x298);
    iVar7 = *(int *)(DAT_00802a38 + 0xe4);
    *(int *)((int)this + 0x298) = iVar7;
    iVar5 = (iVar7 - iVar5) * *(int *)((int)this + 0x288);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    iVar7 = *(int *)((int)this + 0x280);
    sVar2 = *(short *)((int)this + 0x25c);
    iVar6 = (*(int *)((int)this + 0x284) * iVar5) / 10000 + (int)*(short *)((int)this + 0x25e);
    if ((*(int *)((int)this + 0x20c) == 4) && (*(short *)((int)this + 0x270) != 0)) {
      iVar6 = iVar6 + *(short *)((int)this + 0x270);
    }
    *param_1 = (*(int *)((int)this + 0x27c) * iVar5) / 10000 + (int)*(short *)((int)this + 0x25a);
    *param_2 = (iVar7 * iVar5) / 10000 + (int)sVar2;
    *param_3 = iVar6;
    return 1;
  }
  iVar5 = *(int *)((int)this + 0x298);
  iVar7 = *(int *)(DAT_00802a38 + 0xe4);
  *(int *)((int)this + 0x298) = iVar7;
  iStack_14 = (iVar7 - iVar5) * *(int *)((int)this + 0x288);
  iVar7 = *(int *)((int)this + 0x28c) + iStack_14;
  *(int *)((int)this + 0x28c) = iVar7;
  iVar6 = iVar7 - *(int *)((int)this + 0x290);
  iVar5 = *(int *)((int)this + 0x2dd) + *(int *)((int)this + 0x2d9) * 0x1c;
  if (*(int *)(iVar5 + 8) < iVar6) {
    iVar6 = iVar6 - *(int *)(iVar5 + 8);
    puStack_c = (undefined4 *)(*(int *)((int)this + 0x2d9) + 1);
    *(int *)((int)this + 0x290) = iVar7 - iVar6;
    *(undefined4 **)((int)this + 0x2d9) = puStack_c;
    if ((2 < *(int *)((int)this + 0x2d5)) && (*(int *)((int)this + 0x2d5) + -3 <= (int)puStack_c)) {
      if (*(char *)((int)this + 0x2ea) != '\0') {
        iVar5 = thunk_FUN_00616280(this,&iStack_24,&iStack_20,&iStack_1c);
        if ((-1 < iVar5) &&
           (iVar5 = thunk_FUN_00616a80(this,iStack_24,iStack_20,iStack_1c,param_1,param_2,param_3),
           iVar5 != 0)) {
          return 1;
        }
        *(undefined4 *)((int)this + 0x256) = 2;
        *(undefined4 *)((int)this + 0x20c) = 4;
        *(undefined2 *)((int)this + 0x270) = 0xffff;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        *(uint *)((int)this + 0x294) = (uVar4 >> 0x10) % 0xb + 10 + *(int *)(DAT_00802a38 + 0xe4);
        *(undefined4 *)((int)this + 0x298) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        goto LAB_00613c8b;
      }
      if (*(int *)((int)this + 0x2d1) != 0) {
        sVar2 = *(short *)((int)this + 0x25e);
        if (sVar2 < 0) {
          iVar5 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                         (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar5 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
        }
        sVar2 = *(short *)((int)this + 0x25c);
        if (sVar2 < 0) {
          iVar7 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                         (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        sVar2 = *(short *)((int)this + 0x25a);
        if (sVar2 < 0) {
          iVar3 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                         (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        iVar5 = thunk_FUN_006151e0(this,puStack_c,iVar3,iVar7,iVar5);
        if ((iVar5 != 0) && (*(char *)((int)this + 0x2ea) == '\0')) {
          return iStack_8;
        }
      }
    }
    iVar7 = *(int *)((int)this + 0x2d9);
    if (*(int *)((int)this + 0x2d5) + -1 <= iVar7) {
      *(undefined4 *)((int)this + 0x20c) = 4;
      *(undefined2 *)((int)this + 0x270) = 0xffff;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *(uint *)((int)this + 0x294) = (uVar4 >> 0x10) % 0xb + 10 + *(int *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)this + 0x298) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)this + 0x256) = 2;
LAB_00613c8b:
      iVar5 = thunk_FUN_006173a0(this,iStack_14,param_1,param_2,param_3);
      if (0 < iVar5) {
        return iVar5;
      }
      thunk_FUN_0060ec00(this);
      *(undefined4 *)((int)this + 0x20c) = 9;
      return iVar5;
    }
    iVar5 = *(int *)((int)this + 0x2dd) + iVar7 * 0x1c;
    if (*(int *)(*(int *)((int)this + 0x2dd) + 0x18 + iVar7 * 0x1c) != 8) {
      *(int *)((int)this + 0x27c) =
           ((short)(&DAT_007ed570)[*(short *)(iVar5 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar5 + 6) * 4);
      *(int *)((int)this + 0x280) =
           ((short)(&DAT_007ed572)[*(short *)(iVar5 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar5 + 6) * 4);
      *(int *)((int)this + 0x284) =
           ((short)(&DAT_007ed574)[*(short *)(iVar5 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar5 + 6) * 4);
    }
  }
  iVar7 = *(int *)(iVar5 + 0x18);
  if (iVar7 == 0) {
    iStack_14 = (iVar6 * 51000) / (*(int *)(&DAT_007cfe74 + *(short *)(iVar5 + 6) * 4) * 0xc9);
  }
  else {
    if (iVar7 == 8) {
      iStack_14 = (*(int *)((int)this + 0x2e1) * iVar6) / *(int *)(iVar5 + 8);
    }
    else {
      iStack_14 = (iVar6 * 51000) / (*(int *)(&DAT_007cfe74 + *(short *)(iVar5 + 6) * 4) * 0xc9);
    }
    iStack_18 = thunk_FUN_006141b0(this,iStack_14,iVar7,&iStack_28,&iStack_10);
  }
  psVar1 = (short *)(*(int *)((int)this + 0x2dd) + *(int *)((int)this + 0x2d9) * 0x1c);
  iStack_8 = (*(int *)((int)this + 0x27c) * iVar6) / 10000 + (int)*psVar1;
  puStack_c = (undefined4 *)((*(int *)((int)this + 0x280) * iVar6) / 10000 + (int)psVar1[1]);
  iVar5 = (*(int *)((int)this + 0x284) * iVar6) / 10000 + (int)psVar1[2];
  if (iStack_18 != 0) {
    iStack_8 = iStack_8 + (*(int *)(psVar1 + 6) * iStack_10) / 10000;
    puStack_c = (undefined4 *)((int)puStack_c + (*(int *)(psVar1 + 8) * iStack_10) / 10000);
    iVar5 = iVar5 + (*(int *)(psVar1 + 10) * iStack_10) / 10000;
  }
  if (((*(int *)((int)this + 0x2d9) == 0) && (*(int *)((int)this + 0x278) != 0)) && (iStack_14 != 0)
     ) {
    iStack_8 = iStack_8 + (*(short *)((int)this + 0x26c) * iStack_14) / 0x33;
    puStack_c = (undefined4 *)((int)puStack_c + (*(short *)((int)this + 0x26e) * iStack_14) / 0x33);
    iVar5 = iVar5 + (*(short *)((int)this + 0x270) * iStack_14) / 0x33;
  }
  *param_1 = iStack_8;
  *param_2 = (int)puStack_c;
  *param_3 = iVar5;
  return 1;
}

