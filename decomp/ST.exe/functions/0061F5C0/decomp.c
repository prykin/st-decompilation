
void __cdecl
FUN_0061f5c0(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [5];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  puVar2 = local_30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_18 = param_4;
  local_30[2] = 1;
  local_30[3] = 1;
  local_1a = param_3;
  local_12 = param_7;
  local_1c = param_2;
  local_14 = param_6;
  local_30[0] = 0x168;
  local_30[1] = 0xff;
  local_16 = param_5;
  (*PTR_00802a38->vtable->vfunc_08)(0x14c,0,0,local_30,0);
  return;
}

