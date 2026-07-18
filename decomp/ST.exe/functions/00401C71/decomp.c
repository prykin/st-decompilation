
void __thiscall thunk_FUN_00544100(void *this,int param_1,undefined4 *param_2,int param_3)

{
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(&DAT_00808276 + param_1 * 4);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(&DAT_008082ee + param_1 * 4);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(&DAT_00808366 + param_1 * 4);
  FUN_006e6000(this,3,1,param_2);
  return;
}

