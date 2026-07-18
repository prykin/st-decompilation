
undefined4 __thiscall FUN_006903a0(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_0068e190(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(param_2);
    return uVar2;
  }
  return 0xffff;
}

