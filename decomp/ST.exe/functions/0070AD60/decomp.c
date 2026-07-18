
undefined4 __cdecl
FUN_0070ad60(undefined4 param_1,char *param_2,int param_3,uint param_4,uint *param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_4c [16];
  uint local_c;
  int local_8;
  
  uVar4 = DAT_00858df8;
  local_c = 0;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,uVar4);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,400,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006f20e0(&local_c);
    if (local_8 != 0) {
      FUN_006ab060(&local_8);
    }
    FUN_006a5e40(iVar2,0,0x7effe0,0x195);
    return 0;
  }
  local_c = FUN_0070ad40(param_1,param_2,0,param_7);
  if (local_c == 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  local_8 = FUN_00751c40(local_c,param_4,param_3,param_5,param_6);
  FUN_006f20e0(&local_c);
  DAT_00858df8 = (undefined1 *)uVar4;
  return local_8;
}

