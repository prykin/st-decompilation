
int __thiscall FUN_00614ee0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  STFishC *this_00;
  STFishC *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_10 = 0;
  sVar1 = *(short *)((int)this + 0x2c5);
  sVar2 = *(short *)((int)this + 0x2c9);
  sVar3 = *(short *)((int)this + 0x2c7);
  local_14 = 0;
  local_18 = 0;
  if ((((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))) ||
      ((SHORT_007fb244 <= sVar2 ||
       ((this_00 = *(STFishC **)
                    (DAT_007fb248 +
                    ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                    (int)sVar1) * 8), this_00 == (STFishC *)0x0 ||
        (this_00->field_0018 != *(int *)((int)this + 0x2d1))))))) &&
     (iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x2d1),(int *)&local_1c),
     this_00 = local_1c, iVar4 == -4)) {
    return -1;
  }
  thunk_FUN_00416270(this_00,(undefined2 *)&local_10,&local_14,&local_18);
  if ((((short)local_10 == *(short *)((int)this + 0x2cb)) &&
      ((short)local_14 == *(short *)((int)this + 0x2cd))) &&
     ((short)local_18 == *(short *)((int)this + 0x2cf))) {
    return 0;
  }
  iVar5 = (int)(short)local_18 - (int)*(short *)((int)this + 499);
  iVar6 = (int)(short)local_14 - (int)*(short *)((int)this + 0x1f1);
  iVar4 = (int)(short)local_10 - (int)*(short *)((int)this + 0x1ef);
  if (iVar4 * iVar4 + iVar6 * iVar6 + iVar5 * iVar5 < 0x191) {
    iVar4 = 0;
  }
  else {
    STFishC::sub_004162B0(this_00,&local_a,&local_6,&local_8);
    if (((local_a == *(short *)((int)this + 0x2c5)) && (local_6 == *(short *)((int)this + 0x2c7)))
       && (local_8 == *(short *)((int)this + 0x2c9))) {
      iVar4 = 1;
    }
    else {
      iVar4 = *(short *)((int)this + 0x2c5) - param_2;
      iVar5 = *(short *)((int)this + 0x2c7) - param_3;
      iVar6 = *(short *)((int)this + 0x2c9) - param_4;
      iVar4 = ((local_8 - param_4) * (local_8 - param_4) + (local_6 - param_3) * (local_6 - param_3)
               + (local_a - param_2) * (local_a - param_2) <
              iVar6 * iVar6 + iVar5 * iVar5 + iVar4 * iVar4) + 1;
    }
    if (((param_1 == *(int *)((int)this + 0x2d5) + -3) && (iVar4 == 2)) ||
       ((param_1 == *(int *)((int)this + 0x2d5) + -2 && (iVar4 != 0)))) {
      *(undefined2 *)((int)this + 0x2cb) = (undefined2)local_10;
      *(undefined2 *)((int)this + 0x2cd) = (undefined2)local_14;
      *(undefined2 *)((int)this + 0x2cf) = (undefined2)local_18;
      return iVar4;
    }
  }
  return iVar4;
}

