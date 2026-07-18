
undefined4 __cdecl FUN_0071a110(LPCSTR param_1,byte param_2,int param_3,char *param_4,char param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (((param_3 == 0) || (param_1 == (LPCSTR)0x0)) || (param_4 == (char *)0x0)) {
      FUN_006a5e40(-6,DAT_007ed77c,0x7f0800,0x97);
    }
    if (param_2 == 0) {
      local_8 = (byte *)FUN_0071ae80(param_1,&local_c);
    }
    else {
      local_8 = (byte *)FUN_00719ea0(param_1,(int *)&local_c);
    }
    FUN_0071a030(local_8,local_c,param_2,param_3,param_4,param_5);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfwav_cpp_007f0800,0xa2,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7f0800,0xa6);
  return 0;
}

