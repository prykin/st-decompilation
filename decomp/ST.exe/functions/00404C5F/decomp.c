
void thunk_FUN_005b5a30(int param_1,int *param_2,int param_3,byte param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_94;
  undefined4 auStack_90 [16];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_40 = param_2[2];
  if (iStack_40 / 2 <= param_3) {
    param_3 = iStack_40 / 2;
  }
  iStack_10 = param_2[3];
  if (iStack_10 / 2 <= param_3) {
    param_3 = iStack_10 / 2;
  }
  iStack_20 = *param_2;
  iStack_4c = param_2[1];
  iStack_50 = iStack_20 + param_3;
  iStack_48 = (iStack_20 - param_3) + -1 + iStack_40;
  iStack_40 = iStack_20 + -1 + iStack_40;
  iStack_3c = iStack_4c + param_3;
  iStack_2c = iStack_4c + iStack_10 + -1;
  iStack_34 = ((iStack_4c + iStack_10) - param_3) + -1;
  uStack_94 = DAT_00858df8;
  DAT_00858df8 = &uStack_94;
  iStack_44 = iStack_4c;
  iStack_38 = iStack_40;
  iStack_30 = iStack_48;
  iStack_28 = iStack_50;
  iStack_24 = iStack_2c;
  iStack_1c = iStack_34;
  iStack_18 = iStack_20;
  iStack_14 = iStack_3c;
  iStack_c = iStack_40;
  iStack_8 = iStack_3c;
  iVar2 = __setjmp3(auStack_90,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (-1 < (int)param_5) {
      FUN_006c7ea0(param_1,0,&iStack_50,8,param_5);
    }
    FUN_006c7f10(param_1,0,&iStack_50,8,param_4);
    DAT_00858df8 = (undefined4 *)uStack_94;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_94;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0xa0,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cca38,0xa0);
  return;
}

