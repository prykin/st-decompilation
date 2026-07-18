
void thunk_FUN_0062e170(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [5];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar2 = auStack_30;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  auStack_30[3] = 1;
  auStack_30[2] = 1;
  auStack_30[0] = 0x140;
  auStack_30[1] = param_1;
  iStack_1c = param_2 * 0xc9 + 100;
  iStack_18 = param_3 * 0xc9 + 100;
  uStack_10 = param_7;
  iStack_14 = param_4 * 200 + 100;
  uStack_c = param_5;
  uStack_8 = param_6;
  (**(code **)(*DAT_00802a38 + 8))(0x144,0,0,auStack_30,0);
  return;
}

