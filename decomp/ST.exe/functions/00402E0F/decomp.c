
undefined4 __cdecl
thunk_FUN_00584a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined2 param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_38 [5];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  puVar2 = auStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_24 = param_1;
  auStack_38[1] = param_6;
  uStack_18 = param_4;
  uStack_1c = param_3;
  uStack_10 = param_8;
  uStack_20 = param_2;
  uStack_c = param_9;
  auStack_38[0] = 0xaa;
  auStack_38[2] = 0;
  auStack_38[3] = 1;
  uStack_14 = param_5;
  (**(code **)(*DAT_00802a38 + 8))(0x130,0,&param_6,auStack_38,0);
  return param_6;
}

