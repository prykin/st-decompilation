
undefined4 __cdecl
thunk_FUN_00581120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_34 [5];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  puVar2 = auStack_34;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_20 = param_1;
  auStack_34[1] = param_6;
  uStack_18 = param_3;
  uStack_10 = param_5;
  uStack_c = param_7;
  uStack_1c = param_2;
  uStack_8 = param_8;
  auStack_34[0] = 0x104;
  auStack_34[2] = 0;
  auStack_34[3] = 1;
  uStack_14 = param_4;
  (**(code **)(*DAT_00802a38 + 8))(0x138,0,&param_6,auStack_34,0);
  return param_6;
}

