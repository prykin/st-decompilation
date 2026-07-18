
undefined4 __cdecl
thunk_FUN_0061d0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [5];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined4 uStack_a;
  
  puVar2 = auStack_48;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_30 = param_2;
  uStack_34 = param_1;
  uStack_24 = param_5;
  auStack_48[1] = param_7;
  uStack_28 = param_4;
  uStack_a = param_11;
  uStack_2c = param_3;
  uStack_1c = param_10;
  uStack_18 = param_12;
  uStack_20 = param_6;
  uStack_c = (undefined2)param_9;
  auStack_48[0] = 0xf0;
  auStack_48[2] = 0;
  auStack_48[3] = 1;
  uStack_10 = param_8;
  (**(code **)(*DAT_00802a38 + 8))(0x136,0,&param_9,auStack_48,0);
  return param_9;
}

