
undefined4 __cdecl
FUN_00590010(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_38 [5];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar4 = local_38;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_14 = param_4;
  local_8 = param_7;
  local_38[1] = param_9;
  local_18 = param_8;
  local_38[0] = 0x8c;
  local_38[2] = 0;
  local_38[3] = 1;
  local_10 = param_6;
  local_c = param_5;
  if ((((param_1 < 0) || (param_2 < 0)) || (param_3 < 0)) ||
     (((DAT_007fb240 <= param_1 || (DAT_007fb242 <= param_2)) || (4 < param_3)))) {
    iVar3 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x4bb,0,0,&DAT_007a4ccc,
                               s_STSharkC__CreateShark___Bad_para_007cbbf4);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
  }
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  (**(code **)(*DAT_00802a38 + 8))(0x129,0,&param_9,local_38,0);
  return param_9;
}

