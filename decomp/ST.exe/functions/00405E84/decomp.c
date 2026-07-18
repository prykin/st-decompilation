
undefined4 __cdecl
thunk_FUN_00580450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_2c [5];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar2 = auStack_2c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_c = param_5;
  uStack_8 = param_4;
  auStack_2c[0] = 0x5a;
  auStack_2c[1] = 0xff;
  auStack_2c[2] = 2;
  auStack_2c[3] = 1;
  uStack_10 = param_3;
  (**(code **)(*DAT_00802a38 + 8))(0x10b,0,&param_1,auStack_2c,0);
  return param_1;
}

