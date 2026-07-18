
void __thiscall FUN_00694070(void *this,int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_00693e60(this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x24) = *param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_2[1];
    *(undefined4 *)(iVar1 + 0x2c) = param_3;
  }
  return;
}

