
undefined4 __thiscall thunk_FUN_005f89f0(void *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar1;
  iVar4 = ((uVar3 >> 0x10) % 5 + *(int *)((int)this + 0x27d)) - param_1;
  iVar5 = ((uVar1 >> 0x10) % 5 + *(int *)((int)this + 0x281)) - param_1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (DAT_007fb240 <= iVar4) {
    iVar4 = DAT_007fb240 + -1;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (DAT_007fb242 <= iVar5) {
    iVar5 = DAT_007fb242 + -1;
  }
  param_1 = *(int *)((int)this + 0x285);
  while( true ) {
    sVar6 = (short)iVar4;
    sVar7 = (short)iVar5;
    sVar8 = (short)param_1;
    bVar2 = thunk_FUN_004961b0(sVar6,sVar7,sVar8);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (((((sVar6 < 0 || (DAT_007fb240 <= sVar6)) || (sVar7 < 0)) ||
         ((DAT_007fb242 <= sVar7 || (sVar8 < 0)))) ||
        ((DAT_007fb244 <= sVar8 ||
         (*(int *)(DAT_007fb248 +
                  ((int)sVar8 * (int)DAT_007fb246 + (int)DAT_007fb240 * (int)sVar7 + (int)sVar6) * 8
                  ) == 0)))))) break;
    param_1 = param_1 + 1;
    if ((4 < param_1) || (*(int *)((int)this + 0x285) + 2 < param_1)) break;
  }
  if ((-1 < param_1) && (param_1 < 5)) {
    *(int *)((int)this + 0x295) = iVar5;
    *(int *)((int)this + 0x291) = iVar4;
    *(int *)((int)this + 0x299) = param_1;
    return 1;
  }
  return 0;
}

