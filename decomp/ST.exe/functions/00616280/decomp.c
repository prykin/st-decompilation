
undefined4 __thiscall FUN_00616280(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  void *this_00;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  sVar1 = *(short *)((int)this + 0x2c5);
  sVar2 = *(short *)((int)this + 0x2c9);
  sVar3 = *(short *)((int)this + 0x2c7);
  local_c = 0;
  local_10 = 0;
  if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
      (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) ||
       ((DAT_007fb244 <= sVar2 ||
        ((this_00 = *(void **)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                              (int)sVar1) * 8), this_00 == (void *)0x0 ||
         (*(int *)((int)this_00 + 0x18) != *(int *)((int)this + 0x2d1))))))))) &&
     (iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x2d1),(int *)&local_14),
     this_00 = local_14, iVar4 == -4)) {
    return 0xffffffff;
  }
  thunk_FUN_00416270(this_00,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
  *param_1 = (int)(short)local_8;
  *param_2 = (int)(short)local_c;
  *param_3 = (int)(short)local_10;
  if ((((short)local_8 == *(short *)((int)this + 0x2cb)) &&
      ((short)local_c == *(short *)((int)this + 0x2cd))) &&
     ((short)local_10 == *(short *)((int)this + 0x2cf))) {
    return 0;
  }
  return 1;
}

