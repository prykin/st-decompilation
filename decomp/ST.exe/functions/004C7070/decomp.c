
undefined4 __thiscall FUN_004c7070(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 local_8;
  
  local_8 = 0;
  uVar3 = 0;
  if (*(int *)((int)this + 0x3dc) == 0) {
    if (*(int *)((int)this + 0x5b8) == 0) {
      return 1;
    }
    iVar5 = *(int *)((int)this + 0x5b8) + -1;
    if (-1 < iVar5) {
      sVar1 = *(short *)((int)this + 0x5b4);
      sVar2 = *(short *)((int)this + 0x5b0);
      do {
        if (sVar2 < 0) {
LAB_004c719b:
          sVar4 = -1;
LAB_004c716e:
          local_8 = 1;
LAB_004c7175:
          if (param_1 != 0) {
            return local_8;
          }
          if (sVar4 != 0) {
            return local_8;
          }
          if (iVar5 == 0) {
            return 1;
          }
        }
        else {
          sVar4 = (short)iVar5;
          if ((((DAT_007fb240 <= sVar2) || (sVar1 < 0)) || (DAT_007fb242 <= sVar1)) ||
             (((sVar4 < 0 || (DAT_007fb244 <= sVar4)) ||
              (*(int *)(DAT_007fb248 +
                       ((int)sVar4 * (int)DAT_007fb246 + (int)DAT_007fb240 * (int)sVar1 + (int)sVar2
                       ) * 8) == 0)))) {
            if (((sVar2 < 0) || (DAT_007fb240 <= sVar2)) ||
               ((sVar1 < 0 || (((DAT_007fb242 <= sVar1 || (sVar4 < 0)) || (DAT_007fb244 <= sVar4))))
               )) goto LAB_004c719b;
            sVar4 = *(short *)(DAT_007fb280 +
                              ((int)sVar4 * (int)DAT_007fb27e + (int)DAT_007fb278 * (int)sVar1 +
                              (int)sVar2) * 2);
            if (sVar4 == -1) goto LAB_004c716e;
            goto LAB_004c7175;
          }
        }
        iVar5 = iVar5 + -1;
        uVar3 = local_8;
      } while (-1 < iVar5);
    }
  }
  return uVar3;
}

