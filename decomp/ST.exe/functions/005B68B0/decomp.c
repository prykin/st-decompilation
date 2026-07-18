
void FUN_005b68b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  undefined4 *local_8;
  
  if (param_8 != (undefined4 *)0x0) {
    local_8 = param_8;
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      thunk_FUN_005b67a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      local_c = param_4 + -0x15 + param_6;
      FUN_006c6660(param_1,local_c,param_5 + 0x26,7,param_7 - 0x4cU,3,0);
      FUN_006c6470(param_1,local_c,param_5 + 0x26,(undefined4 *)0x7,param_7 - 0x4cU,3,*local_8);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0x147,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cca38,0x147);
  }
  return;
}

