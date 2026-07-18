
int FUN_00710d80(byte param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  uVar4 = DAT_00858df8;
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  DAT_00858df8 = &stack0xffffffa8;
  iVar2 = __setjmp3(local_54,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if ((*(int *)(local_14 + 0x72) == 0) || (*(int *)(local_14 + 0x76) == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x4bc);
    }
    if ((param_4 < 1) || (param_5 < 1)) {
      iVar2 = *(int *)(local_14 + 0x76);
    }
    else {
      local_8 = FUN_006b55f0((undefined4 *)0x0,0,0,0,*(int *)(local_14 + 0x72),
                             *(int *)(local_14 + 0x76),param_2,param_3,param_4,param_5);
      if (local_8 == (undefined4 *)0x0) {
        FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x4c3);
      }
      local_10 = 1;
      iVar2 = FUN_006b4fa0((int)local_8);
    }
    FUN_006b4b20(&local_c,(uint)local_8,iVar2,param_1);
    if ((local_10 != 0) && (local_8 != (undefined4 *)0x0)) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return local_c;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x4ce,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((local_10 != 0) && (local_8 != (undefined4 *)0x0)) {
    FUN_006ab060(&local_8);
  }
  if (local_c != 0) {
    FUN_006ab060(&local_c);
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0x4d3);
  return 0;
}

