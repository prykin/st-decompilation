
void __cdecl
thunk_FUN_0062b770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

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
  undefined4 uStack_8;
  
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  uStack_18 = *(undefined4 *)(param_5 + 0x18);
  uStack_14 = *(undefined4 *)(param_5 + 0x24);
  uStack_10 = param_6;
  uStack_8 = param_8;
  auStack_44[0] = 0xd2;
  auStack_44[1] = 0xff;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_c = param_7;
  (**(code **)(*DAT_00802a38 + 8))(0x124,0,0,auStack_44,0);
  return;
}

