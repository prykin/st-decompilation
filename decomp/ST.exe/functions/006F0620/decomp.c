
int * __cdecl FUN_006f0620(short *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  int *local_8;
  
  uVar5 = DAT_00858df8;
  local_8 = (int *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if (param_1 == (short *)0x0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0x20a);
    }
    local_8 = FUN_006f0700((int)*param_1 / 2,(int)param_1[1] / 2);
    FUN_006f0800((int)param_1,local_8);
    DAT_00858df8 = (undefined1 *)uVar5;
    return local_8;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar3 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x210,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    piVar4 = (int *)(*pcVar1)();
    return piVar4;
  }
  FUN_006f07e0((int *)&local_8);
  FUN_006a5e40(iVar2,0,0x7eef88,0x213);
  return (int *)0x0;
}

