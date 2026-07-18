
undefined4 __cdecl
thunk_FUN_00582460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined2 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  puVar2 = auStack_44;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  uStack_20 = param_5;
  auStack_44[1] = param_9;
  uStack_1c = param_6;
  uStack_18 = param_7;
  uStack_14 = param_8;
  uStack_c = param_11;
  auStack_44[0] = 0xfa;
  auStack_44[2] = 0;
  auStack_44[3] = 1;
  uStack_10 = 0;
  uStack_8 = param_12;
  (**(code **)(*DAT_00802a38 + 8))(0x137,0,&param_9,auStack_44,0);
  return param_9;
}

