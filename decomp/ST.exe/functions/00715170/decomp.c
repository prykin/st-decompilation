
undefined4 __cdecl FUN_00715170(uint *param_1,int param_2,char *param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_5c;
  undefined4 local_58 [16];
  uint local_18 [3];
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) ||
       (param_1[7] == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f03fc,0x3a);
    }
    local_18[0] = param_1[3];
    local_8 = (byte *)FUN_006b0020(param_1,(int *)&local_c);
    FUN_006f13f0(0x14,param_3,local_8,local_c,local_18,param_4,(uint *)0x0);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  iVar3 = FUN_006ad4d0(s_E__ourlib_mfdarr_cpp_007f03fc,0x45,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7f03fc,0x49);
  return 0;
}

