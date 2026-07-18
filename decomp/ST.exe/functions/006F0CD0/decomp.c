
ushort * __cdecl FUN_006f0cd0(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_44 [16];
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    puVar3 = FUN_006f1ce0(0x1b,param_2,(int *)0x0,param_3);
    DAT_00858df8 = (undefined1 *)uVar5;
    return puVar3;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,700,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (ushort *)(*pcVar1)();
    return puVar3;
  }
  FUN_006a5e40(iVar2,0,0x7eef88,0x2be);
  return (ushort *)0x0;
}

