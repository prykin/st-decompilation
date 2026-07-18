
void __cdecl
FUN_006405f0(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined2 param_5
            ,undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
            undefined2 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_38 [5];
  undefined4 local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  puVar2 = local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 0xa8) {
    local_24 = 1;
  }
  else if (param_1 == 0xbe) {
    local_24 = 2;
  }
  local_1c = param_5;
  local_38[1] = param_2;
  local_10 = param_2;
  local_8 = param_4;
  local_16 = param_8;
  local_c = param_3;
  local_18 = param_7;
  local_1a = param_6;
  local_6 = param_10;
  local_38[0] = 0x78;
  local_14 = param_9;
  local_12 = 0;
  thunk_FUN_0054cc20(0x78,0,0,local_38,0);
  return;
}

