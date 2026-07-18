
undefined4 __cdecl
thunk_FUN_00586240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [5];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  puVar2 = auStack_30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_1c = param_1;
  auStack_30[1] = param_5;
  uStack_14 = param_3;
  uStack_c = param_6;
  uStack_18 = param_2;
  uStack_10 = param_4;
  auStack_30[0] = 0xb4;
  auStack_30[2] = 0;
  auStack_30[3] = 1;
  uStack_8 = param_7;
  (**(code **)(*DAT_00802a38 + 8))(0x131,0,&param_5,auStack_30,0);
  return param_5;
}

