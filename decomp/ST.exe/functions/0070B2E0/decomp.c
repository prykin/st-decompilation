
uint __cdecl FUN_0070b2e0(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 local_50 [16];
  undefined1 local_10 [12];
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar6);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar6;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,0x215,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7effe0,0x217);
    return 0xff;
  }
  puVar3 = FUN_006f2310(0xb,param_2,(undefined4 *)local_10,param_3);
  if (puVar3 == (undefined4 *)0x0) {
    DAT_00858df8 = (undefined1 *)uVar6;
    return 0xfffffffc;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  return local_10._2_4_ & 0xff;
}

