
void __thiscall FUN_005f5d10(void *this,int param_1)

{
  int iVar1;
  undefined4 local_c;
  short local_8;
  short local_6;

  if (param_1 != 0) {
    if (param_1 == 1) {
      *(undefined4 *)((int)this + 0x93) = *(undefined4 *)((int)this + 0x40);
      *(undefined4 *)((int)this + 0x97) = *(undefined4 *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x9b) = *(undefined4 *)((int)this + 0x48);
      *(undefined4 *)((int)this + 0x34) = 0;
LAB_005f5d4b:
      thunk_FUN_005f5e30(this,*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x44),
                         *(undefined4 *)((int)this + 0x48));
      *(undefined4 *)((int)this + 0x104) = 3;
      return;
    }
    if (param_1 == 2) {
      if (*(int **)((int)this + 0x34) != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar1 = (**(code **)(**(int **)((int)this + 0x34) + 0xe0))
                          (*(undefined4 *)((int)this + 0x38),(int)&param_1 + 2,&local_6,&local_8,
                           &local_c);
        if (iVar1 == 0) {
          *(int *)((int)this + 0x40) = (int)param_1._2_2_;
          *(int *)((int)this + 0x93) = (int)param_1._2_2_;
          *(int *)((int)this + 0x44) = (int)local_6;
          *(int *)((int)this + 0x48) = (int)local_8;
          *(int *)((int)this + 0x97) = (int)local_6;
          *(int *)((int)this + 0x9b) = (int)local_8;
          *(undefined4 *)((int)this + 0x3c) = local_c;
          goto LAB_005f5d4b;
        }
      }
      *(undefined4 *)((int)this + 0x104) = 5;
    }
  }
  *(undefined4 *)((int)this + 0x104) = 5;
  return;
}

