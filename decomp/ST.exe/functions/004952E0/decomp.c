
void __fastcall FUN_004952e0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *pvVar4;
  
  sVar1 = *(short *)(param_1 + 0x66f);
  sVar2 = *(short *)(param_1 + 0x673);
  sVar3 = *(short *)(param_1 + 0x671);
  if (((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar3)) &&
      ((sVar3 < DAT_007fb242 && (-1 < sVar2)))) &&
     ((sVar2 < DAT_007fb244 &&
      ((pvVar4 = *(void **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                           (int)sVar1) * 8), pvVar4 != (void *)0x0 &&
       (*(int *)((int)pvVar4 + 0x20) == 1000)))))) {
    thunk_FUN_004b7d50(pvVar4,param_1);
  }
  sVar1 = *(short *)(param_1 + 0x423);
  sVar2 = *(short *)(param_1 + 0x427);
  sVar3 = *(short *)(param_1 + 0x425);
  if ((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar3)) &&
     (((sVar3 < DAT_007fb242 && (-1 < sVar2)) &&
      ((sVar2 < DAT_007fb244 &&
       ((pvVar4 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                            (int)sVar1) * 8), pvVar4 != (void *)0x0 &&
        (*(int *)((int)pvVar4 + 0x20) == 1000)))))))) {
    thunk_FUN_004b7d50(pvVar4,param_1);
  }
  return;
}

