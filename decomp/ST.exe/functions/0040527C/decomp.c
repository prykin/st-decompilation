
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_005f95b0(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unkbyte10 extraout_ST0;
  longlong lVar10;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined2 *puStack_14;
  int iStack_10;
  int iStack_c;
  short sStack_8;
  short sStack_6;
  
  iVar7 = 0;
  uStack_1c = 0;
  if (*(int *)((int)param_1 + 0x2e6) == 0) {
    return 0;
  }
  uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar1;
  uStack_18 = (uVar1 >> 0x10) % 0x169;
  *(uint *)(*(int *)((int)param_1 + 0x2e6) + 0x4c) = uStack_18;
  fcos((float10)uStack_18 * (float10)_DAT_0079c70c);
  lVar10 = __ftol();
  fsin(extraout_ST0);
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x50) = (int)lVar10;
  lVar10 = __ftol();
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x54) = (int)lVar10;
  thunk_FUN_00416270(param_1,&sStack_8,&sStack_6,(undefined2 *)&iStack_c);
  *(int *)((int)param_1 + 0x2c5) = (int)sStack_6;
  *(int *)((int)param_1 + 0x2c1) = (int)sStack_8;
  *(int *)((int)param_1 + 0x2c9) = (int)(short)iStack_c;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x34) = (int)sStack_8;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x38) = (int)sStack_6;
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x40) =
       *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x14);
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x44) =
       *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x18);
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x48) =
       *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x1c);
  iStack_c = iStack_c + 0x14;
  sVar5 = (short)iStack_c;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x3c) = (int)sVar5;
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x1c);
  iVar8 = *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x3c) - iVar9;
  if (iVar8 < 1) {
    return 0;
  }
  uStack_18 = (uint)(short)(((short)(iVar8 / 200) + (short)(iVar8 >> 0x1f)) -
                           (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
  if ((int)uStack_18 < 1) {
    iVar2 = FUN_006aac70(200);
    iStack_10 = 10;
    iVar9 = 0;
    do {
      iVar4 = iVar9 + 4;
      *(undefined2 *)(iVar9 + 2 + iVar2) = 0;
      iVar3 = (iStack_10 / 2 + iVar8) / iStack_10;
      iVar7 = iVar7 + iVar3;
      iVar8 = iVar8 - iVar3;
      *(short *)(iVar9 + iVar2) = (short)iVar7;
      iStack_10 = iStack_10 + -1;
      iVar9 = iVar4;
    } while (iVar4 < 0x28);
    *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x50) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x54) = 0;
    *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x58) = iVar2;
    *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x5c) = 10;
    return 1;
  }
  sVar6 = (short)(iVar9 >> 0x1f);
  if (iVar9 < 0) {
    iVar7 = (short)(((short)(iVar9 / 200) + sVar6) - (short)((longlong)iVar9 * 0x51eb851f >> 0x3f))
            + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(iVar9 / 200) + sVar6) -
                        (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
  }
  if (sVar5 < 0) {
    iVar9 = (short)((sVar5 / 200 + (sVar5 >> 0xf)) -
                   (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar9 = (int)(short)((sVar5 / 200 + (sVar5 >> 0xf)) -
                        (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f));
  }
  if (sStack_6 < 0) {
    sVar5 = ((sStack_6 / 0xc9 + (sStack_6 >> 0xf)) -
            (short)((longlong)(int)sStack_6 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = (sStack_6 / 0xc9 + (sStack_6 >> 0xf)) -
            (short)((longlong)(int)sStack_6 * 0x28c1979 >> 0x3f);
  }
  if (sStack_8 < 0) {
    sVar6 = ((sStack_8 / 0xc9 + (sStack_8 >> 0xf)) -
            (short)((longlong)(int)sStack_8 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar6 = (sStack_8 / 0xc9 + (sStack_8 >> 0xf)) -
            (short)((longlong)(int)sStack_8 * 0x28c1979 >> 0x3f);
  }
  iVar7 = thunk_FUN_005f9bd0(sVar6,sVar5,iVar9,iVar7,&iStack_20,&iStack_24);
  switch(uStack_18) {
  case 1:
    iStack_10 = 0x14;
    break;
  case 2:
    iStack_10 = 0x1c;
    break;
  case 3:
    iStack_10 = 0x22;
    break;
  case 4:
    iStack_10 = 0x2a;
    break;
  default:
    iStack_10 = 0x28;
  }
  if (iVar7 == 0) {
    iVar7 = *(int *)((int)param_1 + 0x2e6);
    uStack_18 = 4;
    uStack_64 = *(undefined4 *)(iVar7 + 0x1c);
    iStack_60 = *(int *)(iVar7 + 0x1c) + 0x32;
    uStack_3c = 0xaa;
    iStack_58 = (int)(short)iStack_c;
    uStack_38 = 0;
    iStack_5c = iStack_58 + -0x32;
  }
  else {
    iStack_10 = iStack_10 + 8;
    sVar5 = (short)iStack_c >> 0xf;
    if (iVar7 == 1) {
      iVar7 = *(int *)((int)param_1 + 0x2e6);
      uStack_18 = 5;
      uStack_64 = *(undefined4 *)(iVar7 + 0x1c);
      iStack_60 = *(int *)(iVar7 + 0x1c) + 0x32;
      iStack_54 = (int)(short)iStack_c;
      if ((short)iStack_c < 0) {
        iVar9 = (short)(((short)iStack_c / 200 + sVar5) -
                       (short)((longlong)iStack_54 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)iStack_c / 200 + sVar5) -
                            (short)((longlong)iStack_54 * 0x51eb851f >> 0x3f));
      }
      uStack_3c = 0x10e;
      uStack_38 = 0xaa;
      iStack_5c = *(int *)(iVar7 + 0x1c) + (iVar9 - iStack_20) * 200;
      iStack_58 = iStack_54 + -0x32;
      uStack_34 = 0;
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x2e6);
      uStack_18 = 6;
      uStack_64 = *(undefined4 *)(iVar7 + 0x1c);
      iStack_60 = *(int *)(iVar7 + 0x1c) + 0x32;
      iStack_50 = (int)(short)iStack_c;
      if ((short)iStack_c < 0) {
        iVar8 = (int)(short)(((short)iStack_c / 200 + sVar5) -
                            (short)((longlong)iStack_50 * 0x51eb851f >> 0x3f));
        iVar9 = iVar8 + -1;
      }
      else {
        iVar9 = (int)(short)(((short)iStack_c / 200 + sVar5) -
                            (short)((longlong)iStack_50 * 0x51eb851f >> 0x3f));
        iVar8 = iVar9;
      }
      uStack_3c = 0xb4;
      iStack_5c = *(int *)(iVar7 + 0x1c) + (iVar9 - iStack_24) * 200;
      if ((short)iStack_c < 0) {
        iVar8 = iVar8 + -1;
      }
      uStack_38 = 0xb4;
      uStack_34 = 0xaa;
      iStack_58 = *(int *)(iVar7 + 0x1c) + (iVar8 - iStack_20) * 200;
      iStack_54 = iStack_50 + -0x32;
      if (iStack_50 + 1 == iStack_20) {
        uStack_38 = 0x10e;
      }
      uStack_30 = 0;
    }
  }
  uStack_40 = 0;
  uStack_44 = 0;
  puStack_14 = *(undefined2 **)(iVar7 + 0x58);
  if (puStack_14 == (undefined2 *)0x0) {
    puStack_14 = (undefined2 *)FUN_006aac70(200);
  }
  iVar7 = iStack_10;
  iVar9 = thunk_FUN_0060e210(&uStack_64,&uStack_44,uStack_18,puStack_14,iStack_10);
  if (iVar9 != 0) {
    FUN_006ab060(&puStack_14);
    return uStack_1c;
  }
  *(undefined2 **)(*(int *)((int)param_1 + 0x2e6) + 0x58) = puStack_14;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x5c) = iVar7;
  return 1;
}

