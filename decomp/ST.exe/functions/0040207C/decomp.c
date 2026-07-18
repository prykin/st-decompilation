
void __thiscall thunk_FUN_00419d30(void *this,int param_1)

{
  undefined4 in_EAX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  
  thunk_FUN_00440860(0,*(int **)((int)this + 0x24),
                     CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)((int)this + 0x32)));
  thunk_FUN_00440990(0,*(int **)((int)this + 0x24),
                     CONCAT22(extraout_var_00,*(undefined2 *)((int)this + 0x32)));
  thunk_FUN_0042f2b0(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)((int)this + 0x24)),
                     CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x30)),
                     CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x32)),this,param_1);
  return;
}

