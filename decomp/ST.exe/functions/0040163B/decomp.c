
undefined4 __thiscall thunk_FUN_005fa8b0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *this_00;
  undefined4 uVar5;
  int *piStack_14;
  undefined4 uStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  sVar1 = *(short *)((int)this + 0x25d);
  sVar2 = *(short *)((int)this + 0x265);
  sVar3 = *(short *)((int)this + 0x261);
  uStack_10 = 0;
  if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
      ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) ||
     ((DAT_007fb244 <= sVar2 ||
      (this_00 = *(int **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                          (int)sVar1) * 8), this_00 == (int *)0x0)))) {
    if ((*(int *)((int)this + 0x255) == 0) ||
       (iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x255),(int *)&piStack_14),
       iVar4 == -4)) {
      return 0;
    }
    this_00 = piStack_14;
    uVar5 = 1;
  }
  else {
    uVar5 = uStack_10;
    if ((this_00[8] == 1000) &&
       (iVar4 = (**(code **)(*this_00 + 0x2c))(), uVar5 = uStack_10, iVar4 == 0x6e)) {
      uVar5 = 1;
    }
  }
  if (this_00 != (int *)0x0) {
    thunk_FUN_004162b0(this_00,&sStack_6,&sStack_8,&sStack_a);
    *param_1 = (int)sStack_6;
    *param_2 = (int)sStack_8;
    *param_3 = sStack_a + 1;
  }
  return uVar5;
}

