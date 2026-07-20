
undefined4 __thiscall FUN_00616280(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STWorldObject *this_00;
  STWorldObject *local_14;
  int local_10 [3];
  
  local_10[2] = 0;
  sVar1 = *(short *)((int)this + 0x2c5);
  sVar2 = *(short *)((int)this + 0x2c9);
  sVar3 = *(short *)((int)this + 0x2c7);
  local_10[1] = 0;
  local_10[0] = 0;
  if (((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
      (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) ||
       ((SHORT_007fb244 <= sVar2 ||
        ((this_00 = g_worldCells
                    [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                     (int)sVar1].objects[0], this_00 == (STWorldObject *)0x0 ||
         (*(int *)&this_00->field_0x18 != *(int *)((int)this + 0x2d1))))))))) &&
     (iVar4 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x2d1),(int *)&local_14),
     this_00 = local_14, iVar4 == -4)) {
    return 0xffffffff;
  }
  thunk_FUN_00416270(this_00,(undefined2 *)(local_10 + 2),local_10 + 1,local_10);
  *param_1 = (int)(short)local_10[2];
  *param_2 = (int)(short)local_10[1];
  *param_3 = (int)(short)local_10[0];
  if ((((short)local_10[2] == *(short *)((int)this + 0x2cb)) &&
      ((short)local_10[1] == *(short *)((int)this + 0x2cd))) &&
     ((short)local_10[0] == *(short *)((int)this + 0x2cf))) {
    return 0;
  }
  return 1;
}

