
undefined4 __cdecl
FUN_00584a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined2 param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;

  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_24 = param_1;
  local_38[1] = param_6;
  local_18 = param_4;
  local_1c = param_3;
  local_10 = param_8;
  local_20 = param_2;
  local_c = param_9;
  local_38[0] = 0xaa;
  local_38[2] = 0;
  local_38[3] = 1;
  local_14 = param_5;
  (*PTR_00802a38->vtable->vfunc_08)(0x130,0,&param_6,local_38,0);
  return param_6;
}

