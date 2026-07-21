
undefined4 __cdecl
FUN_0057df20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar2 = local_2c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18 = param_1;
  local_8 = param_5;
  local_c = param_4;
  local_2c[1] = param_6;
  local_10 = param_3;
  local_2c[0] = 0x32;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_2;
  (*PTR_00802a38->vtable->vfunc_08)(0x107,0,&param_6,local_2c,0);
  return param_6;
}

