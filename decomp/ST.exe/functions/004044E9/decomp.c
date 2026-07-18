
undefined4 __fastcall thunk_FUN_005ebd80(void *param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  short sVar9;
  
  sVar9 = *(short *)((int)param_1 + 0x34a);
  bVar5 = false;
  bVar4 = false;
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x242) = sVar9;
  sVar9 = *(short *)((int)param_1 + 0x34c);
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x244) = sVar9;
  sVar9 = *(short *)((int)param_1 + 0x34e);
  if (sVar9 < 0) {
    sVar9 = ((sVar9 / 200 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar9 / 200 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x246) = sVar9;
  *(undefined4 *)((int)param_1 + 0x231) = 0xfd;
  if ((((short)(*(short *)((int)param_1 + 0x46b) * 0xc9 + 100) != *(short *)((int)param_1 + 0x34a))
      || ((short)(*(short *)((int)param_1 + 0x46f) * 0xc9 + 100) != *(short *)((int)param_1 + 0x34c)
         )) || ((short)(*(short *)((int)param_1 + 0x473) * 200 + 100) !=
                *(short *)((int)param_1 + 0x34e))) {
    *(undefined2 *)((int)param_1 + 0x242) = *(undefined2 *)((int)param_1 + 0x46b);
    *(undefined2 *)((int)param_1 + 0x244) = *(undefined2 *)((int)param_1 + 0x46f);
    *(undefined2 *)((int)param_1 + 0x246) = *(undefined2 *)((int)param_1 + 0x473);
    bVar5 = true;
  }
  sVar9 = *(short *)((int)param_1 + 0x242);
  sVar1 = *(short *)((int)param_1 + 0x244);
  sVar2 = *(short *)((int)param_1 + 0x246);
  if ((((((sVar9 < 0) || (DAT_007fb240 <= sVar9)) ||
        ((sVar1 < 0 || ((DAT_007fb242 <= sVar1 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) ||
      (*(int *)(DAT_007fb248 +
               ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar1 + (int)sVar9) * 8)
       == 0)) && (iVar6 = thunk_FUN_00495ec0(sVar9,sVar1,sVar2,0,(int)param_1), iVar6 == 0)) {
    *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + '\x01';
    bVar4 = true;
  }
  else {
    sVar9 = *(short *)((int)param_1 + 0x242);
    sVar1 = *(short *)((int)param_1 + 0x246);
    sVar2 = *(short *)((int)param_1 + 0x244);
    if (sVar9 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar9) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar2) {
      return 0;
    }
    if (sVar1 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar1) {
      return 0;
    }
    piVar3 = *(int **)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar9)
                      * 8);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar6 = (**(code **)(*piVar3 + 0x2c))();
    if (((iVar6 != 0x1b) && (iVar6 != 7)) && (iVar6 != 0x13)) {
      return 0;
    }
    iVar6 = (**(code **)(*piVar3 + 0x114))(0xfe);
    if (iVar6 == 0) {
      return 0;
    }
    (**(code **)(*piVar3 + 0x118))(*(undefined4 *)((int)param_1 + 0x18));
    *(int *)((int)param_1 + 0x2a3) = piVar3[9];
    *(undefined2 *)((int)param_1 + 0x2ab) = *(undefined2 *)((int)piVar3 + 0x32);
    *(int *)((int)param_1 + 0x2a7) = piVar3[6];
    *(undefined1 *)((int)param_1 + 0x24e) = 1;
    *(undefined1 *)((int)param_1 + 0x24f) = 1;
    *(undefined4 *)((int)param_1 + 0x23a) = 4;
    if (*(void **)((int)param_1 + 0x211) != (void *)0x0) {
      FUN_006ea460(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                   *(int *)((int)piVar3 + 0x1ed));
    }
    bVar5 = false;
  }
  *(undefined1 *)((int)param_1 + 0x251) = *(undefined1 *)((int)param_1 + 0x350);
  *(undefined4 *)((int)param_1 + 0x236) = 0;
  iVar6 = (int)((ulonglong)((longlong)*(int *)((int)param_1 + 0x350) * -0x77777777) >> 0x20) +
          *(int *)((int)param_1 + 0x350);
  *(int *)((int)param_1 + 0x277) = (int)*(short *)((int)param_1 + 0x34a);
  *(int *)((int)param_1 + 0x2be) = (int)*(short *)((int)param_1 + 0x34a);
  *(int *)((int)param_1 + 0x27b) = (int)*(short *)((int)param_1 + 0x34c);
  *(int *)((int)param_1 + 0x27f) = (int)*(short *)((int)param_1 + 0x34e);
  *(int *)((int)param_1 + 0x2ba) = (iVar6 >> 3) - (iVar6 >> 0x1f);
  *(int *)((int)param_1 + 0x2c2) = (int)*(short *)((int)param_1 + 0x34c);
  *(int *)((int)param_1 + 0x2c6) = (int)*(short *)((int)param_1 + 0x34e);
  uVar7 = thunk_FUN_005ec5e0(*(int *)((int)param_1 + 0x33e));
  *(undefined4 *)((int)param_1 + 0x2b1) = uVar7;
  *(undefined1 *)((int)param_1 + 0x235) = *(undefined1 *)((int)param_1 + 0x332);
  *(undefined4 *)((int)param_1 + 0x23e) = 2000;
  if (bVar4) {
    if (bVar5) {
      iVar6 = thunk_FUN_005ecd70(param_1,(int)(short)(*(short *)((int)param_1 + 0x242) * 0xc9 + 100)
                                 ,(int)(short)(*(short *)((int)param_1 + 0x244) * 0xc9 + 100),
                                 (int)(short)(*(short *)((int)param_1 + 0x246) * 200 + 100),
                                 *(int *)((int)param_1 + 0x350),'\x01',0x1e);
      if (iVar6 != 0) {
        *(undefined4 *)((int)param_1 + 0x23a) = 2;
      }
    }
    else {
      uVar8 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar8;
      thunk_FUN_005ecd70(param_1,*(int *)((int)param_1 + 0x277),*(int *)((int)param_1 + 0x27b),
                         *(int *)((int)param_1 + 0x27f) + -0x1e,*(int *)((int)param_1 + 0x350),'\0',
                         0x1e - (uVar8 >> 0x10) % 0xb);
      *(undefined4 *)((int)param_1 + 0x23a) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x2d6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2e0) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  return 1;
}

