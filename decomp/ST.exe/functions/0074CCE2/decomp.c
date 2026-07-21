
int __thiscall FUN_0074cce2(void *this,int *param_1)

{
  int iVar1;

  if (*(int *)(*(int *)((int)this + 0x8c) + 200) == 0) {
    if ((*(int *)(*(int *)((int)this + 0x8c) + 0x9c) == (*(int **)((int)this + 0x90))[0x26]) ||
       (param_1 = FUN_0074cb34(this,param_1), param_1 != (int *)0x0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)this + 0x68))(param_1);
      if (iVar1 < 0) {
        if (*(int *)(*(int *)((int)this + 0x8c) + 0x9c) !=
            *(int *)(*(int *)((int)this + 0x90) + 0x98)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
      else {
        if (iVar1 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))(param_1);
        }
        else if (iVar1 == 1) {
          iVar1 = 0;
          *(undefined4 *)((int)this + 0x54) = 1;
          if (*(int *)((int)this + 0x58) == 0) {
            FUN_00747406(this,0xb,(int *)0x0,0);
            *(undefined4 *)((int)this + 0x58) = 1;
          }
        }
        if (*(int *)(*(int *)((int)this + 0x8c) + 0x9c) !=
            *(int *)(*(int *)((int)this + 0x90) + 0x98)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))(param_1);
  }
  return iVar1;
}

