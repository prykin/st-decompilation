
void __thiscall FUN_005f91e0(void *this,int param_1,int param_2)

{
  int *this_00;
  int iVar1;
  short local_c [2];
  short local_8;
  short local_6;
  
  thunk_FUN_004162b0(this,&local_6,&local_8,local_c);
  local_c[0] = local_c[0] + -1;
  if (((((-1 < local_6) && (local_6 < DAT_007fb240)) && (-1 < local_8)) &&
      ((local_8 < DAT_007fb242 && (-1 < local_c[0])))) && (local_c[0] < DAT_007fb244)) {
    this_00 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)local_c[0] + (int)DAT_007fb240 * (int)local_8 +
                       (int)local_6) * 8);
    if ((this_00 != (int *)0x0) && (this_00[8] == 1000)) {
      iVar1 = (**(code **)(*this_00 + 0x2c))();
      if ((iVar1 == 0x6e) && (this_00[6] == *(int *)((int)this + 0x255))) {
        thunk_FUN_004dd7c0(this_00,*(int *)((int)this + 0x18),param_1);
        if (param_2 < 1) {
          thunk_FUN_004dd800(this_00,*(int *)((int)this + 0x18));
          thunk_FUN_004dd700(this_00,*(int *)((int)this + 0x18));
        }
      }
    }
  }
  return;
}

