
int FUN_006d4f70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  this = (void *)Library::MSVCRT::FUN_0072e530(0xa8);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_006d70b0(this,0,0,&local_8,param_3);
  }
  *param_1 = puVar1;
  if (local_8 == 0) {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1368,param_2);
    return iVar2;
  }
  return local_8;
}

