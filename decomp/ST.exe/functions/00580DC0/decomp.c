
undefined4 __fastcall FUN_00580dc0(void *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar5 = thunk_FUN_005809e0((short)*(undefined4 *)((int)param_1 + 0x245),
                             (short)*(undefined4 *)((int)param_1 + 0x249),
                             *(int *)((int)param_1 + 0x24d),*(int *)((int)param_1 + 0x255));
  if (iVar5 != 0) {
    iVar5 = thunk_FUN_0044a2c0(0xffff,param_1);
    if (iVar5 != 0) {
      thunk_FUN_00580380(param_1);
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x25d) = 0;
    thunk_FUN_004d84e0((int)param_1);
    sVar1 = *(short *)((int)param_1 + 0x24d);
    sVar2 = *(short *)((int)param_1 + 0x249);
    sVar3 = *(short *)((int)param_1 + 0x245);
    uVar6 = 1;
    if (((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar2)) &&
        ((sVar2 < DAT_007fb242 && (-1 < sVar1)))) &&
       ((sVar1 < DAT_007fb244 &&
        (piVar4 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 +
                           (int)sVar3) * 8), piVar4 != (int *)0x0)))) {
      iVar5 = (**(code **)(*piVar4 + 0x2c))();
      if (((iVar5 != 0x39) && (iVar5 = (**(code **)(*piVar4 + 0x2c))(), iVar5 != 0x4f)) &&
         (iVar5 = (**(code **)(*piVar4 + 0x2c))(), iVar5 != 0x5e)) {
        return 1;
      }
      thunk_FUN_004e0250((int)piVar4);
    }
  }
  return uVar6;
}

