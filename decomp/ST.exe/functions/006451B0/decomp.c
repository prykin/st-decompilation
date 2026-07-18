
undefined4 FUN_006451b0(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if (*param_2 == 0xffffffff) {
      local_10 = param_1;
      local_c = 1;
      uVar3 = FUN_006ae1c0(*(uint **)(local_8 + 0x241),&local_10);
      *param_2 = uVar3;
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x486,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7d25c0,0x487);
  return 0xffffffff;
}

