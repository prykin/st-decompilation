
uint __cdecl FUN_007269a0(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined1 local_a;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  uVar2 = __setjmp3(local_50,0,unaff_ESI,uVar5);
  if (uVar2 == 0) {
    puVar3 = FUN_006f2310(0x15,param_2,&local_10,param_3);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_006a5e40(-4,DAT_007ed77c,0x7f0c8c,0x1a1);
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return CONCAT31((int3)((uint)puVar3 >> 8),local_a);
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  if ((param_3 == 0) && (uVar2 == 0xfffffffc)) {
    return 0xfc;
  }
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfspr_cpp_007f0c8c,0x1a5,0,uVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  FUN_006a5e40(0xff,0,0x7f0c8c,0x1a7);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  return 0xffffffff;
}

