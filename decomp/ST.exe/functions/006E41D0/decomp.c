
int FUN_006e41d0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  uVar5 = DAT_00858df8;
  local_c = 0;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if (*(int *)(local_8 + 0x14) == 0) {
      puVar3 = FUN_006ae290((uint *)0x0,10,0x10,10);
      *(uint **)(local_8 + 0x14) = puVar3;
    }
    FUN_006ae1c0(*(uint **)(local_8 + 0x14),param_1);
    DAT_00858df8 = (undefined1 *)uVar5;
    return local_c;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x142,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ee78c,0x143);
  return iVar2;
}

