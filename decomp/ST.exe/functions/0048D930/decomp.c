
void __fastcall FUN_0048d930(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *pvVar4;
  
  if ((*(int *)(param_1 + 0x45d) == 0xc) || (*(int *)(param_1 + 0x459) == 0x70)) {
    sVar1 = *(short *)(param_1 + 0x49b);
    sVar2 = *(short *)(param_1 + 0x49f);
    sVar3 = *(short *)(param_1 + 0x49d);
    if ((((-1 < sVar1) && (((sVar1 < DAT_007fb240 && (-1 < sVar3)) && (sVar3 < DAT_007fb242)))) &&
        (((-1 < sVar2 && (sVar2 < DAT_007fb244)) &&
         (pvVar4 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                             (int)sVar1) * 8), pvVar4 != (void *)0x0)))) &&
       (*(int *)((int)pvVar4 + 0x18) == *(int *)(param_1 + 0x4a1))) {
      thunk_FUN_004e18e0(pvVar4,*(int *)(param_1 + 0x18));
      thunk_FUN_004e1690(pvVar4,*(int *)(param_1 + 0x18));
    }
    sVar1 = *(short *)(param_1 + 0x4a5);
    sVar2 = *(short *)(param_1 + 0x4a9);
    sVar3 = *(short *)(param_1 + 0x4a7);
    if (((-1 < sVar1) && (sVar1 < DAT_007fb240)) &&
       ((-1 < sVar3 &&
        ((((sVar3 < DAT_007fb242 && (-1 < sVar2)) && (sVar2 < DAT_007fb244)) &&
         ((pvVar4 = *(void **)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                              (int)sVar1) * 8), pvVar4 != (void *)0x0 &&
          (*(int *)((int)pvVar4 + 0x18) == *(int *)(param_1 + 0x4ab))))))))) {
      thunk_FUN_004e18e0(pvVar4,*(int *)(param_1 + 0x18));
      thunk_FUN_004e1690(pvVar4,*(int *)(param_1 + 0x18));
    }
  }
  if ((*(int *)(param_1 + 0x45d) == 0xd) || (*(int *)(param_1 + 0x459) == 0x71)) {
    sVar1 = *(short *)(param_1 + 0x52c);
    sVar2 = *(short *)(param_1 + 0x530);
    sVar3 = *(short *)(param_1 + 0x52e);
    if ((((-1 < sVar1) && (((sVar1 < DAT_007fb240 && (-1 < sVar3)) && (sVar3 < DAT_007fb242)))) &&
        (((-1 < sVar2 && (sVar2 < DAT_007fb244)) &&
         (pvVar4 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                             (int)sVar1) * 8), pvVar4 != (void *)0x0)))) &&
       (*(int *)((int)pvVar4 + 0x18) == *(int *)(param_1 + 0x532))) {
      thunk_FUN_004e18e0(pvVar4,*(int *)(param_1 + 0x18));
      thunk_FUN_004e1690(pvVar4,*(int *)(param_1 + 0x18));
    }
  }
  return;
}

