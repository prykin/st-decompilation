
int FUN_006e51f0(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  int *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    puVar3 = FUN_006ae290((uint *)0x0,0x14,8,0x14);
    local_8[4] = (int)puVar3;
    puVar3 = FUN_006ae290((uint *)0x0,0x14,0x20,10);
    local_8[1] = (int)puVar3;
    puVar3 = FUN_006ae290((uint *)0x0,0x14,0x20,10);
    local_8[2] = (int)puVar3;
    iVar2 = (**(code **)(*local_8 + 0x14))();
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee78c,0x364);
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x366,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ee78c,0x367);
  return iVar2;
}

