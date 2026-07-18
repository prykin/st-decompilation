
undefined4 __cdecl
thunk_FUN_00590010(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_38 [5];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar4 = auStack_38;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_14 = param_4;
  uStack_8 = param_7;
  auStack_38[1] = param_9;
  uStack_18 = param_8;
  auStack_38[0] = 0x8c;
  auStack_38[2] = 0;
  auStack_38[3] = 1;
  uStack_10 = param_6;
  uStack_c = param_5;
  if ((((param_1 < 0) || (param_2 < 0)) || (param_3 < 0)) ||
     (((DAT_007fb240 <= param_1 || (DAT_007fb242 <= param_2)) || (4 < param_3)))) {
    iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x4bb,0,0,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
  }
  iStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  (**(code **)(*DAT_00802a38 + 8))(0x129,0,&param_9,auStack_38,0);
  return param_9;
}

