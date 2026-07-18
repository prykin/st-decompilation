
int __thiscall thunk_FUN_00614ee0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *this_00;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  uStack_10 = 0;
  sVar1 = *(short *)((int)this + 0x2c5);
  sVar2 = *(short *)((int)this + 0x2c9);
  sVar3 = *(short *)((int)this + 0x2c7);
  uStack_14 = 0;
  uStack_18 = 0;
  if ((((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) ||
      ((DAT_007fb244 <= sVar2 ||
       ((this_00 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                             (int)sVar1) * 8), this_00 == (void *)0x0 ||
        (*(int *)((int)this_00 + 0x18) != *(int *)((int)this + 0x2d1))))))) &&
     (iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x2d1),(int *)&pvStack_1c),
     this_00 = pvStack_1c, iVar4 == -4)) {
    return -1;
  }
  thunk_FUN_00416270(this_00,(undefined2 *)&uStack_10,(undefined2 *)&uStack_14,
                     (undefined2 *)&uStack_18);
  if ((((short)uStack_10 == *(short *)((int)this + 0x2cb)) &&
      ((short)uStack_14 == *(short *)((int)this + 0x2cd))) &&
     ((short)uStack_18 == *(short *)((int)this + 0x2cf))) {
    return 0;
  }
  iVar5 = (int)(short)uStack_18 - (int)*(short *)((int)this + 499);
  iVar6 = (int)(short)uStack_14 - (int)*(short *)((int)this + 0x1f1);
  iVar4 = (int)(short)uStack_10 - (int)*(short *)((int)this + 0x1ef);
  if (iVar4 * iVar4 + iVar6 * iVar6 + iVar5 * iVar5 < 0x191) {
    iVar4 = 0;
  }
  else {
    thunk_FUN_004162b0(this_00,&sStack_a,&sStack_6,&sStack_8);
    if (((sStack_a == *(short *)((int)this + 0x2c5)) && (sStack_6 == *(short *)((int)this + 0x2c7)))
       && (sStack_8 == *(short *)((int)this + 0x2c9))) {
      iVar4 = 1;
    }
    else {
      iVar4 = *(short *)((int)this + 0x2c5) - param_2;
      iVar5 = *(short *)((int)this + 0x2c7) - param_3;
      iVar6 = *(short *)((int)this + 0x2c9) - param_4;
      iVar4 = ((sStack_8 - param_4) * (sStack_8 - param_4) +
               (sStack_6 - param_3) * (sStack_6 - param_3) +
               (sStack_a - param_2) * (sStack_a - param_2) <
              iVar6 * iVar6 + iVar5 * iVar5 + iVar4 * iVar4) + 1;
    }
    if (((param_1 == *(int *)((int)this + 0x2d5) + -3) && (iVar4 == 2)) ||
       ((param_1 == *(int *)((int)this + 0x2d5) + -2 && (iVar4 != 0)))) {
      *(undefined2 *)((int)this + 0x2cb) = (undefined2)uStack_10;
      *(undefined2 *)((int)this + 0x2cd) = (undefined2)uStack_14;
      *(undefined2 *)((int)this + 0x2cf) = (undefined2)uStack_18;
      return iVar4;
    }
  }
  return iVar4;
}

