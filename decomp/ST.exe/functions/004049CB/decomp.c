
undefined4 __fastcall thunk_FUN_00490570(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = *(short *)(param_1 + 0x4b);
  if (sVar1 < 1) {
    sVar2 = *(short *)(param_1 + 0x49);
    sVar3 = *(short *)(param_1 + 0x47);
    if (((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) || (sVar2 < 0)) ||
        ((DAT_007fb242 <= sVar2 || (sVar1 < 0)))) ||
       ((DAT_007fb244 <= sVar1 ||
        (*(int *)(DAT_007fb248 + 4 +
                 ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar3) * 8)
         == 0)))) {
      return 0;
    }
  }
  else {
    sVar2 = *(short *)(param_1 + 0x47);
    sVar3 = *(short *)(param_1 + 0x49);
    if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
        (((DAT_007fb242 <= sVar3 || (sVar1 < 0)) ||
         ((DAT_007fb244 <= sVar1 ||
          (*(int *)(DAT_007fb248 + 4 +
                   ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar2) *
                   8) == 0)))))) &&
       ((sVar4 = sVar1 + -1, sVar2 < 0 ||
        ((((DAT_007fb240 <= sVar2 || (sVar3 < 0)) ||
          ((DAT_007fb242 <= sVar3 ||
           ((((sVar4 < 0 || (DAT_007fb244 <= sVar4)) ||
             (*(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar2)
                      * 8) == 0)) ||
            (*(short *)(DAT_007fb280 +
                       ((sVar1 + -1) * (int)DAT_007fb27e + (int)sVar3 * (int)DAT_007fb278 +
                       (int)sVar2) * 2) == 0)))))) &&
         (((((sVar2 < 0 || (DAT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
           ((DAT_007fb242 <= sVar3 || (sVar4 < 0)))) ||
          ((DAT_007fb244 <= sVar4 ||
           (*(int *)(DAT_007fb248 + 4 +
                    ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar2) *
                    8) == 0)))))))))) {
      return 0;
    }
  }
  return 1;
}

