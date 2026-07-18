
int FUN_00710a90(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x460);
    }
    FUN_00710f00();
    *(int *)(local_8 + 0x72) = param_1;
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0(param_1);
    }
    *(int *)(local_8 + 0x76) = param_2;
    *(undefined4 *)(local_8 + 0x7a) = 0;
    if ((param_5 < 1) || (param_6 < 1)) {
      param_5 = *(int *)(param_1 + 4);
      param_6 = *(int *)(param_1 + 8);
    }
    *(int *)(local_8 + 0x68) = param_5;
    *(undefined4 *)(local_8 + 0x60) = param_3;
    *(int *)(local_8 + 0x6c) = param_6;
    *(undefined4 *)(local_8 + 100) = param_4;
    *(undefined4 *)(local_8 + 0x50) = 0;
    *(undefined4 *)(local_8 + 0x54) = 0;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x476,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0x478);
  return iVar2;
}

