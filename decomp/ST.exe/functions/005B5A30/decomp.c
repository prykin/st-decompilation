
void FUN_005b5a30(int param_1,int *param_2,int param_3,byte param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_94;
  undefined4 local_90 [16];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_40 = param_2[2];
  if (local_40 / 2 <= param_3) {
    param_3 = local_40 / 2;
  }
  local_10 = param_2[3];
  if (local_10 / 2 <= param_3) {
    param_3 = local_10 / 2;
  }
  local_20 = *param_2;
  local_4c = param_2[1];
  local_50 = local_20 + param_3;
  local_48 = (local_20 - param_3) + -1 + local_40;
  local_40 = local_20 + -1 + local_40;
  local_3c = local_4c + param_3;
  local_2c = local_4c + local_10 + -1;
  local_34 = ((local_4c + local_10) - param_3) + -1;
  local_94 = DAT_00858df8;
  DAT_00858df8 = &local_94;
  local_44 = local_4c;
  local_38 = local_40;
  local_30 = local_48;
  local_28 = local_50;
  local_24 = local_2c;
  local_1c = local_34;
  local_18 = local_20;
  local_14 = local_3c;
  local_c = local_40;
  local_8 = local_3c;
  iVar2 = __setjmp3(local_90,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (-1 < (int)param_5) {
      FUN_006c7ea0(param_1,0,&local_50,8,param_5);
    }
    FUN_006c7f10(param_1,0,&local_50,8,param_4);
    DAT_00858df8 = (undefined4 *)local_94;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_94;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0xa0,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cca38,0xa0);
  return;
}

