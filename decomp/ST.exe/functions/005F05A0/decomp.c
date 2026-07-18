
void __thiscall FUN_005f05a0(void *this,undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_e = (**(code **)(*(int *)this + 0x144))();
    local_c = param_1;
    local_a = param_2;
    local_14 = 0x5dda;
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

