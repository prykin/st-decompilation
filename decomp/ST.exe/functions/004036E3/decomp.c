
undefined4 __fastcall thunk_FUN_005fc4a0(void *param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  
  sVar9 = *(short *)((int)param_1 + 0x34e);
  bVar6 = false;
  bVar5 = false;
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x242) = sVar9;
  sVar9 = *(short *)((int)param_1 + 0x350);
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x244) = sVar9;
  sVar9 = *(short *)((int)param_1 + 0x352);
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 200 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 200 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x246) = sVar9;
  *(undefined4 *)((int)param_1 + 0x231) = 0xfe;
  if ((((short)(*(short *)((int)param_1 + 0x46f) * 0xc9 + 100) != *(short *)((int)param_1 + 0x34e))
      || ((short)(*(short *)((int)param_1 + 0x473) * 0xc9 + 100) != *(short *)((int)param_1 + 0x350)
         )) || ((short)(*(short *)((int)param_1 + 0x477) * 200 + 100) !=
                *(short *)((int)param_1 + 0x352))) {
    bVar6 = true;
    *(undefined2 *)((int)param_1 + 0x242) = *(undefined2 *)((int)param_1 + 0x46f);
    *(undefined2 *)((int)param_1 + 0x244) = *(undefined2 *)((int)param_1 + 0x473);
    *(undefined2 *)((int)param_1 + 0x246) = *(undefined2 *)((int)param_1 + 0x477);
  }
  sVar9 = *(short *)((int)param_1 + 0x242);
  sVar2 = *(short *)((int)param_1 + 0x244);
  sVar3 = *(short *)((int)param_1 + 0x246);
  if ((((((sVar9 < 0) || (DAT_007fb240 <= sVar9)) ||
        ((sVar2 < 0 || ((DAT_007fb242 <= sVar2 || (sVar3 < 0)))))) || (DAT_007fb244 <= sVar3)) ||
      (*(int *)(DAT_007fb248 +
               ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar9) * 8)
       == 0)) && (iVar7 = thunk_FUN_00495ec0(sVar9,sVar2,sVar3,0,(int)param_1), iVar7 == 0)) {
    *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + '\x01';
    bVar5 = true;
  }
  else {
    sVar9 = *(short *)((int)param_1 + 0x242);
    sVar2 = *(short *)((int)param_1 + 0x246);
    sVar3 = *(short *)((int)param_1 + 0x244);
    if (sVar9 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar9) {
      return 0;
    }
    if (sVar3 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar3) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar2) {
      return 0;
    }
    piVar4 = *(int **)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar9)
                      * 8);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar7 = (**(code **)(*piVar4 + 0x2c))();
    if (((iVar7 != 0x1b) && (iVar7 != 7)) && (iVar7 != 0x13)) {
      return 0;
    }
    iVar7 = (**(code **)(*piVar4 + 0x114))(0xfe);
    if (iVar7 == 0) {
      return 0;
    }
    (**(code **)(*piVar4 + 0x118))(*(undefined4 *)((int)param_1 + 0x18));
    *(int *)((int)param_1 + 0x2a3) = piVar4[9];
    *(undefined2 *)((int)param_1 + 0x2ab) = *(undefined2 *)((int)piVar4 + 0x32);
    *(int *)((int)param_1 + 0x2a7) = piVar4[6];
    *(undefined1 *)((int)param_1 + 0x24e) = 1;
    *(undefined1 *)((int)param_1 + 0x24f) = 1;
    *(undefined4 *)((int)param_1 + 0x23a) = 4;
    if (*(void **)((int)param_1 + 0x211) != (void *)0x0) {
      FUN_006ea460(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                   *(int *)((int)piVar4 + 0x1ed));
    }
    bVar6 = false;
  }
  *(undefined1 *)((int)param_1 + 0x251) = *(undefined1 *)((int)param_1 + 0x354);
  iVar7 = (int)((ulonglong)((longlong)*(int *)((int)param_1 + 0x354) * -0x77777777) >> 0x20) +
          *(int *)((int)param_1 + 0x354);
  *(int *)((int)param_1 + 0x277) = (int)*(short *)((int)param_1 + 0x34e);
  *(int *)((int)param_1 + 0x2be) = (int)*(short *)((int)param_1 + 0x34e);
  *(int *)((int)param_1 + 0x27b) = (int)*(short *)((int)param_1 + 0x350);
  *(int *)((int)param_1 + 0x27f) = (int)*(short *)((int)param_1 + 0x352);
  *(int *)((int)param_1 + 0x2ba) = (iVar7 >> 3) - (iVar7 >> 0x1f);
  *(int *)((int)param_1 + 0x2c2) = (int)*(short *)((int)param_1 + 0x350);
  *(int *)((int)param_1 + 0x2c6) = (int)*(short *)((int)param_1 + 0x352);
  *(undefined4 *)((int)param_1 + 0x231) = 0xfe;
  uVar8 = thunk_FUN_005fcd40(*(int *)((int)param_1 + 0x33e));
  *(undefined4 *)((int)param_1 + 0x2b1) = uVar8;
  *(undefined1 *)((int)param_1 + 0x235) = *(undefined1 *)((int)param_1 + 0x332);
  *(undefined4 *)((int)param_1 + 0x236) = 0;
  *(undefined4 *)((int)param_1 + 0x23e) = 2000;
  if (bVar5) {
    if (*(short *)((int)param_1 + 0x342) == 1) {
      thunk_FUN_005ef4b0(param_1,(uint)*(byte *)((int)param_1 + 0x251));
      *(undefined4 *)((int)param_1 + 0x23a) = 2;
      *(undefined1 *)((int)param_1 + 0x2e9) = 1;
    }
    else if (bVar6) {
      iVar7 = thunk_FUN_005ecd70(param_1,(int)(short)(*(short *)((int)param_1 + 0x242) * 0xc9 + 100)
                                 ,(int)(short)(*(short *)((int)param_1 + 0x244) * 0xc9 + 100),
                                 (int)(short)(*(short *)((int)param_1 + 0x246) * 200 + 100),
                                 *(int *)((int)param_1 + 0x354),'\x01',0x1e);
      if (iVar7 != 0) {
        *(undefined4 *)((int)param_1 + 0x23a) = 2;
      }
    }
    else {
      uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar1;
      thunk_FUN_005ecd70(param_1,*(int *)((int)param_1 + 0x277),*(int *)((int)param_1 + 0x27b),
                         *(int *)((int)param_1 + 0x27f) + -0x1e,*(int *)((int)param_1 + 0x354),'\0',
                         0x1e - (uVar1 >> 0x10) % 0xb);
      *(undefined4 *)((int)param_1 + 0x23a) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x2d6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2e0) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  return 1;
}

