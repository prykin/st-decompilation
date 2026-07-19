
undefined4 __thiscall
FUN_006e6170(void *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)FUN_006e54b0(param_1,param_2,param_3,param_5);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[6] = *(undefined4 *)((int)this + 0x20);
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
    puVar3 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_14 = 2;
    local_10 = param_4;
    iVar2 = (**(code **)*puVar1)(local_24);
    if (iVar2 == 0xffff) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x503);
    }
    return 0;
  }
  return 0xfffffffe;
}

