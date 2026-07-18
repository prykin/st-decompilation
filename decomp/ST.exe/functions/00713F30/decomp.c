
int FUN_00713f30(int param_1,void *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6,int param_7,uint param_8,uint param_9,int param_10,int param_11,
                int param_12,undefined4 param_13)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [17];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (void *)0x0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0xa39);
    }
    local_8 = (uint *)FUN_00713080((char *)0x0,param_1);
    iVar2 = FUN_00713b00(local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13);
    if (local_8 != (uint *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return iVar2;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0xa3e,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (local_8 != (uint *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0xa41);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

