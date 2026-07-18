
bool __fastcall thunk_FUN_0048dcf0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 1000000;
  sVar1 = *(short *)(param_1 + 0x4dd);
  sVar3 = *(short *)(param_1 + 0x4df);
  sVar2 = *(short *)(param_1 + 0x4e1) + 1;
  *(short *)(param_1 + 0x4fc) = sVar1;
  *(short *)(param_1 + 0x4fe) = sVar3;
  *(short *)(param_1 + 0x500) = sVar2;
  if (*(int *)(param_1 + 0x502) == 1) {
    uStack_8 = 0;
    do {
      iVar5 = 0;
      do {
        sVar1 = *(short *)(param_1 + 0x4e1) + 1;
        sVar2 = (short)iVar5 + *(short *)(param_1 + 0x4df);
        sVar3 = *(short *)(param_1 + 0x4dd) + (short)uStack_8;
        if ((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) ||
            ((sVar2 < 0 || (((DAT_007fb242 <= sVar2 || (sVar1 < 0)) || (DAT_007fb244 <= sVar1))))))
           || (*(int *)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar3
                       ) * 8) == 0)) {
          iVar4 = FUN_006aadd0((int)*(short *)(param_1 + 0x47),(int)*(short *)(param_1 + 0x49),
                               (int)*(short *)(param_1 + 0x4b),
                               *(short *)(param_1 + 0x4dd) + uStack_8,
                               *(short *)(param_1 + 0x4df) + iVar5,*(short *)(param_1 + 0x4e1) + 1);
          if (iVar4 < uStack_c) {
            *(short *)(param_1 + 0x4fc) = (short)uStack_8 + *(short *)(param_1 + 0x4dd);
            *(short *)(param_1 + 0x4fe) = (short)iVar5 + *(short *)(param_1 + 0x4df);
            *(short *)(param_1 + 0x500) = *(short *)(param_1 + 0x4e1) + 1;
            uStack_c = iVar4;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      uStack_8 = uStack_8 + 1;
    } while (uStack_8 < 2);
    return uStack_c != 1000000;
  }
  if ((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar3)) &&
     (((sVar3 < DAT_007fb242 && (-1 < sVar2)) &&
      ((sVar2 < DAT_007fb244 &&
       (*(int *)(DAT_007fb248 +
                ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1) * 8)
        != 0)))))) {
    return false;
  }
  return true;
}

