
undefined4 FUN_004abf00(char param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 local_48 [16];
  uint local_8;
  
  uVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar3);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar3;
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xac,0,iVar2,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0xffffffff;
  }
  if (*(int *)(local_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xa5);
  }
  if (*(int *)(*(int *)(*(int *)(local_8 + 0x20) + param_1 * 0x24) + 0x29) != 0) {
    *(char *)(local_8 + 0x13) = param_1;
    *(undefined4 *)(local_8 + 0x30) = param_2;
    if (*(char *)(local_8 + 0x11) == '\0') {
      if (*(char *)(local_8 + 0x10) == '\0') {
        uVar5 = *(uint *)(local_8 + 0x34);
        uVar4 = *(uint *)(local_8 + 0x18);
        puVar6 = &LAB_00404999;
      }
      else {
        uVar5 = *(uint *)(local_8 + 0x34);
        uVar4 = *(uint *)(local_8 + 0x18);
        puVar6 = &LAB_00405b64;
      }
      FUN_006e9520(*(void **)(local_8 + 0x3c),uVar4,uVar5,(uint)puVar6,local_8);
    }
    DAT_00858df8 = (undefined1 *)uVar3;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  return 0;
}

