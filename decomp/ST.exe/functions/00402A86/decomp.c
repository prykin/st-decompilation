
void __cdecl
thunk_FUN_0061f5c0(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [5];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  puVar2 = auStack_30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_18 = param_4;
  auStack_30[2] = 1;
  auStack_30[3] = 1;
  uStack_1a = param_3;
  uStack_12 = param_7;
  uStack_1c = param_2;
  uStack_14 = param_6;
  auStack_30[0] = 0x168;
  auStack_30[1] = 0xff;
  uStack_16 = param_5;
  (**(code **)(*DAT_00802a38 + 8))(0x14c,0,0,auStack_30,0);
  return;
}

