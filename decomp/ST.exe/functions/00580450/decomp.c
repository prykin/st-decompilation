
undefined4 __cdecl
FUN_00580450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  local_14 = param_2;
  local_c = param_5;
  local_8 = param_4;
  local_2c[0] = 0x5a;
  local_2c[1] = 0xff;
  local_2c[2] = 2;
  local_2c[3] = 1;
  local_10 = param_3;
  (**(code **)(*DAT_00802a38 + 8))(0x10b,0,&param_1,local_2c,0);
  return param_1;
}

