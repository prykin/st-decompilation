
int __cdecl FUN_00716e60(undefined4 param_1,char *param_2,char param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  short local_14 [5];
  short local_a;
  ushort *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_3 == '\x1d') {
      local_8 = FUN_006f1ce0(0x1d,param_2,(int *)0x0,param_4);
      if (local_8 == (ushort *)0x0) {
        FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0xd2);
      }
      puVar3 = FUN_006f2310(6,(char *)local_8,(undefined4 *)local_14,param_4);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0xd3);
      }
      FUN_006f20e0((uint *)&local_8);
      DAT_00858df8 = (undefined4 *)local_58;
      return (int)local_a;
    }
    puVar3 = FUN_006f2310(0x13,param_2,(undefined4 *)local_14,param_4);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0xd8);
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return (int)local_14[0];
  }
  DAT_00858df8 = (undefined4 *)local_58;
  if ((param_4 == 0) && (iVar2 == -4)) {
    return -4;
  }
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mftspr_cpp_007f0504,0xde,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7f0504,0xe0);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

