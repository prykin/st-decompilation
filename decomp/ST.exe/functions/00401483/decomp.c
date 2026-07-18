
undefined4 __fastcall thunk_FUN_00603120(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  
  sVar1 = *(short *)(param_1 + 0x259);
  sVar4 = *(short *)(param_1 + 0x255);
  sVar5 = *(short *)(param_1 + 599);
  if (((((sVar4 < 0) || (DAT_007fb240 <= sVar4)) || (sVar5 < 0)) ||
      (((DAT_007fb242 <= sVar5 || (sVar1 < 0)) ||
       ((DAT_007fb244 <= sVar1 ||
        ((iVar2 = *(int *)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar5 +
                          (int)sVar4) * 8), iVar2 == 0 || (*(int *)(iVar2 + 0x20) != 1000)))))))) &&
     ((*(int *)(param_1 + 0x245) != 0 ||
      ((((((((short)(sVar4 + 1) < 0 || (DAT_007fb240 <= (short)(sVar4 + 1))) || (sVar5 < 0)) ||
          ((DAT_007fb242 <= sVar5 || (sVar1 < 0)))) || (DAT_007fb244 <= sVar1)) ||
        ((iVar2 = *(int *)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar5 +
                          (int)(short)(sVar4 + 1)) * 8), iVar2 == 0 ||
         (*(int *)(iVar2 + 0x20) != 1000)))) &&
       (((((sVar5 = sVar5 + 1, sVar4 < 0 ||
           (((DAT_007fb240 <= sVar4 || (sVar5 < 0)) || (DAT_007fb242 <= sVar5)))) ||
          (((sVar1 < 0 || (DAT_007fb244 <= sVar1)) ||
           (iVar2 = *(int *)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar5 +
                            (int)sVar4) * 8), iVar2 == 0)))) || (*(int *)(iVar2 + 0x20) != 1000)) &&
        ((((sVar4 = sVar4 + 1, sVar4 < 0 || (DAT_007fb240 <= sVar4)) ||
          ((sVar5 < 0 || (((DAT_007fb242 <= sVar5 || (sVar1 < 0)) || (DAT_007fb244 <= sVar1)))))) ||
         ((iVar2 = *(int *)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar5 +
                           (int)sVar4) * 8), iVar2 == 0 || (*(int *)(iVar2 + 0x20) != 1000))))))))))
     )) {
    if (*(char *)(param_1 + 0x3a6) != '\0') {
      *(undefined1 *)(param_1 + 0x3a6) = 0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (*(char *)(param_1 + 0x3a6) == '\0') {
      *(undefined1 *)(param_1 + 0x3a6) = 1;
      return uVar3;
    }
  }
  return uVar3;
}

