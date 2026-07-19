
undefined4 __thiscall FUN_006d71d0(void *this,int param_1)

{
  int *this_00;
  void *this_01;
  undefined4 *puVar1;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)((int)this + 0x8c) == 0) || (*(int *)((int)this + 0x90) == 0)) {
    this_00 = (int *)Library::MSVCRT::FUN_0072e530(0xe8);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_0074cdc5(this_00,0,(int)this,&local_8,u_Input_007ee27c);
      *this_00 = (int)&PTR_FUN_0079ded8;
      this_00[3] = (int)&PTR_FUN_0079de90;
      this_00[4] = (int)&PTR_FUN_0079de7c;
      this_00[0x26] = (int)&PTR_FUN_0079de58;
    }
    *(int **)((int)this + 0x8c) = this_00;
    if (local_8 < 0) {
      if (this_00 != (int *)0x0) {
        (**(code **)(*this_00 + 0xc))(1);
      }
    }
    else if (this_00 != (int *)0x0) {
      this_01 = (void *)Library::MSVCRT::FUN_0072e530(0xb0);
      if (this_01 == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_0074cfc0(this_01,0,(int)this,&local_8,u_Output_007ee288);
      }
      *(undefined4 **)((int)this + 0x90) = puVar1;
      if ((local_8 < 0) || (puVar1 == (undefined4 *)0x0)) {
        if (*(int **)((int)this + 0x8c) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
        }
        *(undefined4 *)((int)this + 0x8c) = 0;
        if (*(int **)((int)this + 0x90) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x90) + 0xc))(1);
        }
        *(undefined4 *)((int)this + 0x90) = 0;
        return 0;
      }
      goto LAB_006d728d;
    }
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  else {
LAB_006d728d:
    if (param_1 == 0) {
      return *(undefined4 *)((int)this + 0x8c);
    }
    if (param_1 == 1) {
      return *(undefined4 *)((int)this + 0x90);
    }
  }
  return 0;
}

