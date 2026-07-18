
int __thiscall FUN_005f5700(void *this,int param_1,int param_2)

{
  int iVar1;
  void *this_00;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined2 local_8;
  short local_6;
  
  iVar3 = param_1;
  local_c = 0;
  iVar1 = *(int *)((int)this + 0x111);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_14 = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                      (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                           (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = *(int *)((int)this + 0x115);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_1c = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                      (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_1c = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                           (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = param_2 / 0xc9;
  iVar6 = local_1c - (iVar1 + 1);
  local_10 = local_14 - (iVar1 + 1);
  local_1c = iVar1 + 2 + local_1c;
  local_14 = iVar1 + 2 + local_14;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if (DAT_007fb242 < local_1c) {
    local_1c = (int)DAT_007fb242;
  }
  if (DAT_007fb240 < local_14) {
    local_14 = (int)DAT_007fb240;
  }
  if ((4 < param_1) || (sVar2 = DAT_007fb240, param_1 < 0)) {
    return 0;
  }
  do {
    iVar1 = local_10;
    if (local_1c <= iVar6) {
      return local_c;
    }
    for (; iVar1 < local_14; iVar1 = iVar1 + 1) {
      sVar4 = (short)iVar1;
      if ((((-1 < sVar4) && (sVar4 < sVar2)) && (sVar7 = (short)iVar6, -1 < sVar7)) &&
         (((sVar7 < DAT_007fb242 && (sVar8 = (short)iVar3, -1 < sVar8)) &&
          ((sVar8 < DAT_007fb244 &&
           (this_00 = *(void **)(DAT_007fb248 +
                                ((int)sVar7 * (int)sVar2 + (int)DAT_007fb246 * (int)sVar8 +
                                (int)sVar4) * 8), this_00 != (void *)0x0)))))) {
        thunk_FUN_00416270(this_00,&local_6,(undefined2 *)((int)&param_1 + 2),&local_8);
        if (*(int *)((int)this_00 + 0x2c) == 1) {
          iVar5 = FUN_006aced8((int)local_6,(int)param_1._2_2_,*(int *)((int)this + 0x111),
                               *(int *)((int)this + 0x115));
          if (param_2 <= iVar5) {
            iVar5 = FUN_006aced8(local_6 + 100,(int)param_1._2_2_,*(int *)((int)this + 0x111),
                                 *(int *)((int)this + 0x115));
            if (param_2 <= iVar5) {
              iVar5 = FUN_006aced8((int)local_6,param_1._2_2_ + 100,*(int *)((int)this + 0x111),
                                   *(int *)((int)this + 0x115));
              if (param_2 <= iVar5) {
                iVar5 = FUN_006aced8(local_6 + 100,param_1._2_2_ + 100,*(int *)((int)this + 0x111),
                                     *(int *)((int)this + 0x115));
                if (param_2 <= iVar5) goto LAB_005f5985;
              }
            }
          }
        }
        else {
          iVar5 = FUN_006aced8((int)local_6,(int)param_1._2_2_,*(int *)((int)this + 0x111),
                               *(int *)((int)this + 0x115));
          if (param_2 <= iVar5) goto LAB_005f5985;
        }
        local_c = local_c + 1;
        thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x51),
                           (*(int *)((int)this + 0x7d) << 2) / (8 - iVar3),(int)this_00,
                           (short)*(undefined4 *)((int)this + 0x81),
                           *(undefined2 *)((int)this + 0x85),0xb5,0x110);
      }
LAB_005f5985:
      sVar2 = DAT_007fb240;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

