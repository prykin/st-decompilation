
undefined4 __cdecl FUN_0071adb0(byte *param_1,uint param_2,int param_3,char *param_4,char param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (((param_3 == 0) || (param_1 == (byte *)0x0)) || (param_4 == (char *)0x0)) {
      FUN_006a5e40(-6,DAT_007ed77c,0x7f08c8,0x2d);
    }
    FUN_006f13f0(0,param_4,param_1,param_2,(undefined4 *)0x0,param_5,(uint *)0x0);
    DAT_00858df8 = (undefined4 *)local_48;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfany_cpp_007f08c8,0x31,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7f08c8,0x33);
  return 0;
}

