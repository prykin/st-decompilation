
undefined4 __cdecl
FUN_0061d0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [5];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_a;
  
  puVar2 = local_48;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_30 = param_2;
  local_34 = param_1;
  local_24 = param_5;
  local_48[1] = param_7;
  local_28 = param_4;
  local_a = param_11;
  local_2c = param_3;
  local_1c = param_10;
  local_18 = param_12;
  local_20 = param_6;
  local_c = (undefined2)param_9;
  local_48[0] = 0xf0;
  local_48[2] = 0;
  local_48[3] = 1;
  local_10 = param_8;
  (*PTR_00802a38->vtable->vfunc_08)(0x136,0,&param_9,local_48,0);
  return param_9;
}

