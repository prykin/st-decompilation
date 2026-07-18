
undefined4 __fastcall thunk_FUN_004e46f0(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_8;
  
  if (param_1[0x135] + 0x19U <= *(uint *)(DAT_00802a38 + 0xe4)) {
    iVar5 = param_1[0x136];
    param_1[0x135] = *(uint *)(DAT_00802a38 + 0xe4);
    iStack_8 = 0;
    do {
      iVar1 = iVar5 % 0x1d + -0xf + param_1[0x16c];
      iVar3 = iVar5 / 0x1d + -0xf + param_1[0x16d];
      if ((((-1 < iVar1) && (iVar1 < DAT_007fb240)) && (-1 < iVar3)) && (iVar3 < DAT_007fb242)) {
        iVar3 = DAT_007fb240 * iVar3 + DAT_007fa168;
        bVar2 = *(byte *)(iVar3 + iVar1);
        uVar4 = (uint)bVar2;
        if (uVar4 != 0) {
          if (9 < uVar4) {
            uVar4 = 10;
          }
          *(byte *)(iVar3 + iVar1) = bVar2 - (char)uVar4;
          iVar1 = param_1[0x134];
          iStack_8 = iStack_8 + uVar4;
          param_1[0x134] = iVar1 + uVar4;
          if (99 < (int)(iVar1 + uVar4)) {
            thunk_FUN_004e4670((int)param_1);
          }
        }
      }
      iVar5 = iVar5 + 1;
      if (0x348 < iVar5) {
        iVar5 = 0;
      }
    } while ((iVar5 != param_1[0x136]) && (iStack_8 < 10));
    param_1[0x136] = iVar5;
    if ((iStack_8 == 0) && (param_1[0x137] == 0)) {
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        param_1[0x137] = 1;
        iVar5 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1[4] >> 8),(char)param_1[9]),
                                   CONCAT22((short)((uint)param_1[9] >> 0x10),(short)param_1[0xc]));
        if ((iVar5 != 0) && (*(undefined4 **)(iVar5 + 0x1c) != (undefined4 *)0x0)) {
          iStack_10 = param_1[6];
          uStack_12 = *(undefined2 *)((int)param_1 + 0x32);
          uStack_18 = 0x5d99;
          uStack_14 = 1;
          (**(code **)**(undefined4 **)(iVar5 + 0x1c))(auStack_28);
        }
        (**(code **)(*param_1 + 0x90))(4,0x3cf);
      }
    }
  }
  return 0;
}

